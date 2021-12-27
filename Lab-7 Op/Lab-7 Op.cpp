// Lab-7 Op.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int Nod (int a, int b)
{
     while (a!=0 && b!=0)
     {
         if (a>b)
         {
             a = a % b;

         }
         else
         {
             b = b % a;
         }

     }
     return a + b;
}
int main()
{
    string inputString;
    cout << "Enter the dimension of the array - ";
    getline(cin, inputString);
    int arraySize = stof(inputString);
    int* arrayA=new int [arraySize];
    int* arrayB= new int[arraySize];
    int* arrayС = new int[arraySize];
    for (int i = 0;i < arraySize;i++)
    {
        arrayA[i] = rand();
        arrayB[i] = rand();
    }
    int max = arrayA[0];
    if (max < arrayB[0])
    {
        max = arrayB[0];
    }
    for (int i = 1;i <arraySize ;i++)
    {
        if (arrayA[i] > max)
        {
            max = arrayA[i];
        }
        if (arrayB[i] > max)
        {
            max = arrayB[i];
        }

    }
    for (int i = 0;i < arraySize;i++)
    {
        arrayС[i] = Nod(arrayA[i], arrayB[i]) * max;
        cout << "Array element C : " + to_string(arrayС[i])+"\n";
    }
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
