// clockType.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include "newClock.h" 
#include "newClock.cpp" 

using namespace std; 


int main()
{ 
    clockType myClock(7, 24, 32); 
    clockType yourClock; 
    cout << "myClock = " << myClock
        << endl;
    cout << "yuorClock=" << yourClock << endl;
    cout << "Enter the time in the form" << "hr:min:sec";
    cin >> myClock;
    cout << endl;
    cout << "The new time of my CLock=" << myClock << endl;

    ++myClock;
    
    cout << "After incrementing the time, " << "myClock= " << myClock << endl;

    yourClock.setTime(13, 35, 38);

    cout << "After settinh the time, " << "yourClock = " << yourClock << endl;

    if (myClock == yourClock)
        cout << "The times of MyClock and YourClock are equal. " << endl;
    else
        cout << "The times of MyClock and YourClock are not equal. " << endl;
    if (myClock <= yourClock)
        cout << "The times of MyClock is less than or equal. " << endl
             << "the time of yourClock." << endl;
        else
        cout << "The times of MyClock is greater than or equal. " << endl
        << "the time of yourClock." << endl;
    return 0;

}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
