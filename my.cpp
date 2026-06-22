#include <bits/stdc++.h>
using namespace std;

int main(){
    int ra,ca,rb,cb;
    cin>>ra>>ca;

    int matrixA[ra][ca];



    for (int i=0;i<ra;i++) {
        for (int j=0;j<ca;j++) {
            cin>>matrixA[i][j];
        }
    }

    cin>>rb>>cb;
    int matrixB[rb][cb];

    for (int i=0;i<rb;i++) {
        for (int j=0;j<cb;j++) {
            cin>>matrixB[i][j];
        }
    }

    int result[ra][cb];
    for (int i = 0; i < ra; i++) {
        for (int j = 0; j < cb; j++) {
            result[i][j] = 0;
        }
    }

    for (int i=0;i<ra;i++) {
        for (int j=0;j<cb;j++) {
            for (int z=0;z<ca;z++) {
                result[i][j] += matrixA[i][z] * matrixB[z][j];
            }
        }
    }

    for (int i=0;i<ra;i++) {
        for (int j=0;j<cb;j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}