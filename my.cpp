#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int arr[5][5];

    int row=0,column =0;
    for (int i =0 ;i< 5;i++) {
        for (int j = 0 ;j<5;j++) {
            cin>>arr[i][j];
        }
    }
    for (int i =0 ;i< 5;i++) {
        for (int j = 0 ;j<5;j++) {
            if (arr[i][j] ) {
                row = i;
                column = j;
            }
        }
    }

    cout<<( abs(2 - row ))+ (abs(2 - column));
}
