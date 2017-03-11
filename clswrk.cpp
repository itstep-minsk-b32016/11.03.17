#include <iostream>
#include <time.h>
#include <ctime>


using namespace std;

//template <class T>
void AddUniqueToArrayIfItUnique(int*, int, int);

int main()
{
	setlocale(LC_ALL, "rus");

	srand(time(NULL));

	int size1 = 5;
	int size2 = 5;

	int *mas1 = new int[size1];			//1st array
	int *mas2 = new int[size2];			//2nd array
	for (int i = 0; i < size1; ++i)
	{
		mas1[i] = rand() % 10;
	}
	int *p_mas = mas2;					
	for (int i = 0; i < size2; ++i)
	{
		*(p_mas+i) = rand() % 10;
	}

	int *mas3 = new int[size1 + size2]; //3rd array 

}

void AddUniqueToArrayIfItUnique(int **mas, int &size, int new_elem)
{
	//mas[size] = new_elem;
	for (int i = 0; i < size; ++i)
	{
		if (*(mas[i]) == new_elem)
		{
			return;
		}
	}
	int *new_mas = new int[size + 1];
	for (int i = 0; i < size;  ++i)
	{
		new_mas[i] = *(mas[i]);
	}
	new_mas[size] = new_elem;
	delete[] * mas;
	*mas = new_mas;
	++size;
}
