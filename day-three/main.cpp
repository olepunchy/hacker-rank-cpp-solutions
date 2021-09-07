// NOTE: Hacker-Rank Challenge Day 3
//
// Objective
// In this challenge, we learn about conditional statements. Check out the
// Tutorial tab for learning materials and an instructional video.
//
// Task
// Given an integer, , perform the following conditional actions:
//
// If n is odd, print Weird
// If n is even and in the inclusive range of 2 to 5 , print Not Weird
// If n is even and in the inclusive range of 6 to 20 , print Weird
// If n is even and greater than 20, print Not Weird
// Complete the stub code provided in your editor to print whether or not  is
// weird.
//
// Input Format
//
// A single line containing a positive integer, .
//
// Constraints
//
// Output Format
//
// Print Weird if the number is weird; otherwise, print Not Weird.
//
// Sample Input 0
//
// 3
// Sample Output 0
//
// Weird
// Sample Input 1
//
// 24
// Sample Output 1
//
// Not Weird

#include <iostream>
#include <string>

std::string IsItWierd(int const number) {
  // Handle out of bounds input
  if (number < 1 || number > 100) {
    return std::string("Weird");
  }

  // Handle the largest case first
  if (number % 2 == 0 && number > 20) {
    return std::string("Not Weird");
  }

  if (number % 2 == 0 && number >= 6 && number <= 20) {
    return std::string("Weird");
  }

  if (number % 2 == 0 && number >= 2 && number <= 5) {
    return std::string("Not Weird");
  }

  return std::string("Weird");
}

int main() {
  std::string r1 = IsItWierd(8);
  std::string r2 = IsItWierd(3);
  std::string r3 = IsItWierd(5);
  std::string r4 = IsItWierd(21);
  std::string r5 = IsItWierd(16);
  std::string r6 = IsItWierd(6);
  std::string r7 = IsItWierd(98);

  std::cout << r1 << "\n";
  std::cout << r2 << "\n";
  std::cout << r3 << "\n";
  std::cout << r4 << "\n";
  std::cout << r5 << "\n";
  std::cout << r6 << "\n";
  std::cout << r7 << "\n";

  return 0;
}
