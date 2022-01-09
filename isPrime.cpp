#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n) {
     int i, sqroot = (int) sqrt(n);
     for(i = 2 ; i < sqroot; i++) {
          if(isPrime(i) && n % i == 0)
               return false;
     }
     return true;
}

int main() {
     int n;
     cout << "Enter a Number: ";
     cin >> n;
     if(isPrime(n)) {
          cout << n << " is a Prime Number";
     } else {
          cout << n << " is not a Prime Number";
     }
     return 0;
}