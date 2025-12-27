#include <iostream>
#include <exception>

using namespace std;

struct MyException : public exception 
{
    const char* what() const throw() 
    {
        return "C++ exception occurred";
    }
};

int main() 
{
    try 
    {
        throw MyException();
    }
    catch (MyException& e) 
    {
        cout << "Caught a standard exception: " << endl;
        cout << e.what() << endl;
    }
    catch (exception& e) 
    {
        // 其他的错误
    }
     
}
