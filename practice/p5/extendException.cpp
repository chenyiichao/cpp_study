#include <iostream>
using namespace std;

class BasicException {
public:
    virtual string where(){
        return "BasicException occurred";
    }
};

class FileSysException : public BasicException {
public:
    virtual string where() {
        return "FileSysException occurred";
    }
};

class FileNotFound : public FileSysException {
public:
    virtual string where() {
        return "FileNotFound occurred";
    }
};

class DiskNotFound : public FileSysException {
public:
    virtual string where() {
        return "DiskNotFound occurred";
    }
};

int main() {
    try {
        DiskNotFound err;
        throw &err;
    } catch(BasicException* p){
        cout << p->where() << endl;
    }

}