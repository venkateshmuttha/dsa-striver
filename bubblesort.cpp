#include<bits/stdc++.h>
using namespace std;
void Bubble_sort(int a[],int n){
    for(int i=n-1;i>=1;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                //swap(a[j],a[j+1])
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
        cout<<"run\n";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}