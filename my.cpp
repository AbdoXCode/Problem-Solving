#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    long long x,newBalance1=0;
    string newBalance2;

    cin>>x;

    if (x > 0) {
        cout<<x<<endl;
        return 0;
    }else {
        for (int i =0; i<to_string(abs(x)).length();i++) {
            char lastDigit = char(abs(x % 10) + '0');
            if ( i == to_string(abs(x)).length() -1) {
                newBalance1 = (newBalance1 + x) / 10;
                newBalance2 += lastDigit;
            }

            if (i <= to_string(abs(x)).length() -2) {
                newBalance2 += to_string(x)[i];
            }
        }
    }

    if (stoi(newBalance2) == 0) {
        newBalance2 = "0";
    }
    if (newBalance1 > stoi(newBalance2)) {
        cout<<newBalance1;
    }else {
        cout<<newBalance2;
    }
}