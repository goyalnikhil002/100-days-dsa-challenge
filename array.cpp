#include <iostream>
using namesoace std;
const int MAX_SIZE = 100;

void traverseArray(int arr[], int size) {
    std::cout << "Array Elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertElement(int arr[], int& size, int index, int value) {
    if (index < 0 || index > size) {
        std::cout << "Invalid index for insertion." << std::endl;
        return;
    }

    // Shift elements to make space for the new element
    for (int i = size; i > index; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[index] = value;
    ++size;

    std::cout << "Element inserted successfully." << std::endl;
}

void deleteElement(int arr[], int& size, int index) {
    if (index < 0 || index >= size) {
        std::cout << "Invalid index for deletion." << std::endl;
        return;
    }

    // Shift elements to remove the element at the given index
    for (int i = index; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    --size;

    std::cout << "Element deleted successfully." << std::endl;
}

int searchElementByValue(const int arr[], int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int searchElementByIndex(const int arr[], int size, int index) {
    if (index >= 0 && index < size) {
        return arr[index]; // Return the element at the given index
    }
    return -1; // Return -1 if the index is out of bounds
}

void updateElement(int arr[], int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
        std::cout << "Element updated successfully." << std::endl;
    } else {
        std::cout << "Invalid index for updating." << std::endl;
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    // Example usage of array operations
    insertElement(arr, size, 0, 10);
    insertElement(arr, size, 1, 20);
    insertElement(arr, size, 2, 30);
    traverseArray(arr, size);

    deleteElement(arr, size, 1);
    traverseArray(arr, size);

    int searchIndex = searchElementByValue(arr, size, 30);
    if (searchIndex != -1) {
        std::cout << "Element 30 found at index " << searchIndex << std::endl;
    } else {
        std::cout << "Element 30 not found." << std::endl;
    }

    int elementAtIndex2 = searchElementByIndex(arr, size, 2);
    if (elementAtIndex2 != -1) {
        std::cout << "Element at index 2: " << elementAtIndex2 << std::endl;
    } else {
        std::cout << "Invalid index." << std::endl;
    }

    updateElement(arr, size, 0, 5);
    traverseArray(arr, size);

    return 0;
}
