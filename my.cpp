#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;

   while (n--) {
      string s,t;
      cin>>s>>t;

      char arr1[256];
      char arr2[256];

      for (int i=0;i<s.length();i++) {
         arr1[i] = s[i];
      }
      for (int i=0;i<t.length();i++) {
         arr2[i] = t[i];
      }

      string final_string;

      if (s.length() == t.length()) {
         for (int i=0;i<s.length();i++) {
            final_string += s[i];
            final_string += t[i];
         }
      }else if (s.length() > t.length()) {
         for (int i =0;i<t.length();i++) {
            final_string += s[i];
            final_string += t[i];
         }
         final_string += s.substr(t.length() );
      }else {
         for (int i =0;i<s.length();i++) {
            final_string += s[i];
            final_string += t[i];
         }
         final_string += t.substr(s.length() );
      }

      cout<<final_string<<endl;
      
   }


}