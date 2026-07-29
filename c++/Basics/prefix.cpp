#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
  vector<int>arr(n);
    printf("enter elements=");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    cout<<endl;
//    vector<int>prefix(n);
    //  prefix[0]=arr[0];
    // for(int i=1;i<n;i++){
    //     prefix[i]=prefix[i-1]+arr[i];
    // }
    //  for(int i=0;i<n;i++){
    //     printf("%d ",prefix[i]);
    // }/
   vector<int>suffix(n);
   suffix[n-1]=arr[n-1];
   for(int i=n-2;i>=0;i--){
      suffix[i]=suffix[i+1]+arr[i];
   }
   for(int i=0;i<n;i++){
    printf("%d ",suffix[i]);
   }
 return 0;
}
