#include <iostream>
#include <stack>

using namespace std;

int main() {
    string s;
    cin>>s;

    int right = 0;

    stack<char> stack;

    for (char c:s) {
        if (c =='(') {
            stack.push(c);
        }else if (!stack.empty() && c == ')' && stack.top() == '(') {
            stack.pop();
            right+=2;
        };
    }

    cout<<right;
}
