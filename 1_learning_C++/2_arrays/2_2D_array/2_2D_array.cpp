// find sum of numbers in each row
#include<iostream>
#include<tuple>
using namespace std;

tuple<int,int,int> row_sum(int arr[][4],int row,int col){
    int sum[3]={0};
    for( int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i] += arr[i][j];
        }
    }
    return make_tuple(sum[0],sum[1],sum[2]);
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout <<"here is the matrix:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j]<<" ";
        }
        cout <<endl;
    }
    int sum1,sum2,sum3;
    tie(sum1,sum2,sum3)= row_sum(arr,3,4);
    cout <<"here is sum of its row:"<<endl;
    cout <<"row 1: "<<sum1<<"\nrow 2:"<<sum2<<"\nrow 3: "<<sum3<<endl;
    return 0;
}
