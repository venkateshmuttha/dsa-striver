#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]+=i;
    }
    int Q;
    cin>>Q;
    while(Q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}