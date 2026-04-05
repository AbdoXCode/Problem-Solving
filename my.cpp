#include <algorithm>
#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    long long n,m,k;
    cin>>n>>m>>k;

    long long x = min({n, m, k});
    n -= x;
    m -= x;
    k -= x;

    long long y = min (n /2 , k);

    cout<<x+y;

}
