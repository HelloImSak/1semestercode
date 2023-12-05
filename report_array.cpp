#include <iostream>
#include <vector>

// Function to implement Selection Sort using an array of indices
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    // Iterate over each element of the array
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        // Iterate over the remaining unsorted elements to find the smallest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the smallest element with the first unsorted element
        std::swap(arr[min_idx], arr[i]);
    }
}

// Function to print the elements of an array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Original array: \n";
    printArray(arr);

    selectionSort(arr);

    std::cout << "Sorted array: \n";
    printArray(arr);

    return 0;
}
