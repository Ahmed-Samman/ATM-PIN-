#include<iostream>
using namespace std;

string Read_PIN()
{
	string PIN;
	cout << "Please enter the PIN code: ";
	cin >> PIN;

	return PIN;
}

bool Check_PIN()
{
	string R_PIN;
	short count = 3;
	do
	{
		count--;
		R_PIN = Read_PIN();

		if (R_PIN == "1234")
		{
			return 1; // This will exit the function and return true;
		}
		else
		{
			system("color 4f");
			cout << "\nWrong PIN! You have " << count << " more tries:" << endl;
		}
	} while (count != 0);

	return 0; // When you reach here this means Check_PIN faild;
}

int main()
{

	if (Check_PIN())
	{
		system("color 2f");
		cout << "\nYour balance is: " << 7500 << endl;
	}
	else
	{

		cout << "\nThe card blocked! Call the bank to help you!\n";
	}
		
	return 0;
}