#include <iostream>
#include <iomanip>

using namespace std;

void dump(int dat[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << setw(4) << dat[i];
    }
    cout << endl;
}

// ==============================================
// -----^^----- 不得修改『以上』的程式 -----^^-----
// ==============================================

// 1. 你所寫的程式碼只能在這個段落。
// 2. 請依照題目說明完成欠缺的函數設計。
void copy(int src[], int des[], int sp, int n)
{
    for(int i = 0; i <= n; i++)
    {
        des[i] = src[i + sp];
    }
}
// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    int a1[100];
    int a2[100];

    int len = 0;

    while (cin >> a1[len])
    {
        len++;
    }
    cout << "a1 =";
    dump(a1, len);

    copy(a1, a2, 3, 5);
    cout << "a1[3] ~ a1[7] =";
    dump(a2, 5);
    copy(a1, a2, 0, 6);
    cout << "a1[0] ~ a1[5] =";
    dump(a2, 6);

    return 0;
}
