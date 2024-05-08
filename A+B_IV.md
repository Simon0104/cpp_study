题目描述
你的任务是计算若干整数的和。

输入描述
每行的第一个数N，表示本行后面有N个数。

如果N=0时，表示输入结束，且这一行不要计算。

输出描述
对于每一行数据需要在相应的行输出和。

输入示例
4 1 2 3 4
5 1 2 3 4 5
0 
输出示例
10
15

#include <iostream>
using namespace std;
int main(){
    int num,i,n,sum = 0;
    while(cin >> n)
    {
        if(n == 0)break;
        int sum = 0;
        for(int i = 0;i < n;i++){
            cin >> num;
            sum += num;
        }
        cout << sum << endl;
    }
    return 0;
}

必须要输入一个变量num
1）首先是因为题目要求num求和
2）i代表的是索引，即使最后结果是正确的但是逻辑并不符合