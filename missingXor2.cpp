#include<bits/stdc++.h>
using namespace std;
void Xor(int a[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    int xorr=xor1^xor2;
    cout<<xorr;
}
int main(){
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    Xor(a,n);
}