#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	string s;
	bool check=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!check){
	            cout<<" ";
	        }
	    }else {
	        check=0;
	        cout<<s[i];
	    }
	}
	return 0;
}

