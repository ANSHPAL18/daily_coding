//  #include <stdio.h>

// int main(){
//     int arr[5]={2,2,3,2,2};
//     int product=1;
//     for(int i=0;i<=4;i++){
//         product*=arr[i];
//      }
//      printf ("%d",product);
//      return 0;
// }
  #include <stdio.h>

int main()
{
    int n;
    printf("enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    int product = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d",&arr[i]);
        product = product * arr[i];
    }
    printf("the product of %d digits is: %d ", n, product);
    return 0;
}