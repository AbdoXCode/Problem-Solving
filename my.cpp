#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int t;
    cin>>t;

    int total = 0;
    while (t--) {
        int x,y,z;
        cin>>x>>y>>z;

        if (x+y+z >=2) {
            total++;
        }
    }

    cout<<total;

}
