    #include <bits/stdc++.h>
    using namespace std;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int odd,even;
    cin>>odd>>even;

    if (odd == even +1 || even == odd +1 || (even == odd && even != 0)) {
        cout<<"YES"<<endl;
    }else if ((odd > even || even > odd) || (even == odd && even ==0)) {
        cout<<"NO"<<endl;
    }

}