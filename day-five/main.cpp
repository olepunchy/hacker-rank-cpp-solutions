#include <iostream>
#include <string>

using std::string;

void StringResult(int first, int second) {
    std::cout << first << " x " << second << " = " << first * second << "\n";
}

int main() {
    int number = 5;

    for (int index = 1; index <= 10; index++) {
        StringResult(number, index);
    }

    return 0;
}
