#include <iostream>
#include <iomanip>

using namespace std;

// ==============================================
// -----^^----- 不得修改『以上』的程式 -----^^-----
// ==============================================

// 1. 你所寫的程式碼只能在這個段落。
// 2. 請依照題目說明完成欠缺的函數設計。
void dump(int dat[], int n, int x = 5, int col = 5)
{
   int i=0;
//i < n
    while(i<n)
    {
        cout << setw(x) << dat[i];
        if ((i + 1) % col == 0) cout << endl;
        i++;
    }

    if (i % col != 0) cout << endl;
}
// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    int dat[100];
    int len = 0;

    while (cin >> dat[len])
    {
        len++;
    }

    dump(dat, len);
    cout << endl;
    dump(dat, len, 10);
    cout << endl;
    dump(dat, len, 10, 3);

    return 0;
}
