#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int ans=0, pos=0;
    cin>>a>>b;
    int s[100];
    for(int i=0; i<a; i++){
        cin>>s[i];
        int t;
        if(s[i]%b!=0)t=s[i]/b+1;
        else t=s[i]/b;
        if(t>=ans && i>=pos){
            // cout<<t<<" "<<pos<<endl;
            ans=t;
            pos=i;
        }
    }
    cout<<pos+1;
    return 0;
}