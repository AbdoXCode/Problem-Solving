#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,q;

    vector<long long> vec;

    cin>>n>>q;

    for (int i =0;i<n;i++) {
        long long x;
        cin>>x;
        vec.push_back(x);
    }
    for (int i =1;i<n;i++) {
        vec[i] = vec[i] + vec[i-1];
    }
    while(q--) {
        long long l,r;
        cin>>l>>r;

        l--,r--;

        if (l==0) {
            cout<<vec[r]<<endl;
        }else {
            cout<<vec[r] - vec[l-1]<<endl;
        }
    }
}
