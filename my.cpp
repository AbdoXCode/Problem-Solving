#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x;
    string n;
    cin>>t>>n>>x;

    if (t==1) {
        long long decimalVal = stoll(n, nullptr, x);

        cout<<decimalVal;
    }else {
        long long decimal = stoll(n);
        string binary;

        while (decimal > 0) {
            long long rem = decimal % x;

            if (rem < 10) {
                binary+=char(rem + '0');
            }else {
                binary+=char(rem - 10 + 'A');
            }

            decimal /= x;
        }

        reverse(binary.begin(),binary.end());

        cout<<binary;
    }
}