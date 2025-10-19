#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    string x;
    cin>>x;

    int arr[1000] ={0};

    int i=0;
    for (char c : x) {
        if (c != '+') {
            arr[i] = c -'0';
            i++;
        }
    }

    sort(arr,arr+x.length() - i+1);

    for (int j =0;j<=x.length()-i;j++) {
       if (j == x.length() -i) {
           cout<<arr[j];
       }else {
           cout<<arr[j]<<"+";
       }
    }

}
