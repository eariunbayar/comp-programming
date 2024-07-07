#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int s[1001];
    int ans=INT_MAX;
    int a=0;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>s[i];
    }
    for(int i=0; i<t-1; i++){
        if(abs(s[i]-s[i+1])<ans){
            ans=abs(s[i]-s[i+1]);
            a=i;
            // cout<<ans<<endl;
        }
    }
    // cout<<s[t]<<" "<<s[0]<<endl;
    // cout<<s[t]-s[0]<<" lcheck"<<endl;

    if(abs(s[t-1]-s[0])<ans){
        cout<<t<<" "<<1;
    }else{
        cout<<a+1<<" "<<a+2;
    }
    return 0;
}