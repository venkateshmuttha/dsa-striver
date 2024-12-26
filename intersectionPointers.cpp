#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int>&a,vector<int>&b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int>a(n1);
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    vector<int>b(n2);
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    intersection(a,b);
}