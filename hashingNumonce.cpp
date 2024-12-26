#include<bits/stdc++.h>
using namespace std;
void numOnce(int a[],int n){
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(a[i],maxi);
    }
    vector<int>hash(maxi+1,0);
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for(int i=0;i<hash.size();i++){
        if(hash[a[i]]==1){
            cout<<a[i]<<endl;
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
    numOnce(a,n);
}