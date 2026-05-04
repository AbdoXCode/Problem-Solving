#include <bits/stdc++.h>
using namespace std;
int total;
void printPyramid(int n) {
    if (n == 0) return;
    printPyramid(n-1);
    cout<<string(total - n ,' ');
    cout<<string(2 * n - 1,'*');
    cout<<'\n';
}

int main() {
    cin>>total;

    printPyramid(total);
}