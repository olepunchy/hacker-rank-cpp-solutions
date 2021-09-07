#include <iostream>
#include <cmath>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = meal_cost * (double)tip_percent / 100;
    double tax = meal_cost * (double)tax_percent / 100;

    double total = meal_cost + tax + tip;

    std::cout << floor(total) << "\n";
    std::cout << round(total) << "\n";
}

int main() {

   solve(12.0, 20, 8);
   solve(10.25, 17, 5);

    return 0;
}
