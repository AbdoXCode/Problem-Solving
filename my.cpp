    #include <bits/stdc++.h>
    using namespace std;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string x;
    cin>>x;

    string urlHead;
    for (int i =0;i<x.length();i++) {
        if (x[i] =='?') {
            urlHead = x.substr(i+1,x.length());
            break;
        }
    }

    string result;
    for (char &ch : urlHead) {
        if (ch == '=') {
            result += ": ";
        }else if (ch == '&') {
            result += "\n";
        }else {
            result += ch;
        }
    }
    cout<<result;
}