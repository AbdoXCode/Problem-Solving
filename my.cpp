#include <bits/stdc++.h>
using namespace std;

long long Factorial(int n) {
    if (n == 0 || n == 1) return 1;

    if (n==2) return 2;

    return n * Factorial(n-1);
}

int main() {
    int n;
    cin>>n;

    cout<<Factorial(n);
}