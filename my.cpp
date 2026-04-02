#include <algorithm>
#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    map<char,int> letters = {
        {'a',1},
        {'b',2},
        {'c',3},
        {'d',4},
        {'e',5},
        {'f',6},
        {'g',7},
        {'h',8},
        {'i',9},
        {'j',10},
        {'k',11},
        {'l',12},
        {'m',13},
        {'n',14},
        {'o',15},
        {'p',16},
        {'q',17},
        {'r',18},
        {'s',19},
        {'t',20},
        {'u',21},
        {'v',22},
        {'w',23},
        {'x',24},
        {'y',25},
        {'z',26}
    };

    string x,y;
    cin>>x>>y;

    int length = (x.length() < y.length()) ? x.length() : y.length();

    bool isfound = false;
    for (int i = 0; i < length; i++) {
        if (letters[x[i]] == letters[y[i]]) {
            continue;
        }else if (letters[x[i]] >= letters[y[i]]) {
            cout<<y<<endl;
            isfound = true;
            break;
        }else {
            cout<<x<<endl;
            isfound = true;
            break;
        }
    }

    if (!isfound) {
        cout << ((x.length() > y.length()) ? y : x);
    }
}
