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

int Max(int array1[],int array2[], int  arraySize)
{
    int max = array1[0];
    if (max < array2[0])
    {
        max = array2[0];
    }
    for (int i = 1;i < arraySize;i++)
    {
        if ( array1[i] > max)
        {
            max = array1[i];
        }
        if (array2[i] > max)
        {
            max = array2[i];
        }
    }
    return max;
}
int* СreateArrayC(int array1[], int array2[], int arraySize)
{
    int* arrayC = new int[arraySize];
    int max = Max(array1, array2, arraySize);
    for (int i = 0;i < arraySize;i++)
    {
        arrayC[i] = Nod(array1[i], array2[i]) * max;
    }
    return arrayC;
}
int main()
{
    string inputString;
    cout << "Enter the dimension of the array - ";
    getline(cin, inputString);
    int arraySize = stof(inputString);

    int* arrayA=new int [arraySize];
    int* arrayB= new int[arraySize];

    for (int i = 0;i < arraySize;i++)
    {
        arrayA[i] = rand();
        arrayB[i] = rand();
    }
    int* arrayC = СreateArrayC(arrayA, arrayB, arraySize);
    delete[]arrayA;
    delete[]arrayB;
    for (int i = 0;i < arraySize;i++)
    {
        cout << "Array element C : " + to_string(arrayC[i])+"\n";
    }
    delete[]arrayC;
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
