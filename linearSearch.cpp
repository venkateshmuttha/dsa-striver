#include<bits/stdc++.h>
using namespace std;
int linearSearch(int a[],int n,int num){
    for(int i=0;i<n;i++){
        if(a[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int num;
    cin>>num;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=linearSearch(a,n,num);
    cout<<result<<endl;
}