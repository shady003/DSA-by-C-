#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

// Function to find the intersection of two sorted arrays
vector<int> findArrayIntersection(int arr1[], int n, int arr2[], int m)
{
    vector<int> ans;
    int i = 0, j = 0;

    // Loop until one of the arrays is fully traversed
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);  // If elements are equal, add to the result
            i++;
            j++;
        }
        else if (arr2[j] > arr1[i]) {
            i++;  // Move pointer `i` when arr1[i] is smaller
        }
        else {
            j++;  // Move pointer `j` when arr2[j] is smaller
        }
    }
    return ans;  // Return the result vector
}

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {3, 4, 5};
    int n = 5;
    int m = 3;

    // Find the intersection of the two arrays
    vector<int> result = findArrayIntersection(arr1, n,arr2, m);

    // Output the result
    cout << "Intersection of two arrays is: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";  // Print each element in the result
    }

    return 0;
}
