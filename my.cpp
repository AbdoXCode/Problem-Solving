#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;

    cin>>x;

    for (int i =1 ;i<=x;i++) {
        if (i%2 == 0) {
            if (i <= x-1) {
                cout<<"I love that ";
            }else {
                cout<<"I love it ";
            }
        }else {
            if (i <= x-1) {
                cout<<"I hate that ";
            }else {
                cout<<"I hate it ";
            }
        }
    }
}