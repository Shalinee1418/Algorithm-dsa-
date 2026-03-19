#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Calculate the number of elements
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Traversing using a for loop: ";
    for (int i = 0; i < n; ++i) {
        // Access each element using its index
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    std::cout << "Traversing using a range-based for loop: ";
    // 'element' is a copy of the current array element in each iteration
    for (const auto& element : arr) { 
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
