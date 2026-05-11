#include <bits/stdc++.h>
using namespace std;

long long nCr(int n,int r) {
    if (r == 0 || n==r) return 1;

    return nCr(n-1,r-1) + nCr(n-1,r);
}
long long nPr(int n,int r) {
    if (r == 1) return n;
    if (r == 0) return 1;

    return n* nPr((n-1) , r-1);
}
int main() {
    int x,y;
    cin>>x>>y;

    cout<<nCr(x,y)<<" "<<nPr(x,y);

}