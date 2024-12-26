#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int>&a,vector<int>&b){
    int n1=a.size();
    int n2=b.size();
    vector<int>vis(n2,0);
    vector<int>ans;
    sort(b.begin(),b.end());
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i]){
                break;
            }
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