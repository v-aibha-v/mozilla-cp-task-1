#include<iostream>
using namespace std;
//in this  we swap the pair from starting !
void Sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before array: ";
    print  (arr,n);
    Sort(arr,n);
    cout<<"Sorted array: ";
    print (arr,n);
    return 0;
}

