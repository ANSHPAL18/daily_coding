#include<iostream>
using namespace std;
class maxheap{
    int *arr;
    int size;
    int totalsize;
    public:
    maxheap(int val){
        arr=new int[val];
        size=0;
        totalsize=val;
    }
    void insert(int val){
       if(size==totalsize){
          cout<<"heap overflow\n";
          return;
       }
       arr[size]=val;
       int index=size;
       size++;
       while(index>0&&arr[(index-1)/2]<arr[index]){
         swap(arr[(index-1)/2],arr[index]);
         index=(index-1)/2;
       }
       cout<<arr[index]<<" inserted to heaap"<<endl;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void heapify(int index){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;
        if(left<size&&arr[left]>arr[largest])
        largest=left;
        if(right<size&&arr[right]>arr[largest])
        largest=right;

        if(largest!=index){
            swap(arr[index],arr[largest]);
            heapify(largest);
        }
    }
    void Delete(){
        if(size==0){
            cout<<"heap unuderflow\n";
        }
        cout<<arr[0]<<" deleted from heap"<<endl;
        arr[0]=arr[size-1];
        size--;
        if(size==0) return;
        heapify(0);
    }
};
int main(){
    maxheap h(6);
    h.insert(6);
    h.insert(54);
    h.Delete();
    h.insert(1);
    h.insert(56);
    h.insert(46);
    h.insert(7);
    h.Delete();
    h.insert(8);
    h.print();
}
