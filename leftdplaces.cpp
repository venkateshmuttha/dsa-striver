#include<bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>&a,int n,int d){
    d=d%n;
    vector<int>temp(d);
    //step 1
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    //shifting
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    //put back temp in array
    for(int i=n-d;i<n;i++){
        a[i]=temp[i-(n-d)];
    }
}
int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    leftRotate(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}