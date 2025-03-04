#include<iostream>
using namespace std;
// in this we find the min element in the whoel array and then do further modification
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}
void print(int *arr,int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={64,34,25,12,22,11,90},n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before array: ";
    print(arr,n);
    selectionSort(arr,n);
    cout<<"Sorted array: ";
    print(arr,n);
}
