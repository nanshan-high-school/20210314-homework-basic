#include <iostream>
using namespace std;

int main() {
    int ins[5] = {3, 5, 2, 4, 1};
    int temp;
    for (int s = 1; s < 5; s++) {
        for (int i = s; i > 0; i--) {
            if (ins[i] < ins[i - 1]) {
                temp = ins[i];
                ins[i] = ins[i - 1];
                ins[i - 1] = temp;
            } else break;
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << ins[i] << "-";
    }
}
