#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int min = 0;
	int max = 0;

	cin >> a;

	int* arr = new int[a];

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	min = arr[0];
	max = arr[0];

	for (int i = 1; i < a; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	for (int i = 0; i < a; ++i)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
		cout << arr[i] << " ";
	}



	return EXIT_SUCCESS;
}