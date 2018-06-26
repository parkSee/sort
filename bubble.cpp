#include <iostream>

using namespace std;

int main()
{
	int num[10] = {9,5,2,4,1,3,6,5,4,0};
	int temp = 0;
	
	for (int j = 0; j < 10; ++j)
	{
		cout << num[j] << " ";
	}

	cout << endl;

	// 버블 정렬
	for (int j = 0; j < 10; ++j)
	{
		for (int i = 1; i < 10; ++i)
		{
			if (num[i - 1] > num[i])
			{
				temp = num[i - 1];
				num[i - 1] = num[i];
				num[i] = temp;
			}
		}
	}


	for (int j = 0; j < 10; ++j)
	{
		cout << num[j] << " ";
	}

	return 0;
}