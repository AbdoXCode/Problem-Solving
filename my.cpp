#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--) {
        int x;
        cin>>x;

        int animals = x / 4;

        if (x % 4 != 0) {
            animals++;
        }

        cout<<animals<<endl;
    }
}