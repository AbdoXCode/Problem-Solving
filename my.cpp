#include <algorithm>
#include <bitset>
#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <unordered_map>
#include <stack>



using namespace std;

int main() {

    string s;
    cin>>s;

    int freq[26] = {0};

    bool isValid = true;

    for (int i =0;i<s.size();i++) {
        freq[s[i] - 'a']++;
    }

    for (int i =0 ;i< 26;i++) {
        if (freq[i] == 0) {
            isValid = false;
        }
    }
    cout<< (isValid ? "valid":"not valid");
}
