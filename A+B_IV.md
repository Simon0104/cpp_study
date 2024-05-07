// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,i,n,sum = 0;
//     while(cin >> n)
//     {
//         // cin >> sum;
//         for(int i = 1;i < n;i++){
//             sum += i;
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }

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