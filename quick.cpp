#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int low,int high){
    int pivot=a[low];
    int i=low;
    int j=high;
    while(i<j){
        while(a[i]<=pivot && i<=high-1){
            i++;
        }
        while(a[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[low],a[j]);
    return j;
}
void quicksort(int a[],int low,int high){
    if(low<high){
        int partitionindex=partition(a,low,high);
        quicksort(a,low,partitionindex-1);
        quicksort(a,partitionindex+1,high);

    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}