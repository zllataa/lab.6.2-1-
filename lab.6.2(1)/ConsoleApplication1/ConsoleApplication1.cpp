#include <iostream>
using namespace std;
bool Include(int* arr, const int arrSize, int* set, const int setSize)
{
	bool b, r = true;
	for (int i = 0; i < setSize; i++)
	{
		b = false;
		for (int j = 0; j < arrSize; j++)
			if (set[i] == arr[j])
			{
				b = true;
				break;
			}
		r = r && b;
	}


		return r;
}
int main()
{
	const int n = 6;
	const int k = 2;
	int s[n] = { 1,2,3,4,5,6 };
	int c[k] = { 3,1 };
	if (Include(s, n, c, k))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}