#include <iostream>
#include <map>
#include <set>

using namespace std;

template <typename T1, typename T2>
auto add(T1 x, T2 y) -> decltype( x + y)
{
    return x + y;
}

class Person
{
public:
    string firstname;
    string lastname;
};

int main() {
    // 1.used to declare return tyoes
    cout << add(1, 2) << endl;

    // 2.模板元编程 例如在一个模板函数或类获取容器的value_type,这里就不封装了,直接写在main函数里面
    // 获得表达式的type 有点像typeof()特点
    map<string, float> coll;
    decltype(coll)::value_type m{"as" ,1};
    cout << m.first << " " << m.second << endl;
    pair<string ,int> p{"a", 2};
    cout << p.first << " " << p.second << endl;
    // 3.used to pass the type of a lambda

    auto cmp = [](const Person &p1, const Person &p2)
    {
        return p1.lastname < p2.lastname;
    };
    
    // 对于lambda,我们往往只有object,很少有人能够写出它的类型，而有时就需要知道它的类型,要获得其type,就要借助其decltype
    set<Person, decltype(cmp) > col(cmp);
    cout << col.empty() << endl;

    
    return 0;
}