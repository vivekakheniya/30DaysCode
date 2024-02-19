#include <iostream>
#include <cstring>

using namespace std;

int firstNonRepeatingCharacter(const string& s) {
    const int ASCII_SIZE = 128;
    int charCount[ASCII_SIZE];
    memset(charCount, 0, sizeof(charCount));

    for (char c : s) {
        charCount[static_cast<int>(c)]++;
    }

    for (int i = 0; i < s.length(); ++i) {
        if (charCount[static_cast<int>(s[i])] == 1) {
            return i; 
        }
    }

    return -1; 
}

int main() {
    string input = "vivekakheniya";
    int result = firstNonRepeatingCharacter(input);

    if (result != -1) {
        cout << "The first non-repeating character is at index: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}
