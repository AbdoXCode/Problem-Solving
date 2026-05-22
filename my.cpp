#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,maxproblems = 0,totalPTime = 0;
    cin>>n>>k;

    for (int i =1;i<=n;i++) {
        if (k + totalPTime <= 240 - 5*i) {
            maxproblems++;
            totalPTime += 5*i;
        }
    }


    cout<<maxproblems;

}