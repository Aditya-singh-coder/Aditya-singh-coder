#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<" enter the size of matrix"<<endl;
    cin  >> n;
    int **arr = new int*[n];

    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }
    //creation done

    //taking input
    cout <<" enter the values in matrix"<<endl;

    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cin >> arr[i][j];
        }
    }

    //giving output
    cout <<"values of matrix is :"<<endl;
    cout <<endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout << arr[i][j] <<" ";
        }
        cout <<endl;
    }
    return 0;
}