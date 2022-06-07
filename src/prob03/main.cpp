#include <iostream>
#include <iomanip>

using namespace std;

// ==============================================
// -----^^----- 不得修改『以上』的程式 -----^^-----
// ==============================================


// 1. 你所寫的程式碼只能在這個段落以下。
// 2. 請依照題目說明完成欠缺的程式碼。
int main()
{
    int n;
    int m;
    int sum = 0;
    cin >> m;    //cin >> n;//i <= n
    //int i = 1;
    while (cin >> n)
    {
        if (n % m == 0)
            sum = sum + n;
        //i++;
    }
    cout << sum;
    cout << endl;
    return 0;
}
