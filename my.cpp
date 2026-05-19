#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

    long long t;
    cin>>t;

    long long minX = min(x1,min(x2,min(x3,x4)));
    long long maxX = max(x1,max(x2,max(x3,x4)));
    long long minY = min(y1,min(y2,min(y3,y4)));
    long long maxY = max(y1,max(y2,max(y3,y3)));

    while (t--) {
        long long x,y;
        cin>>x>>y;

        if ((minX <= x && x <= maxX) && (minY <= y && y <= maxY)) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}