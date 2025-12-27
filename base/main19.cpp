#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVetor;

    myVetor.push_back(3);
    myVetor.push_back(7);
    myVetor.push_back(11);
    myVetor.push_back(5);

    cout << "Elements in the vector:";
    for (int element: myVetor) {
        cout << element << " ";
    }
    cout << endl;

    cout << "First element of the vector: " << myVetor[0] << endl;
    cout << "Second element of the vector: " << myVetor[1] << endl;
    cout << "Size of the vector: " << myVetor.size() << endl;

    myVetor.erase(myVetor.begin() + 2);

    cout << "Elements in the after erasing:";
    for(int element: myVetor){
        cout << element << " ";
    }
    cout << endl;

    // 清空向量并输出
    myVetor.clear();
    cout << "Size of the vertor after clearing : " << myVetor.size() << endl;

    return 0;
}