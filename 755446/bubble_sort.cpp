#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int arr[5] = {};
    int tmp;
    srand(time(0));
    cout << "排序前: ";
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 1000;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;   
            }
        }
    }
    cout << "排序後: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}
