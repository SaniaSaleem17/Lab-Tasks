#include <iostream>
using namespace std;
int main(){
	
	int entryFee = 15;
	int snackCost = 5;
	int total_cost = 0;
	int numUsers;
	
	cout << "GAME NIGHT !!" << endl;
	
	cout << "Enter number of users: ";
	cin >> numUsers;
	if (numUsers>15)
	{
		cout << "Error: Not more users allowed.";
		return 1;
	}
	
	string Names[10];
	for (int i=0; i<numUsers; i++)
	{
		cout << "Enter name " << i + 1 << ": ";
		cin >> Names[i];
		int userCost = entryFee + snackCost;
		total_cost = total_cost + userCost;
		cout << Names[i]<< ": Entry Fee: $" << entryFee << ", Snack Cost: $" << snackCost << ", Total price: $" << userCost; 
		cout << endl;
	}
	
	cout << "User names for the event: " << endl;
	for (int i=0; i<numUsers; i++)
	{
		cout << "Name of Student " << i + 1 << ": " << Names[i] << endl;
	}
	
	cout << "Total cost is: $" << total_cost;
	
	return 0;
}

