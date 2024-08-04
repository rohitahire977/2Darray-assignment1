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
            cin>>arr[i][j];
        }
    }
    int r1=0;
    int r2=0;
    int r3=0;
    for(int i=0;i<n;i++){
        if(i==0){
        for(int j=0;j<n;j++){
            r1+=arr[i][j];
        }
        }
        if(i==1){
        for(int j=0;j<n;j++){
            r2+=arr[i][j];
        }
    }
        if(i==2){
        for(int j=0;j<n;j++){
            r3+=arr[i][j];
        }
    }
    }
    if(r1>r2){
        if(r1>r3){
            cout<<"row1 is larger";
    }
    }
    if(r2>r3){
        if(r2>r1){
            cout<<"row2 is larger";
    }
    }
    else{
            cout<<"row3 is larger";
    }
}