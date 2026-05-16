#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n;
    cin>>t>>n;

    string x;
    cin>>x;

    while (n--) {
        string op;
        cin>>op;

        if (op == "substr") {
            int l,ll;
            cin>>l>>ll;
            for (int i = min(l,ll) - 1;i<max(l,ll);i++) {
                cout<<x[i];
            }
            cout<<endl;
        }
        else if (op == "sort") {
            int l,ll;
            cin>>l>>ll;
            sort(x.begin() + min(l,ll) - 1,x.begin() + max(l,ll));
        }
        else if (op == "pop_back") {
            x.pop_back();
        }
        else if (op == "back") {
            cout<<x[x.length()-1]<<endl;
        }
        else if (op == "reverse") {
            int l,ll;
            cin>>l>>ll;
            reverse(x.begin() + min(l,ll) - 1,x.begin() + max(l,ll));
        }
        else if (op == "front") {
            cout<<x.front()<<endl;
        }
        else if (op == "push_back") {
            string xx;
            cin>>xx;

            x += xx;
        }
        else if (op == "print") {
            int pos;
            cin>>pos;

            cout<<x[pos-1]<<endl;
        }
    }
}