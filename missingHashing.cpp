#include<bits/stdc++.h>
using namespace std;
void hashh(vector<int>&a,int n){
    vector<int>hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[a[i]]=1;
    }
    for(int i=1;i<n;i++){
        if(hash[i]==0){
            cout<<i<<endl;
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
    hashh(a,n);
}