#include<bits/stdc++.h>
using namespace std;
int  Arrayhash(int number,int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(number==a[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Q;
    cin>>Q;
    while(Q--){
    int number;
    cin>>number;
    int result=Arrayhash(number,a,n);
    }
}