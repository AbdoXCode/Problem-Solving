#include <bits/stdc++.h>
using namespace std;

bool prime(long long n) {
    if (n ==0 || n == 1) return false;

    for (long long i =2;i*i<=n;i++) {
        if (n%i == 0) {
            return false;
        }
    }

    return true;
}
int main() {
    long long fib[51];
    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i <= 50; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    bool isPrime[51];
    for (int i = 1; i <= 50; i++) {
        isPrime[i] = prime(fib[i]);
    }

    int t;
    cin>>t;



    while (t--) {
        int x;
        cin>>x;

        if (isPrime[x]) {
            cout<<"prime"<<endl;
        }else {
            cout<<"not prime"<<endl;
        }
    }
}