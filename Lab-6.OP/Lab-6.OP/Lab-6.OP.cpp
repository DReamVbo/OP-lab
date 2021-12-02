// Lab-6.OP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;
int FunctionF(int x, int y)
{
    return pow(x, 2) - pow(y, 2);
}
float FunctionG(int x, int y, int z)
{
    return (float)(x + y) / (float)(4 * z * x);
}
float FunctionY(int a,int b, int c, int d)
{
    return (FunctionF(a, b) + FunctionF(c, d)) / sqrt(FunctionG(a, b, c))
        + (c - FunctionG(a, b, c) + 1) / (FunctionF(b, c) - FunctionF(a, b)) 
        * (1 + sqrt(FunctionG(a, b, c) )/ (FunctionF(b, c) - FunctionF(a, c)));
}
int main()
{
    string inputString;
    cout << "Enter a \n";
    getline(cin, inputString);
    int a = stoi(inputString);
    cout << "Enter b \n";
    getline(cin, inputString);
    int b = stoi(inputString);
    cout << "Enter c \n";
    getline(cin, inputString);
    int c = stoi(inputString);
    cout << "Enter d \n";
    getline(cin, inputString);
    int d = stoi(inputString);
    cout << FunctionY(a,b,c,d);
    
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
