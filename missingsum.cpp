#include<bits/stdc++.h>
using namespace std;
void summ(int a[],int n){
    int sum=(n*(n+1))/2;
    int s2=0;
    for(int i=0;i<n-1;i++){
        s2=s2+a[i];
    }
    cout<<sum-s2<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    summ(a,n);
}