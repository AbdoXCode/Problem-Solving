#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int matrix[100][100];

    int maxVal = 1;

    for (int i =0 ;i<n;i++) {

        for (int j =0 ;j<n;j++) {
            if (i == 0) {
                matrix[i][j] = 1;
            }else {
                matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];

                maxVal = max(matrix[i][j], maxVal);
            }
        }
    }

    cout<<maxVal;


}
