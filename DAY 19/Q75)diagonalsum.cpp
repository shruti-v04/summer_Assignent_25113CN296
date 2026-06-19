#include <iostream>
using namespace std;
 int main(){
    int r,c,MatA[10][10],Sum=0;
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

    for (int i = 0; i < r && i < c; i++) {
        Sum += MatA[i][i];
    
    }    
    cout<<"the sum of the diagonal elements is: "<<Sum<<endl;

    return 0;
 }
