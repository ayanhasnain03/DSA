#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if we can place all cows with at least 'minDist' distance apart
bool canPlaceCows(vector<int>& stalls, int cows, int minDist) {
    int count = 1; // First cow is placed at the first stall
    int lastPosition = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        // If the gap between current stall and last placed cow is enough
        if (stalls[i] - lastPosition >= minDist) {
            count++; // Place a cow here
            lastPosition = stalls[i]; // Update last position
        }

        // If we have placed all cows successfully
        if (count >= cows)
            return true;
    }

    return false; // Not enough space to place all cows
}

// Main function to find the largest minimum distance between cows
int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end()); // Sort the stall positions

    int low = 1; // Minimum possible distance
    int high = stalls.back() - stalls.front(); // Maximum possible distance
    int result = 0; // To store the final answer

    while (low <= high) {
        int mid = (low + high) / 2; // Try middle distance

        if (canPlaceCows(stalls, cows, mid)) {
            result = mid;       // It's possible, try for more
            low = mid + 1;
        } else {
            high = mid - 1;     // Not possible, reduce the distance
        }
    }

    return result;
}

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9}; // Positions of stalls
    int cows = 3;                         // Number of cows

    int maxMinDistance = aggressiveCows(stalls, cows); // Find answer

    cout << "Maximum minimum distance: " << maxMinDistance << endl;
    return 0;
}
