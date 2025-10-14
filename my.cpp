#include <algorithm>
#include <iostream>
#include<map>

using namespace std;

int main() {
    map<string,int> m;

    int t;
    cin>>t;
    while (t--) {
        int q;
        cin>>q;

        string name;
        cin>>name;

        if (q==1) {
            int price;
            cin>>price;

            m[name] += price;

        }else if (q ==2) {
            cout<<m[name]<<endl;
        }
    }

}
