#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        int a[n],b[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i]=a[i];
        }

        sort(b,b+n);

        if(b[0]!=b[1]){
            for(int i=0; i<n; i++){
                if(a[i]==b[0]){
                    cout<<(i+1);
                    break;
                }
            }
        }

        else cout<<"Still Rozdil";

        return 0;
}