#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while (t--) {
        long long a,b,moves = 0;
        cin>>a>>b;

        moves = (b - (a % b))  % b;
        cout<<moves<<endl;
    }
}