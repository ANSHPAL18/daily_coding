#include<iostream>
using namespace std;
int main(){
    int arr[100][100];
    int n,m;
    printf("enter rows=");
    scanf("%d",&n);
    printf("enter columns=");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<m;j++){
        int colsum=0;
        for(int i=0;i<n;i++){
          colsum+=arr[i][j];
        }
        cout<<"colsumfor"<<j<<"="<<colsum<<endl;
    }
    
}
