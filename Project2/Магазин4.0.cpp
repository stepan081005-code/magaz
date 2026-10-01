#include <iostream>
#include <vector>
#include <clocale>

using namespace std;

int mymoney = 1000;
string bag;

struct prod
{
    string nam;
	string product;
	int price;
	int count;



};

int main() {
    setlocale(LC_ALL, "Russian");

    vector<prod> magazin = {
        {"1","молоко  ",80, 99},
        {"2","хлеб    ",50, 99},
        {"3","яйца    ",100, 99},
        {"4","печенье ",90, 99},
        {"5","чай     ",150, 99,},
        {"6","сок     ",110, 99}
    };
    
    cout << "добро пожаловать в магазин \n";
    cout << "у вас есть: " << mymoney << " рублей\nСПИСОК ТОВАРОВ\n";

        while (true) {
            for (const prod& item : magazin) {
                cout << item.nam
                    << " Товар: " << item.product
                    << " | Цена: " << item.price
                    << " | Количество: " << item.count << endl;
            }
            cout << "введите номер товара(0 - выйти): ";
            cin >> bag;

            if (bag == "0") {
                cout << "выход. у вас осталось " << mymoney << " рублей\n";
                break;
            }

            for (const prod& item : magazin) {
                if (item.nam == bag) {
                    mymoney -= item.price;
                    cout << "вы купили: " << item.product << "\n";
                    cout << "\nосталось денег: " << mymoney << " рублей\n";
                    break;
                }
            }
        }


    return 0;

}
