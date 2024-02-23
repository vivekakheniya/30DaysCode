#include <iostream>
using namespace std;
int sumOfDigits(int n) {
  if (n >= 0 && n <= 9) {
    return n;
  }
  return (n % 10) + sumOfDigits(n / 10);
}

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  int sum_digits = sumOfDigits(n);
  cout << "The sum of digits of " << n << " is " << sum_digits << endl;
  return 0;
}
