#include<bits/stdc++.h>
using namespace std;
void print5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print5(n);
    }
}