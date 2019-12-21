#include <iostream>

//первый вариант порядка полей с выравниваем
struct Car1
{
    int year;
    char name[10];
    size_t weight;
    bool beingInTheUse;
};

//первый вариант порядка полей с выравниваем
struct Car2
{
    size_t weight;
    int year;
    char name[10];
    bool beingInTheUse;
};

//первый вариант порядка полей без выравнивания
#pragma pack(push, 1)
struct Car3
{
    int year;
    char name[10];
    size_t weight;
    bool beingInTheUse;
};
#pragma pack(pop)

//первый вариант порядка полей без выравнивания
#pragma pack(push, 1)
struct Car4
{
    size_t weight;
    int year;
    char name[10];
    bool beingInTheUse;
};
#pragma pack(pop)

using namespace std;

int main()
{
    Car1 car1;
    Car2 car2;
    Car3 car3;
    Car4 car4;

    cout << "Car1:" << endl
        << "int year" << endl
        << &car1.year << endl;

    cout << "char name[10]" << endl;

    for (int i = 0; i < 10; ++i)
        cout << (void*)&car1.name[i] << endl;

    cout << "size_t weight" << endl
         << &car1.weight << endl
         << "bool beingInTheUse" << endl
         << &car1.beingInTheUse << endl
         << "sizeof fields" << endl
         << sizeof(car1.year) + sizeof(car1.name) + sizeof(car1.weight) + sizeof(car1.beingInTheUse) << endl
         << "sizeof struct" << endl
         << sizeof(car1) << endl << endl;

    cout << "Car2:" << endl
        << "int year" << endl
        << &car2.year << endl;;

    cout << "char name[10]" << endl;

    for (int i = 0; i < 10; ++i)
        cout << (void*)&car2.name[i] << endl;

    cout << "size_t weight" << endl
        << &car2.weight << endl
        << "bool beingInTheUse" << endl
        << &car2.beingInTheUse << endl
        << "sizeof fields" << endl
        << sizeof(car2.year) + sizeof(car2.name) + sizeof(car2.weight) + sizeof(car2.beingInTheUse) << endl
        << "sizeof struct" << endl
        << sizeof(car2) << endl << endl;

    cout << "Car3:" << endl
        << "int year" << endl
        << &car3.year << endl;;

    cout << "char name[10]" << endl;

    for (int i = 0; i < 10; ++i)
        cout << (void*)&car3.name[i] << endl;

    cout << "size_t weight" << endl
        << &car3.weight << endl
        << "bool beingInTheUse" << endl
        << &car3.beingInTheUse << endl
        << "sizeof fields" << endl
        << sizeof(car3.year) + sizeof(car3.name) + sizeof(car3.weight) + sizeof(car3.beingInTheUse) << endl
        << "sizeof struct" << endl
        << sizeof(car3) << endl << endl;

    cout << "Car4:" << endl
        << "int year" << endl
        << &car4.year << endl;;

    cout << "char name[10]" << endl;

    for (int i = 0; i < 10; ++i)
        cout << (void*)&car4.name[i] << endl;

    cout << "size_t weight" << endl
        << &car4.weight << endl
        << "bool beingInTheUse" << endl
        << &car4.beingInTheUse << endl
        << "sizeof fields" << endl
        << sizeof(car4.year) + sizeof(car4.name) + sizeof(car4.weight) + sizeof(car4.beingInTheUse) << endl
        << "sizeof struct" << endl
        << sizeof(car4) << endl;
}