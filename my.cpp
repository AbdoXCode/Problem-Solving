#include <bits/stdc++.h>
using namespace std;

auto print(int x) {
    for (int i = 1 ;i<=x;i++) {
        if (x==i) {
            cout<<i;
        }else {
            cout<<i<<" ";
        }
    }
}

int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int x;
    cin>>x;

    print(x);
}