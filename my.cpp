#include <bits/stdc++.h>
using namespace std;

auto swaps(int x,int y) {
    int c = x;
    x = y;
    y = c;

    cout<<x<<" "<<y;
}
int main() {
    int x,y;
    cin>>x>>y;


    swaps(x,y);
}