#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double INSURANCE_PERCENT = 0.80;
	double replacementCost;
	double minimumInsurance;

	// Get the replacement cost from the user
	cout << "Enter the replacement cost of the building: $";
	cin >> replacementCost;

	// Calculate the minimum insurance required
	minimumInsurance = replacementCost * INSURANCE_PERCENT;

	// Display the result
	cout << fixed << setprecision(2);
	cout << "The minimum amount of insurance you should purchase is: $" << minimumInsurance << endl;

	return 0;
}