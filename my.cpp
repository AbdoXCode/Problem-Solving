#include <bits/stdc++.h>
using namespace std;

auto shiftArray(int arr[],int n,int x) {
    while (x--) {
        int last = arr[n-1];
        for (int i =n-1;i>=0;i--) {
            if (i == 0) {
                arr[0] = last;
            }else {
                arr[i] = arr[i-1];
            }
        }
    }
}
int main(){
    int n,x;
    cin>>n>>x;

    int arr[n];

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    shiftArray(arr,n,x);

    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}