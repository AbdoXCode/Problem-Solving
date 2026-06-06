#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,sum =0;
    cin>>n>>k;

    int arr[n];
    for (int i =0;i<n;i++) {
        cin>>arr[i];
        sum +=arr[i];
    }

    int i = 0;
    int steps = 0;

    while (arr[k -1] <= arr[i] && n > i && arr[i] != 0) {
        i++;
        steps++;
    }

    if (sum >0) {
        cout<<steps;
    }else {
        cout<<0;
    }
}