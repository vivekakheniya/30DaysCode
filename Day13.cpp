//Program for displaying the Maximum, Minimum, Sum and Average of all elements in an Array
#include <iostream>
#include <climits>
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
    int sum=0, maxval = INT_MIN, minval = INT_MAX;
    for(int i=0;i<n;i++){
        maxval = max(maxval, arr[i]);
        minval = min(minval, arr[i]);
        sum=sum+arr[i];
    }
    int average = sum/n;
    cout << "The Sum of all elements is: "<<sum<<endl;
    cout << "The Maximum no in Array is: "<<maxval<<endl;
    cout << "The Minimum no in Array is: "<<minval<<endl;
    cout << "The Average is: "<<average<<endl;
    return 0;
}
