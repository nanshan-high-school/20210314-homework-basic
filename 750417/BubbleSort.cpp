#include<iostream>
using namespace std;

int main() {
    int arr[5] = {3, 5, 2, 4, 1};
    int num = 0;

    for (int i = 4; i > 0; i--) {
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j + 1]) {
                num = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = num;
            }
        }
    }

    for (int i = 0; i < 5; i++) { //小到大
        cout << arr[i] << " ";
    }
}
