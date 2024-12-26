#include<bits/stdc++.h>
using namespace std;
void Xor(int a[],int n){
    int Xor1=0;
    for(int i=1;i<=n;i++){
        Xor1=Xor1^i;
    }
    int Xor2=0;
    for(int i=0;i<n-1;i++){
        Xor2=Xor2^a[i];
    }
    int Xor=Xor1^Xor2;
    cout<<Xor;
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