//  WAP to find a number in matrix. also find its row and column.

#include<iostream>
#include<tuple>
using namespace std;

tuple<bool,int,int> find_num(int arr[][4],int num, int row, int col ){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==num){
                return make_tuple(true,i,j);
            }
        }
    }
    return make_tuple(false,0,0);
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};


    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout << arr[row][col]<<" ";
        }
        cout <<endl;
    }

    cout <<"enter the element to search:\n";
    int target;
    cin>> target;
    int row,col;
    bool find;
    tie(find,row,col)=find_num(arr,target,3,4);
    if(find){
        cout <<" number exist "<<endl<<" at row: "<<row+1<<" and column "<<col+1;
    } 
    else{
        cout <<"it does not exist"<<endl;
    }
    return 0;
}