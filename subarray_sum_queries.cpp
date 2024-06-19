#include <bits/stdc++.h> 
#define ll long long
#define ff first
#define ss second
using namespace std; 
 
const int MAXN=2e5;
 
ll a[MAXN];
 
struct node{
	ll res, lmax, rmax, sum;
	node operator+(node q) {
		return {
			max(max(res, q.res), rmax + q.lmax), 
			max(lmax, sum+q.lmax), 
			max(q.rmax, rmax+q.sum), 
			sum + q.sum
		};
	}
};
 
node tree[4*MAXN];
 
void build(ll id, ll l, ll r){
	if(l==r){
		tree[id]={max(0ll, a[l]), max(0ll,a[l]), max(0ll,a[l]), a[l]};
	return;
	}
	build(id*2, l, (l+r)/2);
	build(id*2+1, (l+r)/2+1, r);
	tree[id]=tree[id*2]+tree[id*2+1];
}	
 
void update(ll pos, ll val, ll l, ll r, ll id) {
	if (l == r)
		tree[id] = {max(0ll, val), max(0ll, val), max(0ll, val), val};
	else{
		if (pos>(l+r)/2) update(pos, val, (l+r)/2+1, r, id*2+1);
		else update(pos, val, l, (l+r)/2, id*2);
		tree[id]=tree[id*2]+tree[id*2+1];
	}
}
 
int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n;
	cin>>n;
	ll t;
	cin>>t;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	build(1, 1, n);
		while(t--){
		int a, l, r;
		cin>>l>>r;
		update(l, r, 1, n, 1);
		cout<<tree[1].res<<endl;
	}
    return 0; 
}
 
