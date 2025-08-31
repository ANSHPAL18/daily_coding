#include<iostream>
using namespace std;
void prime(int n){
     for(int i=2;i<=n;i++){
        int c=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                c=c+1;
            }
        }
        
        if(c<1){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"enter number=";
    cin>>n;
    prime(n);
}
// #include <iostream>
// using namespace std;

// void prime(int n) {
//     for (int i = 2; i <= n; i++) {
//         int count = 0;
//         for (int j = 2; j <=i; j++) {
//             if (i % j == 0) {
//                 count+=1;
//             }
//         }
//         if (count <=1) {
//             cout << i << " ";
//         }
//     }
// }

// int main() {
//     int n;

//     cout << "Enter number=";
//     cin >> n;
//     prime(n);
//     return 0;
// }
