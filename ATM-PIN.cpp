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

	do
	{
		 R_PIN = Read_PIN();
		
		 if (R_PIN == "1234")
		 {
			 return 1;
		 }
		 else
		 {
			 cout << "\nWrong PIN!\n";
			 system("color 4f");
		 }
	} while (R_PIN != "1234");

	//return 0;
}

int main()
{
	if (Check_PIN())
	{
		system("color 2f");
		cout << "\nYour balance is: " << 7500 << endl;
	}


	return 0;
}