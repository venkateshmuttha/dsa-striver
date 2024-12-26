#include<bits/stdc++.h>
using namespace std;
void numbers(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    numbers(i+1,n);
}
int main(){
    int n;
    cin>>n;
    numbers(1,n);
}