#include <iostream>
#include <unordered_set>
using namespace std;
int lengthOfLongestSubstring(string s) {
  unordered_set<char> seen;
  int i = 0, j = 0, maxLength = 0;
  while (j < s.length()) {
    if (seen.find(s[j]) == seen.end()) {
      seen.insert(s[j]);
      maxLength = max(maxLength, j - i + 1);
      j++;
    } else {
      seen.erase(s[i]);
      i++;
    }
  }
  return maxLength;
}

int main() {
  string s = "abcabcbb";
  int length = lengthOfLongestSubstring(s);
  cout << "The length of the longest substring without repeating characters is " << length << endl;
  return 0;
}
