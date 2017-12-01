#include "stdio.h"
#include <string>

using  std::string;
using  std::wstring;

#if 1
void printStr(){
    string str1 = "Hello C++!";
    printf("str1 = %s\n",str1.c_str());
}


#endif

int main(){
    printStr();
    int $a = 055;
    printf("a = %d\n",$a);
    return 0;
}