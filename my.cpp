#include <algorithm>
#include <iostream>
#include <vector>



using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v;

    for (int i =0;i<n;i++) {
        int x;
        cin>>x;

        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int c = 1;
    for (int i =0;i<v.size();i++) {
        if (v[i] != c) {
            break;
        }
        c++;
    }

    cout<<c<<endl;

}
