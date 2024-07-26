//   1- Solution =>  (1),(3) & (4) are correct

//   2- Solution =>  (3) option is correct

//   3- Solution =>  (1) option is correct

//                                      4 Solution

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 6, 2, 5, 4, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Print the original array
//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     // Perform Bubble Sort in descending order
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] < arr[j + 1]) {
//                 // Swap arr[j] and arr[j + 1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     cout << "Sorted array in descending order: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//                                         5 Solution

// #include<iostream>
// using namespace std;
// bool isAlmostSorted(int arr[], int n) {
//     int index1 = -1, index2 = -1;
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             if (index1 == -1)
//                 index1 = i;
//             else if (index2 == -1)
//                 index2 = i;
//             else
//                 return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[] = {1, 2, 3, 5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     if (isAlmostSorted(arr, n))
//         cout << "Array is almost sorted" << endl;
//     else
//         cout << "Array is not almost sorted" << endl;
// }


//                                        Assignment :- 2

//   1- Solution ->   (a), (b) are True

//   2- Solution ->   (d) array sorted in reverse order

//   3- Solution ->   (c) 4 passes

//                                       4 Solution

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int minSumOfTwoNumbers(vector<int>& digits) {
//     // Sort the digits
//     sort(digits.begin(), digits.end());
//     // Create two numbers
//     int num1 = 0, num2 = 0;
//     // Distribute digits alternatively to the two numbers
//     for (size_t i = 0; i < digits.size(); i++) {
//         if (i % 2 == 0) {
//             num1 = num1 * 10 + digits[i];
//         } else {
//             num2 = num2 * 10 + digits[i];
//         }
//     } 
//     // Return the sum of the two numbers
//     return num1 + num2;
// }
// int main() {
//     vector<int> digits = {1, 3, 4, 2, 5};
//     cout << "Minimum possible sum: " << minSumOfTwoNumbers(digits) << endl;
//     return 0;
// }

//                                  5 Solution

#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[] = {"apple", "orange", "banana", "grape", "pear"};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Perform Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent strings and swap if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

