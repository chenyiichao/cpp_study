#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void file_copy(string in, string out)
{
    char data[1024 * 1024];
    ifstream infile;
    ofstream outfile;

    infile.open(in);
    outfile.open(out);

    cout << "copying file from " << in << " to " << out << endl;

    while (!infile.eof())
    {
        infile >> data;
        // cout << data << endl;
        outfile << data << endl;
    }
    infile.close();
    outfile.close();
}   

int main() 
{
    file_copy("nginx.conf", "nginx_copy.conf");
}