#include<iostream>
using namespace std;
int main(){
    //enter an odd matrix
    int m,n;
    cout<<"enter row no.";
    cin>>m;
    cout<<"enter column no.";
    cin>>n;
    int matrix[m][n];
    //m and n should be ODD.
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 || j==n/2){
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}