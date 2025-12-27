#include <iostream>
#include <cstring>
using namespace std;
 
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book;

void printBook(struct Books book) {
    cout << "book's title:" << book.title << endl;
    cout << "book's author:" << book.author << endl;
    cout << "book's subject:" << book.subject << endl;
    cout << "book's book_id:" << book.book_id << endl;
}

int main() {

    Books Book1;
    Books Book2; 
    
    strcpy(Book1.title, "C++ Programming");
    strcpy(Book1.author, "Runoob");
    strcpy(Book1.subject, "Programming Language");
    Book1.book_id = 101;

    strcpy(Book2.title, "Python Programming");
    strcpy(Book2.author, "Runoob");
    strcpy(Book2.subject, "Programming Language");
    Book2.book_id = 102;


    // cout << "first book's title:" << Book1.title << endl;
    // cout << "first book's author:" << Book1.author << endl;
    // cout << "first book's subject:" << Book1.subject << endl;
    // cout << "first book's book_id:" << Book1.book_id << endl;

    // cout << "second book's title:" << Book2.title << endl;
    // cout << "second book's author:" << Book2.author << endl;
    // cout << "second book's subject:" << Book2.subject << endl;
    // cout << "second book's book_id:" << Book2.book_id << endl;

    printBook(Book1);
    printBook(Book2);

    return 0;
}

