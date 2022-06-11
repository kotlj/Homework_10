
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	srand(time(0));
	system("cls");
	int choise = 0;
	cout << "Choose task:\n1 - weight/height\n2 - Date\n3 - temperature\n4 - Valera The Investor(new Dark Souls Boss)\n0 - exit\n";
	cin >> choise;
	int num_0, num_1, num_2;
	system("cls");
	if (choise == 1)
	{
		cout << "Enter your weight\nheight\ngender(0 - male/1 - famely)\n";
		cin >> num_0 >> num_1 >> num_2;
		cout << "You need to loose " << num_0 - (num_1 - 100 + 10 * num_2) << "kg weight";
	}
	else if (choise == 2)
	{
		cout << "Enter number of day/mouth/year(january = 1) :\n";
		cin >> num_0, num_1, num_2;
		int arrey[13] = {0, 31, 27, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 };
		if (num_0 > 0 && num_0 <= arrey[num_1])
		{
			cout << "Correct\n";
			if (num_0 + 1 <= arrey[num_1])
				cout << "Next day: " << num_0 + 1 << "/" << num_1 << "/" << num_2;
			else if (num_0 + 1 > arrey[12] && num_1 == 12)
				cout << "Next day: 1/1/" << num_2 + 1;
			else
				cout << "Next day: 1/" << num_1 + 1 << "/" << num_2;
		}
	}
	else if (choise == 3)
	{
		cout << "enter tempeature(C^):\n";
		cin >> num_0;
		if (num_0 > 5 < 30)
			cout << "warm";
		else if (num_0 > 25)
			cout << "heat";
		else if (num_0 < 5 > -12)
			cout << "cold";
		else
			cout << "very cold";
		cout << "Weather tomorrow:\ntemperature(C^): " << num_0 + rand() % 5 - rand() % 5 << "\nWind(m/s): " << rand() % 10 << 
			"\nRain|Snow(mm/water): " << rand() % 10 << "\nBlack sea temperature: " << num_0 - rand() % 10;
	}
	else if (choise == 4)
	{
		int num_3;
		cout << "Enter cost of chicken/number of chikecns/eggs per cweel from one ckicken/cost of egg\n";
		cin >> num_0 >> num_1 >> num_2 >> num_3;
		cout << "You will go in + after " << (double) num_0 * num_1 / (num_1 * num_2 * num_3) << "weeks";
	}
	else if (choise == 0)
	{
		exit(1);
	}
	Sleep(3000);
	main();
}