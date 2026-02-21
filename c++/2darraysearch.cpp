#include <iostream>
using namespace std;

int* search(int arr[][3], int rows, int cols, int target) {
    static int result[2]; 
    result[0] = -1;
    result[1] = -1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                result[0] = i;
                result[1] = j;
                return result; 
            }
        }
    }
    return result; 
}

int main() {
    int arr[3][3] = {
        {20, 45, 10},
        {32, 26, 22},
        {47, 98, 37}
    };

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int* result = search(arr, 3, 3, target);
    
    if (result[0] != -1) {
        cout << "Element found at index (" << result[0] << "," << result[1] << ")" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
