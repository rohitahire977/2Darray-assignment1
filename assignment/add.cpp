#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of rows:";
    cin>>m;
    cout<<"enter no. of columns:";
    cin>>n;
    int arr[m][n];
    int brr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    //addition
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            brr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}