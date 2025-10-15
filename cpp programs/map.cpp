#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map to store number -> frequency
    map<int, int> freqMap;

    // Sample array
    int arr[] = {5, 2, 2, 5, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Count frequency of each number
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    // Display the frequencies
    cout << "Number -> Frequency\n";
    for (auto pair : freqMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
