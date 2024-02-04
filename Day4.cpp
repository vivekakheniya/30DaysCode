#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Calculate the factorial of 5
    int result = factorial(5);

    std::cout << "Factorial of 5: " << result << std::endl;

    return 0;
}
