#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int t;
    cin>>t;

    int val =0;
    while (t--) {
        string x;
        cin>>x;

        if (x[1] == '+') {
            val++;
        }else {
            val--;
        }
    }

    cout<<val<<endl;
}
