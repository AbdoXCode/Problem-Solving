#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c;
    cin>>a>>b>>c;

    double s = (a + b + c) / 2;
    if (a + b > c && a + c > b && c + b > a) {
        cout<<"Valid"<<endl<<sqrt(s*(s-a)*(s-b)*(s-c));
    }else {
        cout<<"Invalid";
    }
}