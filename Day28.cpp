#include <iostream>
#include <string>
using namespace std;
int roman_to_int(string roman) {
  int result = 0;
  int prev = 0;

  for (int i = 0; i < roman.length(); i++) {
    int curr = roman[i] - 'A' + 1;

    if (curr > prev) {
      result -= prev * 2;
    }

    result += curr;
    prev = curr;
  }
  return result;
}

int main() {
  string roman;
  cout << "Enter a Roman numeral: ";
  cin >> roman
  int integer = roman_to_int(roman);
  cout << "The integer equivalent is: " << integer << endl;
  return 0;
}
