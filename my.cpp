#include <algorithm>
#include <iostream>
#include<cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[1000];
    int freq[1000];
    int taxiNum = 0;

    for (int i = 0;i<n;i++) {
        cin>>arr[i];
        freq[arr[i]]++;
    }

    taxiNum += freq[4];

   while (freq[1] != 0 && freq[3] != 0) {
       freq[3]--;
       freq[1]--;
       taxiNum++;
   }

    if (freq[1] == 0 && freq[3] !=0) {
        taxiNum+=freq[3];
        freq[3] = 0;
    }

    taxiNum +=freq[2]/2;


    if (freq[2] %2 !=0) {
        if (freq[1] <=2) {
            freq[2] = 0;
            freq[1] = 0;
        }else {
            freq[1] -= 2;
            freq[2] = 0;
        }
        taxiNum++;
    }


    if (freq[1] !=0) {
        taxiNum = taxiNum + freq[1] / 4;

        if (freq[1] % 4 != 0) {
            taxiNum++;
        }

    }

    cout<<taxiNum;
}
