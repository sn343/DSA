#include <iostream>
#include <limits.h>
using namespace std;


void findLargestThree(int arr[], int size) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    if (third == INT_MIN) {
        std::cout << "There are less than three elements in the array.\n";
    } else {
        std::cout << "The largest three elements in the array are: " << first << ", " << second << ", " << third << std::endl;
    }
}

int main() {
    int arr[] = {10, 4, 20, 15, 7, 23, 45, 98, 65, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findLargestThree(arr, size);

    return 0;
}
