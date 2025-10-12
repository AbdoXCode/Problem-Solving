#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int x;
    cin>>x;

    int arr[14] = {4,7,44,47,74,77,444,477,474,447,744,747,774,777};

    for (int i = 0;i <size(arr);i++) {
        if (x % arr[i] == 0) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

}
