#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(a[j]<a[mini]){
                mini=j;
            }
            int temp=a[i];
            a[i]=a[mini];
            a[mini]=temp;

        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}