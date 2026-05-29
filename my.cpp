#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--) {
        long long n,s;
        cin>>n>>s;

        if (s > n*(n+1) / 2) {
            cout<<-1<<endl;
            continue;
        }

        vector<long long>ans;

        for(long long i = n;i >= 1;i--) {
            if (s >= i) {
                ans.push_back(i);
                s-=i;
            }
            if (s==0) {
                break;
            }
        }

        for (long long x:ans) {
            cout<<x<<" ";
        }
        cout<<endl;

    }
}