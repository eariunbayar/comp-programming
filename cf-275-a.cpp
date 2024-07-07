#include <bits/stdc++.h>
using namespace std;

int main(){
    int s[5][5];
    int ans[5][5];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ans[i][j]=1;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>s[i][j];
            if(s[i][j]%2!=0){
                ans[i][j]++;
                ans[i][j+1]++;
                ans[i+1][j]++;
                ans[i-1][j]++;
                ans[i][j-1]++;
            }
        }
    }   
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<ans[i][j]%2;
        }
        cout<<endl;
    }

    return 0;
}