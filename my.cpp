#include <bits/stdc++.h>
using namespace std;

void shiftZeros(int arr[],int n) {
    vector<int> arrShifted;
    int zeros = 0;

    for (int i =0;i<n;i++) {
        if (arr[i] != 0) {
            arrShifted.push_back(arr[i]);
        }else {
            zeros ++;
        }
    }

    while (zeros--) {
        arrShifted.push_back(0);
    }
    for (int i =0;i<n;i++) {
        cout<<arrShifted[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i =0;i<n;i++) {
        cin>>arr[i];
    }

    shiftZeros(arr,n);


}