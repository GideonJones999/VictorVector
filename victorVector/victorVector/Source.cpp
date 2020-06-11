#include <iostream>
#include <iomanip>
#include <string>
//Sounds
#include <Windows.h>
#include <MMSystem.h>
//Randoms 
#include <random>
#include <cstdlib>
#include <ctime>
//Dynamic Arrays
#include <vector>

using namespace std;

int main() {
	
	vector<double> victor;
	double gru[5];
	double temp = 0, sum = 0;


	for (int i = 0; i < 5; i++) 
	{
		cout << "Enter a decimal value.  " << endl;
		cin >> temp;
		while (cin.fail())
		{
			cout << "Error: Data not readable. Try again." << endl;
			cin.clear();
			string garbage;
			cin >> garbage;

			cout << "Enter a decimal value.  " << endl;
			cin >> temp;
		}

		victor.push_back(temp);
	}

	for (int i = 0; i < victor.size(); i++) 
	{
		gru[i] = victor[i];
	}

	for (int i = 0; i < 5; i++) 
	{
		sum += gru[i];
	}

	cout << "The sum of the values in the array is " << sum << "." << endl;

	system("PAUSE");
	return 0;
}
