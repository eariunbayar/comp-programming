#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '.'){
            cout << '0';
        } else if(a[i] == '-'){
            if(a[i+1] == '.'){
                cout << '1';
                i++;
            } else if(a[i+1] == '-'){
                cout << '2';
                i++;
            }
        }
    }
}

int main(){
    solve();
    return 0;
}
