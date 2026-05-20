#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

    long long slope1 = (x2-x1) * (y4-y3);
    long long slope2 = (y2-y1) * (x4-x3);

    if (slope1 == slope2) {
        cout<<"YES";
    }else {
        cout<<"NO";
    }
}