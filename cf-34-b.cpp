#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int cnt=0;
    int m;
    int s[100];
    int q[100]={0};
    cin>>a;
    cin>>m;
    for(int i=0; i<a; i++){
        cin>>s[i];
        if(s[i]<0){
            q[i]=s[i];
            cnt++;
        }
    }
    sort(q, q+a);
    
    // for(int i=0; i<a; i++){
    //     cout<<q[i]<<" ";
    // }
    // cout<<endl;

    int res=0;
    for(int i=0; i<m; i++){
        res+=q[i];
    }
    cout<<abs(res);
    return 0;
}