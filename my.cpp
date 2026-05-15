#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin>>p;

    set<int> levels;
    int n;
    cin>>n;
    for (int i =0;i<n;i++) {
        int x;
        cin>>x;
        levels.insert(x);
    }

    int q;
    cin>>q;

    for (int i =0;i<q;i++) {
        int y;
        cin>>y;
        levels.insert(y);
    }

    if (levels.size() >= p) {
        cout<<"I become the guy.";
    }else {
        cout<<"Oh, my keyboard!";
    }

}