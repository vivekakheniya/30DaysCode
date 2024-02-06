//Program to display all elements of an Array
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the No. of elements of Array: ";
    cin >> n;
    int arr[n];
    cout << endl<< "Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout<<"The Elements of Array are: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
