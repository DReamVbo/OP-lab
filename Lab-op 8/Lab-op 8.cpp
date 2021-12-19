// Lab-op 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
#include <cmath>
using namespace std;
int** ReSize(int** array, int oldColumnsSize, int oldRowSize, int  newColumnsCount, int NewRowsCount)
{
    int endColumns = 0;
    int endRows = 0;
    int** newArrey = new int* [newColumnsCount];
    for (int i = 0;i < newColumnsCount;i++)
    {
        newArrey[i] = new int[NewRowsCount];
    }
    if (oldColumnsSize < newColumnsCount)
        endColumns = oldColumnsSize;
    else
        endColumns = newColumnsCount;
    if (endRows < NewRowsCount)
        endRows = oldRowSize;
    else
        endRows = endRows;
    for (int i = 0;i < endColumns;i++)
    {
        for (int j = 0;j < endRows;j++)
        {
            newArrey[i][j] = array[i][j];
        }
    }
    
   return newArrey;

}

int main()
{
    string inputString;
    cout << "Enter the row size of the matrix \n";
    getline(cin, inputString);
    int rowSize = stof(inputString);
    cout << "Enter the column size of the matrix \n";
    getline(cin, inputString);
    int columnSize = stof(inputString);
    int** array = new int* [columnSize];
    for (int i = 0;i < columnSize;i++)
    {
        array[i] = new int[rowSize];
    }
    for (int i=0;i<columnSize;i++)
    {
        for (int j = 0; j < rowSize;j++)
        {
            array[i][j] = rand();
        }
    }
   int** newArray = ReSize(array, columnSize, rowSize,columnSize + 1, rowSize + 1);
   delete[]array;
    for (int i = 0;i < columnSize ;i++)
    {
        int sum = 0;
        for (int j = 0;j < rowSize;j++)
        {
            sum += newArray[i][j];

        }
        newArray[i][rowSize] = sum;
    }
    for (int i = 0;i < rowSize+1;i++)
    {
        int sum = 0;
        for (int j = 0;j < columnSize ;j++)
        {
            sum += newArray[j][i];
        }
        newArray[columnSize][i] = sum;
    }
    for (int j = 0;j < rowSize+1;j++)
    {
        for (int i=0;i<columnSize+1;i++)
        {
            cout << to_string(newArray[i][j])+"  ";
        }
        cout << "\n";
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
