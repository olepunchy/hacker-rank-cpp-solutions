#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Difference {
    private:
    vector<int> elements;

    public:
        Difference(vector<int> &elements): elements(elements) {};

        void computeDifference() {
            int smallest = *min_element(begin(elements), end(elements));
            int largest = *max_element(begin(elements), end(elements));

            maximumDifference = abs(largest - smallest);
        };

        int maximumDifference;

};

int main() {

    int numberOfElements = 0;

    cout << "Enter the number of elements: ";
    cin >> numberOfElements;

    vector<int> theElements;
    cout << "Enter " << numberOfElements << " numbers separated by a space: ";
    int element;

    while (cin >> element) {
        theElements.push_back(element);
        if (cin.get() == '\n') {
            break;
        }
    }

    Difference difference = Difference(theElements);

    difference.computeDifference();

    cout << "The difference is " << difference.maximumDifference << "\n";

    return 0;
}
