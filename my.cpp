#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    int tc = 0;
    while (t--) {
        int points;
        cin>>points;

        int left = -1000000000;
        int bottom = -1000000000;
        int right = 1000000000;
        int top = 1000000000;

        for (int i =0;i<points;i++){
            int x1,x2,y1,y2;
            cin>>x1>>y1>>x2>>y2;

            left = max(left, x1);
            bottom = max(bottom, y1);
            right = min(right, x2);
            top = min(top, y2);

        }

        long long area = 0;

        if (right > left && top > bottom) {
            area = (right - left) * (top - bottom);
        }

        tc++;
        cout << "Case #" << tc << ": " << area << endl;
    }
}