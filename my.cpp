#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    set<int> s;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }

    int count = 0;

    for (int x : a) {
        if (s.count(x + 1))
            count++;
    }

    cout << count << " ";
}