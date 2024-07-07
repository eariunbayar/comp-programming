#include <bits/stdc++.h>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> q;
    q.insert(s1);
    q.insert(s2);
    q.insert(s3);
    q.insert(s4);

    cout<<4-q.size();
    return 0;
}
