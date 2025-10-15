#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[10000];

    for (int i = 0;i <n-1;i++) {
        int x;
        cin>>x;
        arr[i] = x;
    }

    for (int i = 1; i<n - 1;i++) {
        arr[i] = arr[i] + arr[i-1];
    }

    int r1,r2;
    cin>>r1>>r2;

    r1--;
    r2-=2;

    if (r1 == 0) {
        cout<<arr[r2];
    }else {
        cout<<arr[r2] - arr[r1-1];
    }
}
