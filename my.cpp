#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin>>n;

    long long final = 0;

    if (n %2==0) {
        final = n/2;
    }else {
        final = -(n+1)/2;
    }

    cout<<final;
}
