#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a+1; i<b; i++){
        if(isPrime(i)){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(isPrime(b))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}