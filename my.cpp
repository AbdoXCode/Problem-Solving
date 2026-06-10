#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--) {
        string x;
        cin>>x;

        string a1 = x.substr(0,3);
        string a2 = x.substr(3);

        int sum1 = 0;
        int sum2 = 0;

        for (char c:a1) {
            sum1 += (c -'0');
        }
        for (char c:a2) {
           sum2 += (c-'0');
        }

        if (sum1 == sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}