#include <iostream>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main() {

    queue<int>q;

    int t;
    cin>>t;

    while (t--) {
        int x,v;
        cin>>x>>v;

        if (x == 1) {
            q.push(v);
        }else {
            if (q.front() == v) {
                cout<<"Yes"<<endl;
            }else {
                cout<<"No"<<endl;
            }
            q.pop();
        }

    }

}
