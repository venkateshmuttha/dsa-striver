#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<endl;
        }
    }
}