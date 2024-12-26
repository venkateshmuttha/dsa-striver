#include<bits/stdc++.h>
using namespace std;
void reversee(int i,int a[],int n){
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    reversee(i+1,a,n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reversee(0,a,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}