#include <iostream>
#include <cstring>

using namespace std;

#define expA(s) printf("前缀加上后的字符串：%s\n", gc_##s)

#define expB(s) printf("前缀加上后的字符串：%s\n", gc_ ## s)
#define gc_hello1 "I am gc_hello1"

int main() {
    const char * gc_hello = "i am gc_hello";
    expA(hello);
    printf("前缀加上后的字符串：%s\n", gc_hello);
    expB(hello1);
    printf("前缀加上后的字符串：%s\n", "I am gc_hello1");
}

