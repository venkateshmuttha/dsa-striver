#include<bits/stdc++.h>
using namespace std;
int seconlarge(int a[],int n){
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int largest=a[n];
    int secondlargest=-1;
    for(int i=n-2;i>=0;i++){
        if(a[i]!=largest){
            secondlargest=a[i];
            break;
        }
    }
    cout<<secondlargest;
}