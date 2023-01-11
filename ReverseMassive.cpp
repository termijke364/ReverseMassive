#include <iostream>

using namespace std;

int const arsize = 10;

void ReverseMassive(int arr[], int arr1[])
{
	for (int i = 0; i < arsize; i++)
		arr[i] = rand() % 10 + 1;

	for (int i = 0; i < arsize; i++)
		arr1[i] = arr[arsize - i-1];
}
int main()
{
	setlocale(0, "");
	srand(time(NULL));

	int arr[arsize]{};
	int arr1[arsize]{};
	ReverseMassive(arr, arr1);
	
	cout << "Заданный массив" << endl;

	for (int i = 0; i < arsize; i++)
		cout << arr[i] << ' ';

	cout << endl;

	cout << "Обратный массив" << endl;

	for (int i = 0; i < arsize; i++)
		cout << arr1[i] << ' ';

	cout << endl;

	return 0;
}