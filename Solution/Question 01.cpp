#include <bits/stdc++.h> // Include the entire standard library

using namespace std; // Use the standard namespace

bool findPairWithSum(int A[], int N, int X, int& a, int& b) { // Function to find a pair with given sum
    int left = 0; // Initialize left pointer
    int right = N - 1; // Initialize right pointer

    while (left < right) { // Loop until left pointer is less than right pointer
        int sum = A[left] + A[right]; // Calculate sum of current pair
        if (sum == X) { // If sum equals target
            a = A[left]; // Assign value of left pointer element to a
            b = A[right]; // Assign value of right pointer element to b
            
            return true; // Return true, pair found
            
        } else if (sum < X) { // If sum is less than target
            left++; // Move left pointer to the right
        } else { // If sum is greater than target
            right--; // Move right pointer to the left
        }
    }

    return false; // Return false, pair not found
}

int main() {
    int N, X; // Declare variables for array size and target sum
    cin >> N; // Input array size

    int A[N]; // Declare array of size N
    for (int i = 0; i < N; ++i) { // Loop to input array elements
        cin >> A[i]; // Input array element at index i
    }

    cin >> X; // Input target sum

    int a, b; // Declare variables for pair elements

    if (findPairWithSum(A, N, X, a, b)) { // Call function to find pair with sum X
        cout << "Yes\n"; // Output "Yes" if pair is found
        cout << "Pair: " << a << " " << b << endl; // Output the pair elements
    } else {
        cout << "No\n"; // Output "No" if pair is not found
    }

    return 0; // Return 0 to indicate successful completion
}

// Himel Sarder
// Dept. of CSE, BSFMSTU
// Gmail : info.himelcse@gmail.com
