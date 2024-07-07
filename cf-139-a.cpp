#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s[8]={0};
    cin>>n;

    for(int i = 1; i<8; i++){
        cin>>s[i];
        s[i]+=s[i-1];
    }

    n=(n-1)%s[7]+1;
    
    for(int i=1; i<=7; i++){
        if(s[i]>=n){
            cout<<i<<endl;
            break;
        }
    }
    
    return 0;
}