#include <bits/stdc++.h>
using namespace std;

int printMultipleChars(int x,char letter) {
    for (int i=0;i<x;i++) {
        cout<<letter<<" ";
    }
    return 0;
}

int main() {
    int n;
    cin>>n;

    while (n--) {
        int x;
        char letter;
        cin>>x>>letter;

        printMultipleChars(x,letter);
        cout<<"\n";

    }
}