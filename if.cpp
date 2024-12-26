#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"not eligile for job"<<endl;
    }
    else if(age<=54){
        cout<<"eligible ofr job"<<endl;
    }
    else if( age<=57){
        cout<<"elegible for job ,but retirement soon.";
    }
    else{
        cout<<"retirement time"<<endl;
    }
    return 0;
}