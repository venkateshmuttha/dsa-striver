#include<bits/stdc++.h>
using namespace std;
void backnumbers(int i,int n){
    if(i<1) return;
    backnumbers(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    backnumbers(n,n);
}