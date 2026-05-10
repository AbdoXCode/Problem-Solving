#include <bits/stdc++.h>
using namespace std;

string reachValue(long long x) {
    if (x == 1) return "YES";

    if (x % 20 == 0) {
        if (reachValue(x / 20) == "YES") {
            return "YES";
        }
    }

    if (x % 10 == 0) {
        if (reachValue(x / 10) == "YES") {
            return "YES";
        }
    }
    return "NO";
}
int main() {
    int t;
    cin>>t;


    for (int i =0;i<t;i++) {
        long long x;
        cin>>x;
        cout<<reachValue(x)<<endl;
    }

}