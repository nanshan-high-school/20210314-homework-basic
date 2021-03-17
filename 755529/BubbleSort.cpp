#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int len = 10;
    int list[len];
    srand((unsigned) time(NULL));

    cout << "轉換前:" << endl;
    for (int i = 0; i < len; i++) {
        list[i] = rand() % 1000;
        cout << list[i] << endl;
    }

    for (int i = 0; i < len; i++) {
        for (int j = 1; j < len - i; j++) {
            int temp;
            if (list[j] < list[j - 1]) {
                temp = list[j];
                list[j] = list[j - 1];
                list[j - 1] = temp;
            }
        }
    }
    
    cout << "轉換後:" << endl;
    for (int i = 0; i < len; i++) {
        cout << list[i] << endl;
    }
}
