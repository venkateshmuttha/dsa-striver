#include<bits/stdc++.h>
using namespace std;
int duplicates(int a[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=duplicates(a,n);
    cout<<result<<endl;
    for(int i=0;i<result;i++){
        cout<<a[i]<<endl;
    }
}

    