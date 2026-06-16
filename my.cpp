#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while (t--) {
      char x;
      cin>>x;

      bool isfound = false;

      for (int i =0;i<10;i++) {
         if ("codeforces"[i] == x) {
            isfound = true;
            break;
         }
      }

      if (isfound) {
         cout<<"YES"<<endl;
      }else {
         cout<<"NO"<<endl;
      }

   }
}