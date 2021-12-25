// Lab-9 OP C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	string inputString;
	cout << "Enter the size of the array \n";
	getline(cin, inputString);
	int arraySize = stoi(inputString);
	cout << "Minimum word size \n";
	getline(cin, inputString);
	int wordSize = stoi(inputString);
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char* array = new char[arraySize];
	for (int i = 0;i < arraySize;i++)
	{
		array[i] = alphabet[rand()&(sizeof(alphabet)-1)];
	}
	int count = 0;
	for (int i = 0;i <=arraySize-wordSize;i++ )
	{
		for (int j = i + (wordSize - 1);j<arraySize;j++)
		{
			count++;
		}
	}
	count = count * 2;
	cout <<"The number of words the length of which is greater than the specified \n"+to_string( count );
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
