#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1,y1,x2,y2;
    int x3,y3,x4,y4;

    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

    double cx1,cy1,cx2,cy2;

    cx1 = (x1+x2)/2.0;
    cy1 = (y1+y2)/2.0;
    cx2 = (x3+x4)/2.0;
    cy2 = (y3+y4)/2.0;

    double d1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    double d2 = sqrt(pow(x3-x4,2)+pow(y3-y4,2));

    double r1 = d1/2.0;
    double r2 = d2/2.0;

    double dis = sqrt(pow(cx1-cx2,2)+pow(cy1-cy2,2));

    if (r1 + r2 < dis) {
        cout<<"NO";
    }else {
        cout<<"YES";
    }

}