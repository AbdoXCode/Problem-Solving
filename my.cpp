#include <bits/stdc++.h>
using namespace std;

void printToN(int n) {
    if (n == 0) return;
    if (n==1) {
        cout<<n;
    }else {
        cout<<n<<" ";
    }
    printToN(n-1);
}

int main() {
    int n;
    cin>>n;

    printToN(n);
}