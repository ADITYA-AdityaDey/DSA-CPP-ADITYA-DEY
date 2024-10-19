#include <iostream>
#include <vector>
#include <climits>

using namespace std; // Use the standard namespace

class Solution {
public:
    int solve(vector<int>& A) { // Method that takes a vector of integers as input
        long long sum1 = 0; // Initialize sum1 to hold the total sum of the array
        // Calculate the total sum of the array
        for(int i = 0; i < A.size(); i++) {
            sum1 += A[i]; // Add the current element to sum1
        }
        
        long long sum2 = 0; // Initialize sum2 to track the cumulative sum from the start
        int ans = INT_MAX;  // Set ans to INT_MAX as a placeholder for the result
        
        // Iterate through the array to find the equilibrium index
        for(int i = 0; i < A.size(); i++) {
            sum1 -= A[i]; // Decrease sum1 by the current element (right sum)
            // Check if the left sum (sum1) equals the right sum (sum2)
            if(sum1 == sum2) {
                ans = i; // Set ans to the current index (equilibrium index)
                break;    // Exit the loop as we found an answer
            }
            sum2 += A[i]; // Increase sum2 by the current element (left sum)
        }
        
        // If no equilibrium index was found, set ans to -1
        if(ans == INT_MAX) {
            ans = -1; // Set ans to -1 to indicate no equilibrium index found
        }
        
        return ans; // Return the equilibrium index or -1 if not found
    }
};

int main() {
    vector<int> A = {1, 2, 3, 0, 3, 2, 1}; // Sample input vector
    Solution sol; // Create an instance of the Solution class
    int result = sol.solve(A); // Call the solve method
    cout << "Equilibrium index: " << result << endl; // Output the result
    return 0; // Indicate successful completion
}