#include <iostream>
#include <vector>
using namespace std;

void swap(int &min, int &target) {
    int temp = min;
    min = target;
    target = temp;
}
int main() {
    srand(time(0));
    vector<int> list;
    do {
        list.push_back(rand() % 100);
    } while (rand() % 20 != 0);
    for (int i = 0; i < list.size(); i++) {
        int min = i;
        for (int j = i + 1; j < list.size(); j++) if (list[min] > list[j]) min = j;
        swap(list[min], list[i]);
    }
    for (int n : list) cout << n << ' ';
}
