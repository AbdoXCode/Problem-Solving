#include <bits/stdc++.h>
using namespace std;

int sequence(int x) {
    if (x == 1) return 1;

    if (x % 2 == 0) {
        return 1 + sequence(x/2);
    }
    if (x % 2 != 0) {
        return 1 + sequence(3 * x + 1);
    }
}

int main() {
    int x;
    cin>>x;

    cout<<sequence(x);
}