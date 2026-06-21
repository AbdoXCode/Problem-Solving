#include <bits/stdc++.h>
using namespace std;

int main(){
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    string cipher = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    unordered_map<char,char> encrypt,decrypt;

    for (int i = 0; i < original.size(); i++) {
        encrypt[original[i]] = cipher[i];
        decrypt[cipher[i]] = original[i];
    }

    int t;
    cin>>t;

    string x;
    cin>>x;

    if (t==1) {
        for (char c:x) {
            cout<<encrypt[c];
        }
    }else {
        for (char c:x) {
            cout<<decrypt[c];
        }
    }


}