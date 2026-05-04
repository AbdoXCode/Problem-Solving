#include <bits/stdc++.h>
using namespace std;

int countVowels(int index,string s) {
    if (index == s.length()) return 0;

    int isVowel = (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u');

    return isVowel + countVowels(index+1, s);
}

int main() {
    string s;
    getline(cin,s);

    for (char &c:s) {
        c = tolower(c);
    }

    cout<<countVowels(0,s);
}