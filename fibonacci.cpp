#include<bits/stdc++.h>
using namespace std;
int fibinocci(int n){
    if(n<=1) return n;
    return fibinocci(n-1)+fibinocci(n-2);
}
int main(){
    int n;
    cin>>n;
    int result=fibinocci(n);
}