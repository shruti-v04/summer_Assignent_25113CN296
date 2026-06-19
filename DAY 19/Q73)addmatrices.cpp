#include <iostream>
using namespace std;
 int main(){
    int r,c,MatA[10][10],matB[10][10],MatC[10][10];
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
    cout<<"enter the elements of matrix B:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matB[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            MatC[i][j]=MatA[i][j]+matB[i][j];
        }
    }
    cout<<"the sum of matrices A and B is:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<MatC[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
 }
