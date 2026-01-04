#include <iostream>
#include <cstring>

using namespace std;

typedef void (*Fun)();

class Base
{
    public:
        Base(){}
        virtual void fun1(){
            cout << "Base::fun1()" << endl;
        }
        virtual void fun2() {
            cout << "Base::fun2()" << endl;
        }
        virtual void func3(){}
        ~Base() {};
};

class Derived: public Base 
{
    public:
        Derived(){};
        void fun1(){
            cout << "Derived::fun1()" << endl;
        }
        void fun2() {
            cout << "Derived::fun2()" << endl;
        }
        ~Derived(){}
};

Fun getAddr(void* obj,unsigned int offset) {
    cout << "=====================" << endl;
    //64位操作系统，占8字节，通过*(unsigned long *)obj取出前8字节，即vptr指针
    void* vptr_addr = (void *) * (unsigned long *) obj;
    printf("vptr_addr:%p\n", vptr_addr);

    /**
     * @brief 通过vptr指针访问virtual table,因为虚表中每个元素（虚函数指针）在64位编译器下
     * 后面加上偏移量就是每个函数的地址！
     */
    void* func_addr = (void *) * ((unsigned long *)vptr_addr + offset);
    printf("func_addr:%p\n", func_addr);
    return (Fun)func_addr;
}

int main(void) {
    Base ptr;
    Derived d;
    Base *pt = new Derived();
    Base &pp = ptr;
    Base &p = d;
    cout << "基类对象直接调用" << endl;
    ptr.fun1();
    cout << "基类引用指针指向基类实例" << endl;
    pp.fun1();
    cout << "基类指针指向派生类实例并调用虚函数" << endl;
    pt->fun1();
    cout << "基类引用指向派生类实例并调用虚函数" << endl;
    p.fun1();

    Fun f1 = getAddr(pt, 0);
    (*f1)();
    Fun f2 = getAddr(pt, 1);
    (*f2)();
    delete pt;
    return 0;
}