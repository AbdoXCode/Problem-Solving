#include <algorithm>
#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    string x;
    cin>>x;

    string y;

    char vowels[6] = { 'A', 'O', 'Y', 'E', 'U', 'I'};


    for (int i =0;i<x.length();i++) {

        char c = tolower(x[i]);

        bool isVowel = false;

        for (int j =0; j< 6;j++) {
            if (c == std::tolower(vowels[j])) {
                isVowel = true;
                break;
            }
        }

        if (!isVowel) {
            y+=".";
            y+=tolower(x[i]);
        }
    }

    cout<<y;

}