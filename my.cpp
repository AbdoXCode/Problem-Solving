#include <bits/stdc++.h>
using namespace std;

void printToN(int n) {
    if (n == 0) return;
    printToN(n-1);
    cout<<n<<endl;
}

int main() {
    int n;
    cin>>n;

    printToN(n);
}