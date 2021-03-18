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

    for (int i = 0; i < 5; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]){
            tmp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = tmp;
            }
        }
    }
    cout << "排序後: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}
