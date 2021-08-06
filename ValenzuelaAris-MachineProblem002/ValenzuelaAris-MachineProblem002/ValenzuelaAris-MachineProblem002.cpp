#include<cstdio>
#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
    //declaration and initialzation of the array
	
	const int rows = 5, cols = 7;
	int seats[rows][cols];
	int seatChoice, getRow, getCol;
	bool isValid;

	for (int i = 0, n = 1; i < rows; i++)
	{
		for (int x = 0;x<cols;x++,n++)
		{
			seats[i][x] = n;
		}
	}

	
	//continuos loop and display the array
	do {
		for (int i = 0, n = 1; i < rows; i++)
		{
			for (int x = 0; x < cols; x++, n++)
			{
				cout << seats[i][x] << "\t";
			}
			cout << "\n";
		}
	
	//accepting and validating inputed number from 0 to 35

	do 
	{
		cout << "\nEnter seat number to reserved: ";
		cin >> seatChoice;

		if (seatChoice < 0|| seatChoice > 35)
		{
			isValid = false;
			cout << "\nInvalid Input Please try again..\n";
		}
		else
		{
			isValid = true;
		}

	
	} while (!isValid);

	
	
	
	//finding the coordinates within the seats array
	
	getRow = (seatChoice - 1) / cols;
	getCol = (seatChoice - 1) % cols;

	if (seats[getRow][getCol] == 0)
	{
		//display that the seat is taken
		cout << "Seat is Taken... Please Select Another.\n";
	}
	else
	{

		//display that the seat is reserved and the number will replace to 0
		seats[getRow][getCol] = 0;
		cout << "Seat Successfully Reserved.\n";

		cin.get();
	}	

	} while (seatChoice != 0);
}

