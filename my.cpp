#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    string x;
    cin>>x;

    int count = 0;
    for (int i =0 ;i<n;i++) {
        if (x[i] == x[i+1]) {
            count++;
        }
    }

    cout<<count;
}
