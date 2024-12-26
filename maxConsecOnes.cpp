#include<bits/stdc++.h>
using namespace std;
int maxCons(int a[],int n){
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=maxCons(a,n);
    cout<<result;
}