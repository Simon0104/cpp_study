题目描述
你的任务是计算a+b。

输入描述
输入包含一系列的a和b对，通过空格隔开。一对a和b占一行。

输出描述
对于输入的每对a和b，你需要依次输出a、b的和。
如对于输入中的第二对a和b，在输出中它们的和应该也在第二行。

输入示例
3 4
11 40
输出示例
7
51

#include <iostream>
int main(){
    int a,b;
    while(std::cin >> a >> b){
    int sum = a + b;
    std::cout << sum << std::endl;
    }
    return 0;
}

思路逻辑：
首先调用函数库iostream，这个是istream和ostream两个函数的结合
std::cin 表示接受a和b两个变量
std::cout 表示输出结果，后面的std::endl表示变行
