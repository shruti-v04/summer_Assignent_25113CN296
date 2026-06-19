#include <iostream>
using namespace std;
 int main(){
    int r,c,MatA[10][10],matB[10][10];;
    cout<<"enter the number of rows:";
    cin>>r;
    cout<<"enter the number of columns:";
    cin>>c;
    cout<<"enter the elements of matrix A:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>MatA[i][j];
        }
    }
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            matB[i][j]=MatA[j][i];
        }
    }
    cout<<"the transpose of the matrix is:"<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<matB[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }
 
