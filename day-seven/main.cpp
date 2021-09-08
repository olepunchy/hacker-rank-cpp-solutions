// NOTE: Day 7: Arrays
// -------------------
//
// NOTE: Objective
// -------------------
// Today, we will learn about the Array data structure. Check out the Tutorial
// tab for learning materials and an instructional video.
//
// NOTE: Task
// -------------------
// Given an array A, of N integers, print A's elements in reverse order as a
// single line of space-separated numbers.
//
// NOTE: Example
// -------------------
// A = [1,2,3,4]
//
// Print 4 3 2 1. Each integer is separated by one space.
//
// NOTE: Input Format
// ------------------
//
// The first line contains an integer, N (the size of our array).
// The second line contains N space-separated integers that describe array A's
// elements.
//
// NOTE: Sample Input
// ------------------
//
// 4
// 1 4 3 2
//
// NOTE: Sample Output
// ------------------
// 2 3 4 1
//

#include <iostream>
#include <vector>

int GetFirstInput() {
	int arraySize = 0;
	std::string arrayInput;
	std::cin >> arrayInput;

	return std::stoi(arrayInput);
}

std::vector<int> GetSecondInput(int arraySize) {
	std::vector<int> numbers;
	for (int index = 0; index < arraySize; index++) {
		std::string input;
		std::cin >> input;
		int number = std::stoi(input);
		numbers.push_back(number);
	}

	return numbers;
}

int main() {
	// First line of input is the size of the array
	int arraySize = GetFirstInput();

	// Second line of input is the elements of the array
	std::vector<int> numbers = GetSecondInput(arraySize);

	// NOTE: The original problem only requires the numbers to be sorted
	// in reverse order from the way they were sent into input.

	// Reverse the numbers
	std::reverse(begin(numbers), end(numbers));

	for (auto num : numbers) {
		// NOTE: The original problem requires a space between numbers.
		std::cout << num << " ";
	}

	std::cout << "\n";

	return 0;
}
