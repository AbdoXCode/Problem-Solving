#include <bits/stdc++.h>
using namespace std;

int total;

void printPyramid(int n) {
    if (n == 0) return;
    cout<<string(total - n ,' ');
    cout<<string(2 * n - 1,'*');
    cout<<'\n';
    printPyramid(n-1);
}

int main() {
    cin>>total;

    printPyramid(total);
}