#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;

    int group = 1;

    int n = t;
    string arr[100005];

    while (t--) {
        string x;
        cin>>x;

        arr[t] = x;
    }

    for (int i = 1; i<n;i++) {
        if (arr[i] == arr [i-1]) {
        }else {
            group +=1;
        }
    }
    cout<<group;
}
