#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 2, 4, 1};
    int temp;
    for (int j = 5; j > 0; j--) {
        for (int i = 0; i < j; i++) {
            if (arr[i] >= arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
       cout << arr[i] << "-";
    }
}
