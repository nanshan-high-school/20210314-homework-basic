#include <iostream>
using namespace std;
int main() {
    int ins[5] = {5, 2, 1, 4, 3};
    int a;
    
    for(int i = 1; i < 5; i++) {
        for(int j = i; j > 0; j--) {
            if (ins[j] < ins[j - 1]) {
                a = ins[j];
                ins[j] = ins[j - 1];
                ins[j - 1] = a;
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        cout << ins[i] << ",";
    }
}
