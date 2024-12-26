#include<bits/stdc++.h>
using namespace std;
int secondlarge(int a[],int n){
    int largest=a[0];
    int secondlargest=-1;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            secondlargest=largest;
            largest=a[i];
        }
    }
    return secondlargest;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=secondlarge(a,n);
    cout<<result<<endl;
    
}