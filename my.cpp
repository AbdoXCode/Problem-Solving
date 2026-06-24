#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,r,n;
    cin>>x>>y>>r>>n;

    while (n--) {
        int i,k;
        cin>>i>>k;

        double dis = sqrt(pow((i-x),2) + pow((k-y),2));

        if (dis <= r) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}