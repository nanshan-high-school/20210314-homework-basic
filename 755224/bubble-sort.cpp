#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    vector<int> list;
    do {
        list.push_back(rand());
    } while (rand() % 128 != 0);
    for (int i = 0; i < list.size(); i++) {
        for (int j = 0; j < list.size() - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    for (int n : list) cout << n << endl;
}
