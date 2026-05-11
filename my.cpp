#include <bits/stdc++.h>
using namespace std;

int numWays(int x,int y) {
    if (x == y) return 1;
    if (x>y)return 0;

    return numWays(x+1,y)+numWays(x+2,y)+numWays(x+3,y);

}
int main() {
    int x,y;
    cin>>x>>y;

    cout<<numWays(x,y);

}