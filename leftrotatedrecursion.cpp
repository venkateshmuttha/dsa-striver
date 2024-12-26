#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int a[],int n){
    if(i>=n/2){
        return;
    }
    swap(a[0],a[n-i-1]);
    reverse(i+1,a,n);
}
void leftRotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;

    leftRotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}