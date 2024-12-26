#include<bits/stdc++.h>
using namespace std;
int numonce(int a[],int n){
    for(int i=0;i<n;i++){
        int num=a[i];
        int cnt=0;
        for(int j=0;j<n-1;j++){
            if(a[j]==num){
                cnt++;
            }
        }
        if(cnt==1) return num;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=numonce(a,n);
    cout<<result<<endl;
}