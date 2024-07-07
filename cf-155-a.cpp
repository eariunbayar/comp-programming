#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int cnt=0;
    int mn=INT_MAX;
    int mx=INT_MIN;
    int s[1001];
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>s[i];
        if(s[i]>mx){
            mx=s[i];
            cnt++;
        }
        if(s[i]<mn){
            mn=s[i];
            cnt++;
        }
    }
    cout<<cnt-2;
    return 0;
}