#include <algorithm>
#include <bitset>
#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <unordered_map>
#include <stack>



using namespace std;

int main() {
    int n,q;

    cin>>n>>q;

    long long arr[100005];

    for (int i =0;i<n;i++) {
        cin>>arr[i];
    }
    for (int i = 1; i<n;i++) {
        arr[i] = arr[i] + arr[i-1];
    }


    while (q--) {
        int l,r;
        cin>>l>>r;

        l--;r--;

        if (l ==0) {
            cout<<arr[r]<<endl;
        }
        else {
            cout<<arr[r] - arr[l - 1]<<endl;
        }
    }


}
