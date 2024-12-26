#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>& a, int start, int end) {
    if (start >= end) return;
    swap(a[start], a[end]);
    reverse(a, start + 1, end - 1);
}
void leftRotate(vector<int>&a,int n,int d){
    d=d%n;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cin>>d;
    leftRotate(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
    