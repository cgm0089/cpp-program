#include <iostream>
#include <iomanip>

using namespace std;

// ==============================================
// -----^^----- 不得修改『以上』的程式 -----^^-----
// ==============================================
int main()
{
    int n;
    int f;
    cin >> n;
    cin >> f;

    for (int i = 1; i <= n; i++)
    {
        if (i % f == 0)
            cout << setw(4) << i;
    }
    cout << endl;
    return 0;
}
// 1. 你所寫的程式碼只能在這個段落。
// 2. 請依照題目說明完成欠缺的程式碼。
