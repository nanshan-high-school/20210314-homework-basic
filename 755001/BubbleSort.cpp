#include <bits/stdc++.h>
using namespace std;

vector<int> vec(vector<int> i) {
    int tmp = 0;
    int n = size(i);
    for(int i = 0; i < i.size(); i++) {
        for(int j = i + 1 ; j < n ; j++) {
            if(i.at(i) > i.at(j)) {
                tmp = i.at(i);
                i.at(i) = i.at(j);
                i.at(j) = tmp;
            }
        }
    }
    for(auto i : i) {
        vec.push_back(i);
    }
    return vec;
};
