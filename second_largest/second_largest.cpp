#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {

    // Variable to store the number of elements
    int n;

    // Ask the user to enter the number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Create a vector of size n to store the elements
    vector<int> arr(n);

    // Ask the user to enter the elements
    cout << "Enter the elements: ";

    // Input all elements into the vector
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize largest and second largest with the
    // smallest possible long long value
    long long largest = LLONG_MIN;
    long long secondLargest = LLONG_MIN;

    // Traverse through every element of the vector
    for (int x : arr) {

        // Ignore the element if it is already equal to
        // the largest or second largest value
        if (x == largest || x == secondLargest) {
            continue;
        }

        // If the current element is greater than largest,
        // move the current largest value to secondLargest
        if (x > largest) {
            secondLargest = largest;
            largest = x;
        }

        // If the current element is smaller than largest
        // but greater than secondLargest, update secondLargest
        else if (x > secondLargest) {
            secondLargest = x;
        }
    }

    // Check whether a unique second-largest number exists
    if (secondLargest == LLONG_MIN) {

        // Display message if there is no second-largest
        // unique number
        cout << "No second-largest unique number exists." << endl;

    } else {

        // Display the second-largest unique number
        cout << "Second-largest unique number: "
             << secondLargest << endl;
    }

    return 0;
}
