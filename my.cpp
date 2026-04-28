#include <bits/stdc++.h>
using namespace std;

int findMinMax(int arr[] ,int size) {

    long long min = 10000000;
    long long max = -10000000;

    for (int i =0;i<size;i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout<<min<<" "<<max;
    return 0;
}
int main() {
    int n;
    cin>>n;

    int arr[n];

    for (int i =0;i<n;i++) {
        cin>>arr[i];
    }

    findMinMax(arr,n);

}