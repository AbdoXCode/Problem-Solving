#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--) {
        long long a,b,steps =0;
        cin>>a>>b;

        if (a==b) {
            cout<<0<<endl;
            continue;
        }

        long long diff = abs(b-a);

        cout<<(diff+9) / 10<<endl;
    }
}