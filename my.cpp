    #include <bits/stdc++.h>
    using namespace std;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin>>n;

    int arr[256] ={0};

    for (int i =0;i<n;i++) {
        char ch;
        cin>>ch;

        arr[ch]++;
    }

    for (int i =0;i<256;i++) {
        while (arr[i] > 0) {
            cout<<char(i);
            arr[i] --;
        }
    }
}