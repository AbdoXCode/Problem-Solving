#include <algorithm>
#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    string x,palindrome;
    cin>>x;

    for (int i = x.length() -1; i >= 0;i--) {
        palindrome+=x[i];
    }

    if (palindrome[0] == '0') {
        int first = palindrome.find_first_not_of('0');

        palindrome.erase(0,first);

    }
    cout<<palindrome<<endl;
    if (x == palindrome) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
}
