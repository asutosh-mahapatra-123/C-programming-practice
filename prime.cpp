cpp
#include <iostream>
    using namespace std;

int main()
{
    int num, i, j;
    cout << "Enter last number: ";
    cin >> num;

    for (j = 2; j <= num; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }

        if (i == j)
        {
            cout << "Prime number: " << j << endl;
        }
    }

    return 0;
}