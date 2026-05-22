#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int x;
        cin>>x;

        vector<int> vec;
        for (int i =0;i<x;i++) {
            string xx;
            cin>>xx;

            for (int j =0;j<4;j++) {
                if (xx[j] == '#') {
                    vec.push_back(j+1);
                }
            }
        }

        for (int i = vec.size() - 1;i>=0;i--) {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}