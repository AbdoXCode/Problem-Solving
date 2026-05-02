#include <bits/stdc++.h>
using namespace std;

int uniqueNumbers(int n,int arr[]) {
    int count = 0;
    for (int i =0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (arr[i] == arr[j]) {
                if (i <= j) {
                    count++;
                    break;
                }else {
                    break;
                }
            }
        }
    }
    return count;
}
int main() {
    int n;
    cin>>n;

    int arr[n];

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<uniqueNumbers(n,arr);
}