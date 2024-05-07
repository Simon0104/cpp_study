// 你的任务依然是计算a+b。
// 输入描述
// 输入中每行是一对a和b。其中会有一对是0和0标志着输入结束，且这一对不要计算。
// 输出描述
// 对于输入的每对a和b，你需要在相应的行输出a、b的和。
// 如第二对a和b，他们的和也输出在第二行。
// 输入示例
// 2 4
// 11 19
// 0 0
// 输出示例
// 6

// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,n = 0;
//     while(cin >> a >> b){
//         if(a == 0 && b == 0){
//             // cin >> a >> b;
//             cout << a + b << endl;
//         }
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,n = 0;
//     while(cin >> a >> b){
//         if(a == 0 && b == 0) break;
//             // cin >> a >> b;
//             cout << a + b << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int a,b,i,n,sum = 0;
    while(cin >> n)
    {
        // cin >> sum;
        for(int i = 1;i < n;i++){
            sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main(){
//     int num,i,n,sum = 0;
//     while(cin >> n)
//     {
//         if(n == 0)break;
//         int sum = 0;
//         for(int i = 0;i < n;i++){
//             cin >> num;
//             sum += num;
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }