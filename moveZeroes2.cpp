#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>&a,int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(a[i]!=a[j]){
            swap(a[i],a[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    moveZeroes(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}