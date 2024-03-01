#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValidParentheses(const string& s) {
    stack<char> parenthesesStack;

    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') {
            parenthesesStack.push(ch);
        } else {
            if (parenthesesStack.empty()) {
                return false; 
            }

            char top = parenthesesStack.top();
            parenthesesStack.pop();

            if ((ch == ')' && top != '(') || (ch == ']' && top != '[') || (ch == '}' && top != '{')) {
                return false; 
            }
        }
    }
    return parenthesesStack.empty(); // Check if there are any unmatched opening parentheses
}
int main() {
    string input;

    cout << "Enter a string of parentheses: ";
    cin >> input;
    if (isValidParentheses(input)) {
        cout << "The string of parentheses is valid.\n";
    } else {
        cout << "The string of parentheses is not valid.\n";
    }
    return 0;
}
