#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main() {

	srand(time(NULL));

	string amount;
	string maxamt[100];
	string another;
	another = "y";

	int num = 0;
	int count = 0;
	while (amount != "0")

	{
		cout << "Press Enter After Each Name: (Press 0 To Pick The Winner)" << endl 
			<< "Number: " << count << " :";

		cin >> amount;
		if (amount == "0") break;
		maxamt[count] = amount;
		count++;
	}

	while (another == "y") {

		num = rand() % count;
		cout << "Winner!!  " << maxamt[num] << " ";
		cout << " Number " << num << endl;
		cout << "Chose again? (y/n)";
		cin >> another;
	}

	return 0;
}