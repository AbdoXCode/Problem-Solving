#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;
int steps = 0;
int game23(long long n,long long m) {
    if (n == m && steps == 0) {
        return 0;
    }else if (n == m) {
        return steps;
    }else if (m%n != 0) {
        return -1;
    }else {
        if ((m/n) % 2 == 0) {
            steps++;
            n*=2;
            return game23(n , m);
        }else if ((m/n) % 3 == 0) {
            steps++;
            n*=3;
            return game23(n,m);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    long long n,m;
    cin>>n>>m;

    cout<<game23(n,m);

}
