arr1={1,2,3,4,5,3,6,5}
arr2={3,4,4,2,9,9,6}

ans={2,3,4,6}

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    int common[MAX_SIZE];
    int commonSize = 0;

    // Check for common elements
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                common[commonSize++] = arr1[i];
                break;
            }
        }
    }

    // Display the common elements
    cout << "Common Elements: ";
    if (commonSize == 0) {
        cout << "None";
    } else {
        for (int i = 0; i < commonSize; i++) {
            cout << common[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int size1, size2;

    // Input the size of the first array
    cin >> size1;

    // Input the elements of the first array
    
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    // Input the size of the second array
    
    cin >> size2;

    // Input the elements of the second array
   
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Call the function to find the common elements
    findCommonElements(arr1, size1, arr2, size2);

    return 0;
}
