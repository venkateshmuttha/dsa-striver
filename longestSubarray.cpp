#include<bits/stdc++.h>
using namespace std;
void longestSubarray(int a[],int n,int K){
    int length=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
             sum=sum+a[k];
            }
                if(sum==K){
                    length=max(length,j-i+1);
                }
        }
    } 
    cout<<length<<endl;
}
int main(){
    int n,K;
    cin>>n>>K;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    longestSubarray(a,n,K);

}