#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int mx = INT_MIN;
    int mn = INT_MAX;
    int maxpos;
    int minpos;
    cin>>t;
    int a[101];
    for(int i=0; i<t; i++){
        cin>>a[i];
        if(a[i]>mx){
            maxpos=i;
            mx=a[i];
        }
        if(a[i]<=mn){
            minpos=i;
            mn=a[i];
        }
    }
    
    if(minpos<maxpos)cout<<maxpos+abs(t-minpos-2);
    else cout<<maxpos+abs(t-minpos-1);

    return 0;
}