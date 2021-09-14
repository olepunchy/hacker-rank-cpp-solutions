#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Book{
protected:
    string title;
    string author;

public:
    Book(string t,string a) {
        title = t;
        author = a;
    }
    virtual void display()=0;

};

class MyBook : Book {
private:
   int price;

public:
   MyBook(string title, string author, int price) : Book(move(title), move(author)) {
        this->price = price;
   }

   void display() override {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: " << price << "\n";
   }
};

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}