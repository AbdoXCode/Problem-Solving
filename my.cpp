#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,sum = 0,maxSum = 0;
    cin>>t;

    while (t--) {
        int x,y;
        cin>>x>>y;

        sum-=x;
        sum+=y;
        maxSum = max(sum,maxSum);
    }

    cout<<maxSum<<endl;

}