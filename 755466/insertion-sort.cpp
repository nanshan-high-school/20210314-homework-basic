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
    

    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (list[i] > list[j]) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            /*
            cout << i << endl;
            for (int i = 0; i < n; i++) {
                cout << list[i] << endl;
            }
            cout << endl;
            */
        }
    }

    cout << "結果是" << endl;
    for (int i = 0; i < n; i++) {
        cout << list[i] << endl;
    }
}
/*
https://visualgo.net/zh/sorting
*/
