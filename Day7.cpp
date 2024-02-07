//Program for displaying the sum of all elements of an Array
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
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout << "The Sum of all elements is: "<<sum;
    return 0;
}
