#include <iostream>

using namespace std;

int main() {
    int x;
    cin>>x;

    int counter = 1;

    while (x > 5) {
        x-=5;
        counter++;
    }
    cout<<counter;
}
