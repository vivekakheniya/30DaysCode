#include <iostream>
#include <vector>
using namespace std;
class Search {
public:
    static void insertionSort(vector<int>& a) {
        int n = a.size();
        for (int j = 1; j < n; j++) {
            int key = a[j];
            int i = j - 1;
            while ((i > -1) && (a[i] > key)) {
                a[i + 1] = a[i];
                i--;
            }
            a[i + 1] = key;
        }
    }

    static int binarySearch(const vector<int>& a, int val) {
        int low = 0;
        int high = a.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (a[mid] == val) return mid + 1;
            if (a[mid] < val) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};

int main() {
    vector<int> a = { 64, 34, 25, 12, 22, 11, 90 };
    Search::insertionSort(a);
    cout << "The elements of the array are after sort: ";
    for (int i = 0; i < a.size(); i++)
        cout << "  " << a[i];
    cout << endl;

    int val = 12;
    int res = Search::binarySearch(a, val);
    cout << endl;
    cout << "Element to be searched is: " + std::to_string(val) << endl;
    if (res == -1)
        cout << "Element is not present in the array" << endl;
    else
        cout << "Element is present at " << res << " position of array" << endl;

    return 0;
}
