#include <iostream>

// Function to perform linear search
// Returns the index if found, otherwise returns -1
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found, return current index
        }
    }
    return -1; // Element not found after checking the entire array
}

int main() {
    int arr[] = {12, 34, 55, 23, 7, 89, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Dynamically calculate array size
    int target = 23;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
