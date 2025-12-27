#include <iostream>
#include <string>

using namespace std;

struct Books
{
    string title;
    string author;
    string subject;
    int book_id;

    Books(string t,string a,string s,int id)
        : title(t), author(a), subject(s), book_id(id) {}
};


// typedef struct Books Book;

void printBookInfo(const Books* book) {
    cout << "book's title:" << book->title << endl;
    cout << "book's author:" << book->author << endl;
    cout << "book's subject:" << book->subject << endl;
    cout << "book's book_id:" << book->book_id << endl;
}
 
int main() 
{
    Books Book1("C++ Primer", "Bjarne Stroustrup", "Programming", 101);
    Books Book2("Data Structures and Algorithms", "Kleinberg and Tardos", "Computer Science", 102); 

    Books* prtBook1 = &Book1;
    Books* prtBook2 = &Book2;

    printBookInfo(prtBook1);
    printBookInfo(prtBook2);

    return 0;
}
