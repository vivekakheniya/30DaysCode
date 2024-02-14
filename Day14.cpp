#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 5, 5, 6, 7, 2, 9, 2, 6, 2, 5, 6};
    int size = sizeof(a) / sizeof(a[0]);
    int count = 0;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int target;
    cout << "Enter Target Element: ";
    cin >> target;
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            count++;
        }
    }
    cout << "count is:" << count << endl;
    return 0;
}
