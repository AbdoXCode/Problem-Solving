#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int t;
    cin>>t;

    int rooms = 0;
    while (t--) {
        int p,q;
        cin>>p>>q;
        if (p < q && q-p >= 2) {
            rooms++;
        }
    }

    cout<<rooms;

}
