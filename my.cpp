#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--) {
        int n,nOdd=0,nEven=0,op = 0;
        cin>>n;

        int arr[n];

        for (int i =0;i<n;i++) {
            cin>>arr[i];
        }

        for (int a : arr) {
            if (a % 2 == 0) {
                nEven ++;
            }else {
                nOdd ++;
            }
        }

        for (int i =0;i<n;i++) {
            if (arr[i] % 2 ==0 && nEven > nOdd) {
                arr[i]++;
                nEven --;
                nOdd ++;
                op++;
            }else if (arr[i] % 2 !=0 && nEven < nOdd) {
                arr[i]--;
                nEven ++;
                nOdd --;
                op++;
            }
        }

        if (nOdd > nEven || nEven > nOdd) {
            cout<<-1<<endl;
        }else {
            cout<<op<<endl;
        }
    }
}