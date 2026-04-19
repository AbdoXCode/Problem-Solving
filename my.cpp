#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string x;
    cin>>x;

    int arr[256] = {0};

    for (char c: x) {
        arr[c] ++;
    }

    for (int i =0 ;i<256;i++) {
        if (arr[i] != 0) {
            cout<<char(i)<<" : "<<arr[i]<<endl;
        }
    }

}