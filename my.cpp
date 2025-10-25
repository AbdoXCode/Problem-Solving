#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>

using namespace std;

int main() {
    int n,teams;
    cin>>n>>teams;

    set<int>Nset;
    vector<int> index;

    for (int i = 0;i <n;i++) {
        int x;
        cin>>x;
        if (Nset.count(x) == 0) {
            Nset.insert(x);
            index.push_back(i);
        }
    }

    if (Nset.size() >= teams) {
        cout<<"YES"<<endl;
        for (int i =0;i<teams;i++) {
            cout<<index[i] + 1<<" ";
        }
    }else {
        cout<<"NO"<<endl;
    }



}
