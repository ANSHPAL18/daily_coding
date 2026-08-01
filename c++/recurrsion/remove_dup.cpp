#include<iostream>
using namespace std;
void removeduplicates(char str[],int i,int j){
    if(str[i]=='\0') return;
    j=i+1;
    while(str[j]!='\0'){
        if(str[i]==str[j]){
            int k=j;
            while(str[k]!='\0'){
                str[k]=str[k+1];
                k++;
            }
        }
        else{
            j++;
        }
    }
    removeduplicates(str,i+1,j);
}
int main(){
    char s="aditya";
    removeduplicates(s,0,0);
}