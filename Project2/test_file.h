#pragma once
#include <iostream>
#include <vector>
#include <clocale>

using namespace std;

struct Product
{
    string nameProd;
    int price;
    int count;
    string sadasd;
};

struct MyListProduct
{
    string nameProd;
    int count;
};

struct 
{
    string NameLocation = "swamp";
    int count;
}player;

struct Location
{
    string name;
    string nextLoc;
    string backLoc;
    vector<string> nextLocs;
};


int rar;
int rep;

void Magzin()
{
    Location swamp = { "swamp" };
    Location city = { "city" };
    vector<Location> Location =
    {
        {"swamp","city",""},
        { "city","","swamp"}

    };
    

    vector<Product> items =
    {
        {"камень",10,100},
        {"ножницы", 20,5},
        {"бумага", 30,500},
        {"молоток", 40,5},
        {"ружье", 50,1},
    };


    vector<MyListProduct> list =
    {
        {"камень",101},
        {"ножницы",5},
        {"бумага",500},
        {"молоток",5},
        {"ружье",1},
    };

    

    int mani = 300;
    cout << endl << mani << endl << endl;


    cout << "--- ДОСТУПНЫЕ ВАРИАНТЫ ---\n";
    for (int i = 0; i < items.size(); ++i) {
        // Выводим индекс в квадратных скобках для красоты
        cout << "[" << i << "] = " << items[i].nameProd << " в количестве " << items[i].count << " по цене " << items[i].price << "\n";
    }


    for (Product prod : items)
    {
        prod.count;



    }

    for (int i = 0; i < 10; ++i)
    {
        items[i].count;

        if (i == 5)
        {
            break;
        }

    }

    while (true)
    {
        
        if (1)
        {

            break;
        }
    }

    
    cout << "Введите число вашего выбора: ";
    cin >> rar;


    cout << "Введите количество вашего товара: ";
    cin >> rep;





    mani -= items[rar].price * rep;

    cout << endl << mani;





    //vector<string> items = {
    // "камень",
    // "ножницы",
    // "бумага",
    // "молоток",
    // "ружье",
    // "кузнечный пресс"
    //};




    vector<vector<int>> matrix = {
        // кам  нож  бум  мол  руж  пресс
        {  0,   1,  -1,   1,  -1,  -1 }, // камень
        { -1,   0,   1,  -1,   1,  -1 }, // ножницы
        {  1,  -1,   0,   1,  -1,   1 }, // бумага
        { -1,   1,  -1,   0,   1,  -1 }, // молоток
        {  1,  -1,   1,  -1,   0,   1 }, // ружье
        {  1,   1,  -1,   1,  -1,   0 }  // кузнечный пресс
    };








}