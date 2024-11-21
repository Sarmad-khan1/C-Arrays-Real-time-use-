#include <iostream>
using namespace std;
int main()
{
	string movie[5] = {"a", "b", "c", "d", "e"};
	float price = 500.0;
	float discount;
	string movieName;
	bool moviefound = false;
	cout << "Enter movie name for discount: ";
	cin >> movieName;
	for (int i = 0; i < 5; i++)
	{
		if (movie[i] == movieName)
		{
			moviefound = true;
			if (i % 2 == 0)
			{
				discount = price * 0.1;
			}
			else
			{
				discount = price * 0.05;
			}
			cout << "The discounted price came out to be " << price - discount << endl;
		}
	}
	if (!moviefound)
	{
		cout<<"Movie not found in cinema's list";
	}
	return 0;
}