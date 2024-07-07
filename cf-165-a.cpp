#include <bits/stdc++.h>
using namespace std;

int main() {
	int q[1000][1000];
	int n;
	cin>>n;

	for(int i=0; i<n; i++){
	    for(int j=0; j<2; j++){
	        cin>>q[i][j];
	    }
	}

	int ans=0;

	for(int i=0; i<n; i++){
	    int x=q[i][0];
	    int l=0, r=0, u=0, b=0;
	    int y=q[i][1];
        
	    for(int j=0;j<n;j++){
	        if(x<q[j][0] && y==q[j][1]){
	            r++;
	        }
            if(x>q[j][0] && y==q[j][1]){
	            l++;
	        }
            if(x==q[j][0] && y<q[j][1]){
	            u++;
	        }
            if(x==q[j][0] && y>q[j][1]){
	            b++;
	        }
	        if(r>0 && l>0 && b>0 && u>0){
	            if(l+r+b+u>= 4){
	                ans++;
                    break;
	            }
	        }
	    }
	}
	cout<<ans;
	return 0;
}