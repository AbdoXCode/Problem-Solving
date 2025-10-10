#include <algorithm>
#include <bitset>
#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <unordered_map>
#include <stack>



using namespace std;

int main() {

    int arr[3][3];

    for (int r=0;r<3;r++) {
        for (int c=0;c<3;c++) {
            cin>>arr[r][c];
        }
    }

    for (int r=0;r<3;r++) {
        int sumofEven =0,sumofOdd = 0;

        for (int c=0;c<3;c++) {
            if (arr[r][c] % 2 == 0) {
                sumofEven+= arr[r][c];
            }else {
                sumofOdd += arr[r][c];
            }
        }
        cout<<sumofEven<<" " <<sumofOdd;
        cout<<endl;

    }

    return 0;
}
