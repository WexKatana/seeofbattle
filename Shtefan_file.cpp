помогите сделать переходы в меню или подскажите как это сделать (нужно что бы при "choise 2" скрывалась меню и открывались правила) 
#include<iostream>
#include<string>
#include <windows.h>
#include <iomanip>
#include <conio.h>

int main() {
    system("chcp 1251");

    system("cls");

    bool isBlinking = true;

    do {
        if (isBlinking) {

            std::cout << std::setw(500) << "ПАМЯТЬ" << std::endl;
            std::cout << std::setw(40) << "нажмите[Enter] для продолжения" << std::endl;
        }
        else {
            std::cout << std::setw(500) << "        " << std::endl;
        }
        isBlinking = !isBlinking;
        Sleep(1000);
        system("cls");

    } while (!_kbhit() || _getch() != 13);

    system("cls");
    int choice = 1;
    while (true) {

        system("cls");
        if (choice == 1) std::cout << "->";
        std::cout << "<Играть!>" << std::endl;

        if (choice == 2) std::cout << "->";
        std::cout << "<правила игры>" << std::endl;

        if (choice == 3) std::cout << "->";
        std::cout << "<Выход>" << std::endl;


    int key = _getch();

    if (key == 224) {
        key = _getch();

    switch (key) {
            case 72:
                choice = max(1, choice - 1);
                break;

            case 80:
                choice = min(3, choice + 1);
                break;
            }
        }
        else if (key == 13) {
            if (choice == 3) break;
        }
    }
    switch (choice)
    {
    case 1:{
        break;
    }
    case 2: {
        std::cout << "hi";
        break;
    }
    default:
        break;
    }
    return 0;
}
