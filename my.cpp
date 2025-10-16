#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin>>x>>y;

    int arr[100005];

    for (int i =0 ;i <x;i++) {
        cin>>arr[i];
    }

    sort(arr,arr+x);

    while (y--) {
        int target;
        cin>>target;

        int left = 0;
        int right = x-1;

        bool flag = false;

        while (left <= right) {
            int middle = (left + right) /2;


            if (arr[middle] == target) {
                flag = true;
                break;
            }else if (target < arr[middle]) {
                right = middle - 1;
            }else if (target > arr[middle]) {
                left = middle + 1;
            }
        }

        if (flag) {
            cout<<"found"<<endl;
        }else {
            cout<<"not found"<<endl;
        }

    }
}
