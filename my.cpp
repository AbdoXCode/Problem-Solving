#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;

   int op1 = 0;
   for (int i =0;i<n;i++) {
      int a;
      cin>>a;

      if (i % 2 == 0) {
         if (a<0) {
            op1++;
         }
      }else {
         if (a>0) {
            op1++;
         }
      }
   }
   int op2 = n - op1;
   cout<<min(op1,op2)<<endl;

}