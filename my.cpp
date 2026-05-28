#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n<=1) return false;

    for (int i =2;i<n;i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int isPalindrome(int n) {
    if (n <0) return false;
    int newNum = 0;
    int originalNum = n;
    while (n>0) {
        int lastNum = n % 10;
        newNum = (newNum * 10) + lastNum;
        n /=10;
    }
    return newNum == originalNum;
}
int maxDivisors(int n) {
    int maxDiv = 0;
    for (int i = 1;i<n;i++) {
        if (n % i ==0) {
            maxDiv ++;
        }
    }
    return maxDiv;
}
int main(){
    int n,maximum = 0,minimum = 99999,primeNumbers = 0,palindromeNumbers = 0;
    cin>>n;

    int arr[n];

    for (int i =0;i<n;i++) {
        cin>>arr[i];
    }

    for (int i =0;i<n;i++) {
        maximum = max(arr[i],maximum);
        minimum = min(arr[i],minimum);
        if (isPrime(arr[i])) {
            primeNumbers ++;
        }
        if (isPalindrome(arr[i])) {
            palindromeNumbers++;
        }
    }

    int maxDivisor = 0;
    int bestNum = 0;

    for (int x:arr) {
        int div = maxDivisors(x);

        if (div > maxDivisor) {
            maxDivisor = div;
            bestNum = x;
        }else if (div == maxDivisor) {
            if (x > bestNum) {
                bestNum = x;
            }
        }
    }
    cout<<"The maximum number : "<<maximum<<endl;
    cout<<"The minimum number : "<<minimum<<endl;
    cout<<"The number of prime numbers : "<<primeNumbers<<endl;
    cout<<"The number of palindrome numbers : "<<palindromeNumbers<<endl;
    cout<<"The number that has the maximum number of divisors : "<<bestNum;
}