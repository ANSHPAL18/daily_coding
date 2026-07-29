#include <iostream>
using namespace std;

int main() {
    int arr[100] = {5, 10, 15, 20, 25,21,30};
    int n = 7;


    // Delete index 3
   int k = 4;
    for (int i = k; i < n - 1; ++i){
       arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
}
