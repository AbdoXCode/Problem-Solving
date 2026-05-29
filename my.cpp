#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    deque<long long> dqu;

    for (int i =0;i<n;i++) {
        long long x;
        cin>>x;

        dqu.push_back(x);
    }

    while (!dqu.empty()) {
        cout<<dqu.front()<<" ";
        dqu.pop_front();
        if (!dqu.empty()) {
            cout<<dqu.back()<<" ";
            dqu.pop_back();
        }
    }


}