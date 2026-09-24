#include <iostream>
#include <clocale>
using namespace std;

int a;
int b;

int main()
{
    setlocale(LC_ALL, "Russian");

	srand(1);
	int b = rand() % 3;
    string cmn[3] = { "camtn", "noj", "boom" };
    cout << "Цифры 0, 1, 2 = камень, ножницы, бумага соответственно.\nВведите число: ";
    cin >> a;
    if (a == b)
    {
        cout << "Draw!\n";
    }
    else if ((a == 0 && b == 1) || (a == 1 && b == 2) || (a == 2 && b == 0))
    {
        cout << "Win!\n";
    }
    else
    {
        cout << "Lose!\n";
    }
}