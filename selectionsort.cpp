#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(a[j]<a[mini]) mini=j;
        }
        //swap(a[i],a[mini])
        int temp=a[mini];
        a[mini]=a[i];
        a[i]=temp;
    }
 }

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}