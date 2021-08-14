#include<iostream>
using namespace std;

int main() {
    int a = 0;

    cout << "總共有幾個數要排序:";
    cin >> a;

    int arr[a + 1];
    arr[a] = {0};
    arr[a] = 100; //debug line29
    int num = 0;

    cout << "要排序的數有:" << "\n";
    int nums;
    for (int i = 0; i < a; i++) {
        cin >> nums;
        arr[i] = nums + 18;  //作業要求:加上座號
    }

    for (int i = 0; i < a; i++) {
    cout << arr[i] << " ";
    }
    cout << "\n";

    for (int i = a; i > 0; i--) {        
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j + 1]) { //大的往後拉
                num = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = num;
            }
        }

        cout << "第" << a - i + 1 << "回:  ";
        for (int k = 0; k < a; k++) {
            cout << arr[k] << " ";
        }
        cout << "\n";
    }

    cout << "由小到大結果:" << "\n";
    for (int i = 0; i < a; i++) { //小到大
        cout << arr[i] << " ";
    }
}
