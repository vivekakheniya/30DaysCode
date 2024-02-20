#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    for (char &c : inputString) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }

    // Output the result
    cout << "Toggled case string: " << inputString << endl;

    return 0;
}
