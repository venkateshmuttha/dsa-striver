#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int a=0;
    int b=1;
    int c=0;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int result=fib(n);
}