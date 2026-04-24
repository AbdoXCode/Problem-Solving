#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int x,y,z;
    cin>>x>>y>>z;

    cout<<max(max(x,y),z) - min(min(x,y),z);
}