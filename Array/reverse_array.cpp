#include<iostream>
using namespace std;

void rev(int arr[], int n){
    int start = 0,end = n-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5;
    rev(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
}