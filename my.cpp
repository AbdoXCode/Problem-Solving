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

    int arr[6] = {50,80,70,10,16,18};

    sort(arr , arr + size(arr));

    int left = 0 , right = size(arr) - 1, target = 9;

    while (left <= right) {
        int mid = (left +right) /2;

        if (arr[mid] == target) {
            cout<<mid;
            return mid;
        }else if (arr[mid] > target) {
            right = mid -1;
        }else {
            left = mid +1;
        }
    }
    return -1;

    return 0;
}
