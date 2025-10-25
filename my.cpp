#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,q;
    cin>>n>>q;

    vector<int> arr(n);

    for (int i =0;i<n;i++) {
        int x;
        cin>>x;

        arr.push_back(x);
    }



    while (q--) {
        int x;
        cin>>x;
        auto it = upper_bound(arr.begin(), arr.end(), x);

        if (it == arr.end()) {
            cout<<-1<<endl;
        }else {
            cout<<*it<<endl;
        }

    }
}
