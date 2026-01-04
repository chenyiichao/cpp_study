#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream oifile;
    oifile.open("./a.dat", ios::out);
    oifile << "张三" << " " << 76 << " " << 98 << " " << 67 << endl;
    oifile << "李四" << " " << 86 << " " << 78 << " " << 97 << endl;
    oifile << "王五" << " " << 66 << " " << 88 << " " << 77 << endl;
    oifile << "赵六" << " " << 96 << " " << 68 << " " << 87 << endl;
    oifile.close();

    oifile.open("./a.dat", ios::in | ios::binary);
    int chinese,math,english;
    char name[10];
    oifile >> name;
    cout << "姓名\t语文\t数学\t英语\t总分" << endl;
    while(!oifile.eof()){
        oifile >> chinese >> math >> english;
        cout << name << "\t" <<  chinese << "\t" << math << "\t" << english 
            << "\t" << chinese + math + english << endl;
        oifile >> name;
    }
    oifile.close();
} 