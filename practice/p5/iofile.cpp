#include <iostream>
#include <fstream>

using namespace std;
int main() {
    fstream iofile;
    iofile.open("./a.dat", ios::out);
    iofile << "张三"
            << " " << 76 << " " << 98 << " " << 67 << endl;
    iofile << "李四"
            << " " << 86 << " " << 78 << " " << 97 << endl;
    iofile << "王五"
            << " " << 66 << " " << 88 << " " << 77 << endl;
    iofile << "赵六"
            << " " << 96 << " " << 68 << " " << 87 << endl;
    iofile << "钱七"
            << " " << 56 << " " << 48 << " " << 57 << endl;
    iofile.close();
    iofile.open("./a.dat", ios::in | ios::binary);
    char name[10];
    int chinese, math, computer;
    cout << "姓名\t语文\t数学\t计算机\t总分" << endl;
    iofile >> name;
    while (!iofile.eof()) {
        iofile >> chinese >> math >> computer;
        cout << name << "\t" << chinese << "\t" << math << "\t" << computer << "\t"
             << chinese + math + computer << endl;
        iofile >> name;
    }
    iofile.close();
}
