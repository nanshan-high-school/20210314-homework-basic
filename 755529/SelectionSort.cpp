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
        int temp_no = i;
        for (int j = i + 1; j < len; j++) {
            if (list[j] < list[temp_no]) {
                temp_no = j;
            }
        }
        int temp_value = list[i];
        list[i] = list[temp_no];
        list[temp_no] = temp_value;
    }
    cout << "轉換後:" << endl;
    for (int i = 0; i < len; i++) {
        cout << list[i] << endl;
    }
}
