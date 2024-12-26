#include<bits/stdc++.h>
using namespace std;
int largestt(int a[],int n){
    int largest=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>largest) largest=a[i];
    }
    return largest;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=largestt(a,n);
    cout<<result<<endl;
}