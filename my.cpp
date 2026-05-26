#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    bool isOpen = false;
    while (getline(cin, s))
    {
        bool newLine = false;
        if (s.size() == 0 || s == " ")
        {
            continue;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '/' && s[i + 1] == '/' && !isOpen)
            {
                break;
            }
            else if (s[i] == '/' && s[i + 1] == '*')
            {
                i++;
                isOpen = true;
            }
            else if (s[i] == '*' && s[i + 1] == '/' && isOpen)
            {
                i++;
                isOpen = false;
            }
            else if (!isOpen)
            {

                cout << s[i];
                newLine = true;
            }
        }

        if (newLine && !isOpen)
            cout << endl;
    }
}