#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int i, score, n;

    while (cin >> n)
    {
        for (i = 1; i <= n; i++)
        {
            cin >> score;
            if (score >= 90 )
            {
                cout << setw(5) << left<<"A+";
            }
            else 
            if (score >= 85 )
            {
                cout <<setw(5) << left<< "A";
            }
            else 
            if (score >= 80 )
            {
                cout <<setw(5) << left<< "A-";
            }
            else 
            if (score >= 77 )
            {
                cout <<setw(5) << left<< "B+";
            }
            else 
            if (score >= 73 )
            {
                cout <<setw(5) << left<< "B";
            }
            else 
            if (score >= 70 )
            {
                cout <<setw(5) << left<< "B-";
            }
            else 
            if (score >= 67 )
            {
                cout <<setw(5) << left<< "C+";
            }
            else 
            if (score >= 63 )
            {
                cout <<setw(5) << left<< "C";
            }
            else 
            if (score >= 60 )
            {
                cout <<setw(5) << left<< "C-";
            }
            else 
            if (score >= 50 )
            {
                cout <<setw(5) << left<< "D";
            }
            else 
            if (score >= 1 )
            {
                cout <<setw(5) << left<< "E";
            }
            else 
            //if (score == 0)
            {
                cout <<setw(5) << left<< "X";
            }
            }//for
            cout << endl;
        }//while     
    return 0;
}