#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n = 10;//幾個數字
    srand(time(NULL));
    int list[n];
    cout << "亂數是" << endl;
    for (int i = 0; i < n; i++) {
        list[i] = rand() % 100;
        cout << list[i] << endl;
    } 
    cout << endl;
    
    int temp, time = 0;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (list[i] < list[j]) {
                // for (int i = 0; i < n; i++) {
                //     cout << list[i] << endl;
                // }
                cout << endl;

                time += 1;
                temp = list[j];
                list[j] = list[i];
                list[i] = temp;
            }
        }
    }

    cout << "結果是" << endl;
    for (int i = 0; i < n; i++) {
        cout << list[i] << endl;
    }
    cout << "換了" << time << "次\n";
}
