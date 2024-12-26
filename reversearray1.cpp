#include<bits/stdc++.h>
using namespace std;
void reverse(int l,int a[],int r){
    if(l>=r){
        return;
    }
    swap(a[l],a[r]);
    reverse(l+1,a,r-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(0,a,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}