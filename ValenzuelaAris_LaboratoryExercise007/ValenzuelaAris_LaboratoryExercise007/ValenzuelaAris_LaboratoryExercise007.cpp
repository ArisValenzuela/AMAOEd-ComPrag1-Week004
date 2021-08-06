


#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{

	cout << "INPUT 5 INTEGER NUMBERS\n";

	int e[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter value for row: " << i + 1 << ": ";
		cin >> e[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "Row" << i + 1 << ": " << e[i] << endl;
	}
	int n = 0;
	cout << "Enter height of the triangle:";
	cin >> n;


	char letters[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

	for (int y = 0; y <= n; y++) {

		for (int i = n - y; i > 0; i--) {
			cout << " ";
		}
		for (int x = 0; x <= y; x++) {
			cout << letters[x] << " ";
		}
		cout << endl;

	}

	int p[6];
	{
		for (int i = 0; i < 6; i++)
		{
			cout << "Enter Number[" << i + 1 << "]: ";
			cin >> p[i];
		}
		cout << endl;
		for (int i = 0; i < 6; i++)
		{
			for (int t = i; t < 6; t++)
			{
				if (p[i] > p[t])
				{
					int temp = p[i];
					p[i] = p[t];
					p[t] = temp;

				}

			}
		}
		cout << "The sorted numbers are: " << p[0] << ",";
		cout << p[1] << "," << p[2] << "," << p[3] << ",";
		cout << p[4] << "," << p[5] << endl;

	}
	system("PAUSE");

	return EXIT_SUCCESS;

}