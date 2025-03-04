#include<iostream>
using namespace std;
void insert(int *arr,int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={64,34,25,12,22,11,90},n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array: ";
    print(arr,n);
    insert(arr,n);
    cout<<"Sorted array: ";
    print(arr,n);
    return 0;
}
