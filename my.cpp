#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    long long pascal[31][31] = {};

    for (int i =0;i<n;i++) {
        pascal[i][0] = pascal[i][i] = 1;

        for (int j = 1;j<i;j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }

        for (int j=0;j<=i;j++) {
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
}