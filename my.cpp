#include <iostream>

using namespace std;

int main() {
    int x;
    cin>>x;

    int arr[x];
    int maxi = 0,mini =1000000;

    int maxiIndex,miniIndex;
    for (int i =0;i<x;i++) {
        cin>>arr[i];
    }


    for (int i =0;i<x;i++) {
        maxi = max(arr[i],maxi);
        mini = min(arr[i] , mini);
    }

    for (int i =0;i<x;i++) {

        if (arr[i] == maxi) {
            maxiIndex =i;
        }
        if (arr[i] == mini) {
            miniIndex = i;
        }
    }
    swap(arr[maxiIndex],arr[miniIndex]);



    for (int i =0;i<x;i++) {
        cout<<arr[i]<<" ";
    }
}
