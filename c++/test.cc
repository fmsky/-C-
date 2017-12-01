#include <iostream>
#include <cstdio>

#include <unistd.h>
#include <fcntl.h>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


// int g = 20;
// int fun1(int a,int b){
//     g=a+b;
//     printf("changed-global g = %d\n",g);
//     return 0;
// }

// int fun2(){
//     printf("current-global g = %d\n",g);
//     return 0;
// }

// int main(){
//     fun2();
//     fun1(10,20);
//     fun2();
//     return 0;
// }

 
/* 
 * 这个程序演示了有符号整数和无符号整数之间的差别
*/
// int main()
// {
//    short int i;           // 有符号短整数
//    short unsigned int j;  // 无符号短整数
 
//    j = 50000;
 
//    i = j;
//    cout << i << " " << j << endl;
   
 
//    return 0;
// }

// int main(){
//     if (access("basic.cc",0) == 0){
//         printf("basic.cc exist \n");
//     }
//     return 0;
// }

// void pCaller(int *p){
//     *p = 4;
// }

// void rCaller(int &x){
//     x=5;
// }

// int main(){
//     // int a = 3;
//     // int &b = a;
//     // b = 4;

//     int a = 3;
    
    
//     pCaller(&a);
//     rCaller(a);
//     cout << a;
    
// }
// int main(){
//     vector<int> v = { 1, 2, 3, 4, 5, 6 };  
//     int even_count = 0;  
//     for_each(v.begin(), v.end(), [&even_count](int val){  
//         if(!(val & 1)){  
//             ++ even_count;  
//         }  
//     });  
//     cout << "The number of even is " << even_count << endl;  
// }

// #include <ctime>
// #include <cstdlib>
 
// using namespace std;
 
// int main ()
// {
//    double i,j;
 
//    // 设置种子
//    srand( (unsigned)time( NULL ) );
 
//    /* 生成 10 个随机数 */
//    for( i = 0; i < 10; i++ )
//    {
//       // 生成实际的随机数
//       j= rand()%10;
//       cout <<"随机数： " << j << endl;
//    }
 
//    return 0;
// }

#include <string>

using namespace std;

int main ()
{
  string str1 = "Hello";
  string str2 = "World";
  string str3;
  int  len ;

  // 复制 str1 到 str3
  str3 = str1;
  cout << "str3 : " << str3 << endl;

  // 连接 str1 和 str2
  str3 = str1 + str2;
  cout << "str1 + str2 : " << str3 << endl;

  // 连接后，str3 的总长度
  len = str3.size();
  cout << "str3.size() :  " << len << endl;

  return 0;
}
