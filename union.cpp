#include<bits/stdc++.h>
using namespace std;
void sortedarray(vector<int>a,vector<int>b){
    set<int>st;
    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        st.insert(b[i]);
    }

    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i];
    }
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int>a(n1);
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
    vector<int>b(n2);
    for(int i=0;i<b.size();i++){
        cin>>b[i];
    }
    sortedarray(a,b);
}