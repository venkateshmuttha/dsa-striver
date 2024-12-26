#include<bits/stdc++.h>
using namespace std;
void NumOnce(int a[],int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1){
            cout<<it.first;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    NumOnce(a,n);
}