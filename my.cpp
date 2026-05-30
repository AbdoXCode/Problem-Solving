#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;

    long long sum = 0;

    long long arr[n+1];

    for (long long i =0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n);


    long long i = n - 1;

    while (k--){
        long long prevSum = sum;
        sum += arr[i];
        if (sum >= prevSum) {
            i--;
        }else {
            sum = prevSum;
            break;
        }

    }

    if (sum > 0) {
        cout<<sum;
    }else {
        cout<< 0;
    }


}