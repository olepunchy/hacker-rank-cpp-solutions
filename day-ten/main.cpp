// Day 10: Binary Numbers

#include <iostream>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;

int main() {

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);

    int remainder = 0, count = 0, max = 0;

    while (n != 0) {
        remainder = n % 2;
        n = n / 2;

        if (remainder == 1) {
            count++;
        } else {
            count = 0;
        }

        if (count > max) {
            max = count;
        }
    }

    cout << max;

    return 0;
}
