#include <algorithm>
#include <iostream>
#include <vector>
#include<stack>

using namespace std;

int main() {
    stack<char>s;

    string str;
    cin>>str;

    for (int i =0;i<str.size();i++) {
        if (str[i] == '{') {
            s.push('{');
        }else if (!s.empty() && str[i] == '}' && s.top() == '{'){
            s.pop();
        }else {
            s.push('}');
        }
    }

    if (s.empty()) {
        cout<<"Regular";
    }else {
        cout<<"Not Regular";
    }
}
