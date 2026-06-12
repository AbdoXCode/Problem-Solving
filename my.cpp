#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int sum = 0;
    while (t--) {
        int x,y;
        cin>>x>>y;

        if (x>y) {
            sum++;
        }else if (x<y) {
            sum--;
        }
    }

    if (sum >0) {
        cout<<"Mishka"<<endl;
    }else if (sum ==0) {
        cout<<"Friendship is magic!^^"<<endl;
    }else {
        cout<<"Chris"<<endl;
    }
}