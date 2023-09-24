#include <iostream>
using namespace std;
int main()
{
    long int num, rs2000, rs500, rs200, rs100, rs50, rs20, rs10, rs1;
    cout << "Enter rupese to break into notes ";
    cin >> num;
    for (int i = 1; num != 0; i++)
    {

        switch (i)
        {
        case 1:
            if (num >= 2000)
            {
                rs2000 = num / 2000;
                num = num % 2000;

                cout << " 2000 rs  notes are = " << rs2000 << endl;
                break;
                /* code */
            }

        case 2:
            if (num >= 500)
            {
                /* code */
                rs500 = num / 500;
                num = num % 500;

                cout << " 500 rs  notes are = " << rs500 << endl;
                break;
            }

        case 3:
            if (num >= 200)
            {
                /* code */
                rs200 = num / 200;
                num = num % 200;

                cout << " 200 rs  notes are = " << rs200 << endl;
                break;
            }

        case 4:
            if (num >= 100)
            {
                /* code */
                rs100 = num / 100;
                num = num % 100;

                cout << " 100 rs  notes are = " << rs100 << endl;
                break;
            }

        case 5:
            if (num >= 50)
            {

                rs50 = num / 50;
                num = num % 50;
                cout << " 50 rs  notes are = " << rs50 << endl;
            }

            break;
        case 6:
            if (num >= 20)
            {

                rs20 = num / 20;
                num = num % 20;
                cout << " 20 rs  notes are = " << rs20 << endl;

                break;
            }
        case 7:
            if (num >= 10)
            {

                rs10 = num / 10;
                num = num % 10;
                cout << " 10 rs  notes are = " << rs10 << endl;

                break;
            }

        case 8:
            if (num >= 1)
            {

                rs1 = num / 1;
                num = num % 1;

                cout << " 1 rs  notes are = " << rs1 << endl;
                break;
            }

        default:
            break;
        }
    }

    return 0;
}