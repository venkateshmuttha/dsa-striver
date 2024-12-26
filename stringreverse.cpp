#include<bits/stdc++.h>
using namespace std;
bool revstring(int i,string st){
    if(i>=st.size()/2) return true;
    if(st[i]!=st[st.size()-i-1]) return false;
    return revstring(i+1,st);
}
int main(){
    string st="MADSM";
    cout<<revstring(0,st);
}