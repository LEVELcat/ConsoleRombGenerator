#include <iostream>
using std::cout;
using std::endl;

int main()
{
    while (true)
    {
        char symb = '0';
        int height = 50;
        int lenght = height * 2 - 1;

        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < lenght; x++)
            {
                if (x - y >= 0 && lenght - x > y) cout << symb;
                else cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        for (int y = height - 1; y >= 0; y--)
        {
            for (int x = lenght - 1; x >= 0; x--)
            {
                if (x - y >= 0 && lenght - x > y) cout << symb;
                else cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
