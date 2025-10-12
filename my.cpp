#include <iostream>
#include<cmath>

using namespace std;

int main() {
    double m,n,a;
    cin>>m>>n>>a;

    long long flagstones = ceil(n/a) * ceil(m/a);
    cout<<flagstones;

}
