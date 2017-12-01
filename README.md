# std
```
#include<iostream>
int main()
{
    std::cout<<"我喜欢C++";//输出一句话
    std::cout<<std::endl;//换行
    return 0;
}
```
1. std是什么？
    std:: 是个名称空间标示符，C++标准库中的函数或者对象都是在命名空间std中定义的，所以我们要使用标准函数库中的函数或对象都要使用std来限定。
    对象cout是标准函数库所提供的对象，而标准库在名字空间中被指定为std，所以在使用cout的时候要加上
std::。这样编译器就会明白我们调用的cout是名字空间std中的cout。

2. 为什么将cout放到名字空间std中？
    是因为像cout这样的对象在实际操作中或许会有好几个，比如说你自己也可能会不小心定义了一个对象叫cout，那么这两个cout对象就会产生冲突。

3. std都是什么时候使用？
    一般来说，std都是要调用C++标准库时，要写上std；使用非标准库文件iostream.h，不用写。
```
#include<iostream.h>
int main()
{
    cout<<"我喜欢C++";//输出一句话
    cout<<endl;//换行
    return 0;
}
```

**    using namespace std 告诉编辑器我们将要使用空间std中的函数或者对象。所以cout和endl前面不用注明它们是std这个名字空间中的cout和endl。
