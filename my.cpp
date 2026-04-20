    #include <bits/stdc++.h>
    using namespace std;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string x;
    cin>>x;

    string test = "";
    for (int i = x.length() -1;i>=0;i--) {
        test +=x[i];
    }

    if (x == test) {
        cout<<"YES";
    }else {
        cout<<"NO";
    }
}