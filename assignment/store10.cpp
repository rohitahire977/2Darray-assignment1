#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of rows:";
    cin>>m;
    cout<<"enter no. of columns:";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=10;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}