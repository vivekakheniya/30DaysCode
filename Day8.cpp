//Program to display all elements of an Array in Reverse
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {52, 14, 54, 85};
    int length = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, arr + length);
    cout<<"After Reversing the digits are: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
