#include <algorithm>
#include <iostream>
#include<set>

using namespace std;

int main() {
    set<int>s;
    int n;
    cin>>n;

    for (int i =0;i<n;i++) {
        int x;
        cin>>x;

        s.insert(x);
    }

    cout<<s.size()<<endl;

    auto it = s.begin();

    while (it != s.end()) {
        cout<<*it<<" ";
        it++;
    }

}
