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
    

    int num, temp; //num為數字 temp為第幾個
    for (int i = 0; i < n; i++) {
        temp = i;
        num = list[i];
        for (int j = i; j < n; j++) {
            if (num > list[j]) {
                num = list[j];
                temp = j;
            }
        }
        list[temp] = list[i]; 
        list[i] = num;
    }

    cout << "結果是" << endl;
    for (int i = 0; i < n; i++) {
        cout << list[i] << endl;
    }
}
/*
https://visualgo.net/zh/sorting
*/

