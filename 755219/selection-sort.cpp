#include <iostream>
using namespace std;

int main() {
    int sel[5] = {3,5,2,4,1};
    int temp;
    for (int s = 0; s < 5; s++) {
        int min = sel[s];
        for (int i = s + 1; i < 5; i++) {
            if (sel[i] < min) {
                min = sel[i];
            }
        }
        for (int i = 0; i < 5; i++) {
            if (sel[i] == min) {
                temp = sel[s];
                sel[s] = sel[i];
                sel[i] = temp;
                break;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << sel[i] << "-";
    }
}
