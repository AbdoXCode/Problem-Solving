#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        int arr[n];

        for (int i =0;i<n;i++) {
            cin>>arr[i];
        }

        int normal;

        if (arr[0] == arr[1])
            normal = arr[0];
        else if (arr[0] == arr[2])
            normal = arr[0];
        else
            normal = arr[1];

        for (int i = 0; i < n; i++) {
            if (normal != arr[i]) {
                cout<<i + 1<<endl;
                break;
            }
        }

    }
}