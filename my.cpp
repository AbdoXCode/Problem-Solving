#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--) {
        long long l,r;
        cin>>l>>r;

        if (l>r) {
            swap(l,r);
        }

        long long sumL = l * (l-1) / 2;
        long long sumR = r * (r+1) / 2;

        cout<<sumR - sumL<<endl;
    }
}