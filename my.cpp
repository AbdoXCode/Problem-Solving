#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    int x;

    int cnt = 0;
    int mn = INT_MAX;

    for (int i =0 ;i<n;i++) {
        cin>>x;

        mn = min(mn,x);

        cnt++;

        if (cnt == k) {
            cout<< mn<<" ";
            mn = INT_MAX;
            cnt=0;
        }
    }

    if (cnt > 0) {
        cout<<mn;
    }

}