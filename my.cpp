#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,sumNum = 0;
    cin>>n;

    for (long long i=0;i<n;i++) {
        sumNum++;
        n-=sumNum;
    }

    cout<<sumNum;
}