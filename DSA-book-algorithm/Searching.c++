#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

// 1. Linear Search: Works on unsorted or sorted vectors
int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Target found, return index
        }
    }
    return -1; // Target not found
}

// 2. Binary Search: Works ONLY on sorted vectors
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids potential overflow bug

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search the right half
        } else {
            high = mid - 1; // Search the left half
        }
    }
    return -1; // Target not found
}

int main() {
    std::vector<int> data = {23, 8, 42, 4, 16, 15};
    int target = 16;

    // Linear Search Example (Works on unsorted data)
    int linearResult = linearSearch(data, target);
    std::cout << "Linear Search Index: " << linearResult << "\n";

    // Binary Search Example (Requires sorting first)
    std::sort(data.begin(), data.end()); // Array becomes: {4, 8, 15, 16, 23, 42}
    int binaryResult = binarySearch(data, target);
    std::cout << "Binary Search Index (after sorting): " << binaryResult << "\n";

    return 0;
}


