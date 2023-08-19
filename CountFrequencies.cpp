arr[]={6,5,4,7,6,4,2,3}

output:
element freq
6        2
5        1
4        2
7        1
2        1
3        1


#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 100;

void findFrequency(int arr[], int size) {
    int freq[MAX_SIZE] = {0};

    // Calculate the frequency of each element
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Display the elements along with their frequencies
    cout << "Element   Frequency" << endl;
    for (int i = 0; i < size; i++) {
        if (freq[arr[i]] != 0) {
            cout << arr[i] << "         " << freq[arr[i]] << endl;
            freq[arr[i]] = 0; // Reset frequency to avoid duplicates
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    // Input the size of the array
   
    cin >> size;

    // Input the elements of the array
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function to find the frequency of each element
    findFrequency(arr, size);

    return 0;
}
