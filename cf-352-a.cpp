#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int five = 0, zero = 0;
    cin >> t;
    while(t--){
        int q;
        cin>>q;
        if(q==5)five++;
        if(q==0)zero++;
    }

    if(zero == 0) {
        cout << -1;
        return 0;
    }

    if(five >= 9) {
        for(int i = 0; i < (five / 9) * 9; i++) {
            cout << "5";
        }
        for(int i = 0; i < zero; i++) {
            cout << '0';
        }
    } else {
        if(zero!=0){
            cout<<'0';
            return 0;
        }else{
            cout<<-1;
        }
    }
    return 0;
}
