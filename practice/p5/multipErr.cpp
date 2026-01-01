#include <iostream>
using namespace std;

class BasicException {
public:
    char* where() {return "BasicException ...";}
};

class FileSysException : public BasicException {
public:
    char* where() {return "FileSysException ...";}
};

class FileNotFound : public FileSysException {
public:
    char* where() {return "FileNotFound ...";}
};

class DiskNotFound : public FileSysException {
public:
    char* where() {return "DiskNotFound ...";}
};

int main() {
    try{
        throw FileSysException();
    }catch(DiskNotFound e){
        cout << e.where() << endl;
    } catch(FileNotFound e){
        cout << e.where() << endl;
    } catch(FileSysException e){
        cout << e.where() << endl;
    } catch(BasicException e){
        cout << e.where() << endl;
    }

    try{
        throw DiskNotFound();
    } catch(BasicException e){
        cout << e.where() << endl;
    } catch(FileSysException e){
        cout << e.where() << endl;
    } catch(DiskNotFound e){
        cout << e.where() << endl;
    } catch(FileNotFound e){
        cout << e.where() << endl;      
    }
    return 0;
}