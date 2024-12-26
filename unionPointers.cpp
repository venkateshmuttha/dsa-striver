#include<bits/stdc++.h>
using namespace std;
void unionn(vector<int>a,vector<int>b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>unionn;
    while(i<n1 && j<n2){
        if(a[i]<=a[j]){
            if(unionn.size()!=0 && unionn.back()!=a[i]){
                unionn.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionn.size()!=0 && unionn.back()!=a[i]){
                unionn.push_back(a[i]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionn.size()!=0 && unionn.back()!=a[i]){
                unionn.push_back(a[i]);
            }
            i++;
        
    }
    while(j<n2){
        if(unionn.size()!=0 && unionn.back()!=a[i]){
                unionn.push_back(a[i]);
            }
            j++;
    }
for(int i=0;i<unionn.size();i++){
    cout<<unionn[i]<<" ";
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
    unionn(a,b);

}