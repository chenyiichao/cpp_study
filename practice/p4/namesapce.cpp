
#include <iostream>
using namespace std;

template <class T> T Min(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T> T myMin(T a, T b ) {
    return (a > b) ? a : b;
}


int main() {
  double a = 2, b = 3.4;
  float c = 2.3, d = 3.2;
  cout << "2，3    的最小值是：" << Min<int>(2, 3) << endl; //显式调用
  cout << "2，3.4  的最小值是：" << Min(a, b) << endl;      //隐式调用
  cout << "'a'，'b'	  的最小值是：" << Min('a', 'b') << endl;
  cout << "2.3，3.2的最小值是：" << Min(c, d) << endl;
  cout << "2.3，3.2的最大值是：" << std::min(c, d)
       << endl; //引用命名空间内部的最小值函数
  cout << "2.3，3.2的最小值是：" << myMin(c, d) << endl; //更换class为typename
  // cout<<"2，'a'    的最小值是："<<Min(2,'a')<<endl;
  // //报错,不同类型无法处理，请看9-3-1.cpp
  Min("12","128");
  
  return 0;
}
