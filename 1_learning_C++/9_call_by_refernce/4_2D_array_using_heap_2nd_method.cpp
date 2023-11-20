#include<iostream>
using namespace std;
int main(){
    int row;
    cout <<" enter the no. of rows"<<endl;
    cin  >> row;
    int col;
    cout <<" enter the no. of column"<<endl;
    cin >> col;

    int **arr = new int*[row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }
    //creation done

    //taking input
    cout <<" enter the values in matrix"<<endl;

    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cin >> arr[i][j];
        }
    }

    //giving output
    cout <<"values of matrix is :"<<endl;
    cout <<endl;
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cout << arr[i][j] <<" ";
        }
        cout <<endl;
    }

    //releasing memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr;
    return 0;
}