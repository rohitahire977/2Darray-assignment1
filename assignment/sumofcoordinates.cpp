#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no. of rows:";
    cin>>n;
    cout<<"enter no. of columns:";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    int l1,l2,r1,r2;
    int sum=0;
    //arr(l1,r1)+arr(l2,r2)
    cout<<"enter the value of l1 co-ordinate:";
    cin>>l1;
    cout<<"enter the value of r1 co-ordinate:";
    cin>>r1;
    cout<<"enter the value of l2 co-ordinate:";
    cin>>l2;
    cout<<"enter the value of r2 co-ordinate:";
    cin>>r2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=arr[l1][r1]+arr[l2][r2];
        }
    }
    cout<<sum;
}