#include <bits/stdc++.h>
using namespace std;

long long somefix(long long number,long long n) {
    if (n %2 != 0) {
        if (number == 0) {
            return 3;
        }else if (number ==1 || number ==2) {
            return 3-number;
        }else {
            return 0;
        }
    }else {
        return number;
    }
}

int main (){


    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    long long n;
    cin>>n;

    long long row = n/4;
    long long col = n % 4;


    cout<<row<<" "<<somefix(col,row);

}