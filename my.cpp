#include <bits/stdc++.h>
using namespace std;


int main (){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin>>n;

    while (n--) {
        string x;
        cin>>x;

        if (x.length() > 10) {
            cout<<x[0] <<x.length() -2 <<x[x.length() -1]<<endl;
        }else {
            cout<<x<<endl;
        }
    }

}