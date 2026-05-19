#include <iostream>
using namespace std;

int main() {
    int arr[] = {54, 45, 67, 86};
    int n = 4;

    int maxVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "The largest number is: " << maxVal << endl;

    return 0;
}
