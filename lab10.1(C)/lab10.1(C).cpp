#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int search();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Кількість слів 'while' в файлі t.txt: " << search() << endl;
    return 0;
}
int search()
{
    FILE* t;
    t = fopen("t.txt", "r");

    char ch;

    int k = 0;

    int counter = 0;

    ch = getc(t); // зчитує символи вже відкритого файлу

    while (ch != EOF)
    {       
        ch == 'w' ? counter++, ch = getc(t) : counter = 0;
        ;
        ch == 'h' && counter == 1 ? counter++, ch = getc(t) : counter = 0;
        ch == 'i' && counter == 2 ? counter++, ch = getc(t) : counter = 0;
        ch == 'l' && counter == 3 ? counter++, ch = getc(t) : counter = 0;
        ch == 'e' && counter == 4 ? k++ , counter = 0 : counter = 0;
        ch = getc(t);
    }
    return k;
}