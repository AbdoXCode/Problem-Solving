#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int ml = (k*l) / nl;
    int lime = c * d;

    int salt_toasts = (p / np);

    int toasts = min(salt_toasts , min(lime , ml)) / n;
    cout<<toasts;
}