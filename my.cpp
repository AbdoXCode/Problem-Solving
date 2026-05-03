#include <bits/stdc++.h>
using namespace std;

void printDigits(long long x) {
    if (x == 0) return;
    printDigits(x/10);
    cout<<x%10<<" ";
}

int main() {
    int n;
    cin>>n;

    while (n--) {
        long long x;
        cin>>x;

        if (x ==0) {
            cout<<0;
        }
        printDigits(x);
        cout<<endl;
    }
}