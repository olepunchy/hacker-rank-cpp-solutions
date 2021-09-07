// REVIEW: Hacker Rank 30 Day Challenge Day Four
//
// REVIEW: Objective
// In this challenge, we're going to learn about the difference between a class
// and an instance; because this is an Object Oriented concept, it's only
// enabled in certain languages. Check out the Tutorial tab for learning
// materials and an instructional video!

// REVIEW: Task
// Write a Person class with an instance variable age , and a constructor that
// takes an integer initialAge as a parameter. The constructor must assign
// initialAge to age after confirming the argument passed as initialAge is not
// negative; if a negative argument is passed as initialAge, the constructor
// should set age to 0 and print Age is not valid, setting age to 0.. In
// addition, you must write the following instance methods:
//
//
// TODO:
// - Creat a class Person with instance variable age.
// - Constructor with int intialAge as parameter.
// - If negative is passed for initialAge, set age to 0 and print 'Age is not
// valid'
// - Public method yearPasses() increment age by 1.
// - Public method amIOld() perform conditional check.
//   - If age < 13, print 'You are young..'
//   - If age >= 13 and age <= 18 print "You are a teenager.."
//   - Else print "You are old.."
//
// NOTE: Sample Output

// Age is not valid, setting age to 0.
// You are young.
// You are young.

// You are young.
// You are a teenager.

// You are a teenager.
// You are old.

// You are old.
// You are old.

// Explanation
// Test Case 0:
// Because , our code must set  to  and print the "Age is not valid..." message
// followed by the young message. Three years pass and , so we print the young
// message again.

// Test Case 1:
// Because , our code should print that the person is young. Three years pass
// and , so we print that the person is now a teenager.

// Test Case 2:
// Because , our code should print that the person is a teenager. Three years
// pass and , so we print that the person is old.

// Test Case 3:
// Because , our code should print that the person is old. Three years pass and
// the person is still old at , so we print the old message again.

// The extra line at the end of the output is supposed to be there and is
// trimmed before being compared against the test case's expected output. If
// you're failing this challenge, check your logic and review your print
// statements for spelling errors.

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Person {
   private:
    int age = 0;

   public:
    Person(int initialAge) : age(initialAge) {
        if (age <= 0) {
            std::cout << "Age is not valid, setting age to 0.\n";
            age = 0;
        }
    };

    void amIOld() const {
        if (age > 18) {
            cout << "You are old.\n";
            return;
        }

        if (age < 13) {
            cout << "You are young..\n";
            return;
        }

        if (age >= 13 && age <= 18) {
            cout << "You are a teenager.\n";
            return;
        }
    };

    void yearPasses() { age++; };
};

int main() {
    // Test cases

    Person person(15);

    person.yearPasses();
    person.yearPasses();
    person.amIOld();

    person.yearPasses();
    person.yearPasses();
    person.amIOld();

    return 0;
}
