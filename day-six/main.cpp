#include <iostream>
#include <string>

void EvenOddFromString(std::string input) {
    std::string evens;

    for (int index = 0; index < input.size(); index += 2) {
        evens += input[index];
    }

    std::string odds;

    for (int index = 1; index < input.size(); index += 2) {
        odds += input[index];
    }

    std::cout << evens << " " << odds << "\n";
}

int main() {
    std::cout << "Number of words: ";
    std::string wordsCountString;
    std::cin >> wordsCountString;
    int wordCount = std::stoi(wordsCountString);

    for (int index = 0; index < wordCount; index++) {
        std::cout << "Enter a word: ";
        std::string userInput;
        std::cin >> userInput;
        EvenOddFromString(userInput);
    }

    return 0;
}
