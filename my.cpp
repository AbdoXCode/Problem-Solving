#include <iostream>

using namespace std;

int main() {
    int x;
    cin>>x;

    int counter = 0;

    while (x>0) {
        if (x >= 100) {
            x-=100;
        }else if (x >= 20) {
            x-=20;
        }else if (x >= 5) {
            x-=5;
        }else if (x >= 1) {
            x-=1;
        }
        counter++;

    }

    cout<<counter;
}
