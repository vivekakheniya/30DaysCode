#include <iostream>
#include <string>
using namespace std;

// Function to get user input
void getUserInput(string& name, string& experience) {
    cout << "What is your name? ";
    getline(cin, name);

    cout << "Please share a brief message about your 30-day journey and what you've learned: ";
    getline(cin, experience);
}

// Function to generate farewell message
string generateFarewellMessage(const string& name, const string& experience) {
    string farewellMessage = "Dear " + name + ",\n\n";
    farewellMessage += "Thank you for sharing your 30-day journey experience. It's truly inspiring to hear about what you've learned and accomplished. Your dedication and effort are commendable. As you move forward, remember that every day is an opportunity to grow and learn.\n\n";
    farewellMessage += "Wishing you continued success and fulfillment on your journey!\n\n";
    farewellMessage += "Best regards,\nThe Journey Tracker";
    return farewellMessage;
}

int main() {
    cout << "Welcome to the 30-day journey tracker!\n";

    string name, experience;
    getUserInput(name, experience);

    string farewellMessage = generateFarewellMessage(name, experience);

    cout << "\n=== Personalized Farewell Message ===\n";
    cout << farewellMessage << endl;

    return 0;
}
