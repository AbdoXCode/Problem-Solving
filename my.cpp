#include <algorithm>
#include <iostream>
#include<cmath>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;



    while (t--) {
        vector<long long> answers;
        long long n;
        cin>>n;

        for (int i =1;i<18;i++) {
            long long val = 1 + (long long)pow(10,i);

            if (n % val == 0) {
                answers.push_back(n / val);
            }
        }

        cout<<answers.size()<<endl;

        reverse(answers.begin(),answers.end());
        for (int i =0 ; i< answers.size();i++) {
            cout<<answers[i]<<" ";
        }
        cout<<endl;
    }
}
