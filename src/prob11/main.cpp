#include <iostream>
#include <iomanip>

using namespace std;

const int COL = 5;

void dump(int d[][COL], int row)
{
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < COL; c++)
        {
            cout << setw(4) << d[r][c];
        }
        cout << endl;
    }
    cout << endl;
}

// ==============================================
// -----^^----- 不得修改『以上』的程式 -----^^-----
// ==============================================

// 1. 你所寫的程式碼只能在這個段落。
// 2. 請依照題目說明完成欠缺的 main() 設計。
int main()
{
    int d[100][5];
    int row;
    cin >> row;

    for(int i=0; i<row; i++){
        for(int j=0; j<5; j++){
            d[i][j] = i * 5 + j + 1;
        }
    }

    dump(d,row);


    return 0;
}
