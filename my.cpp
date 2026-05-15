#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    while (n--) {
        int x,y,z;
        cin>>x>>y>>z;

        if (x + y == z || x + z == y || z + y == x) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}