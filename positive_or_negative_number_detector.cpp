#include <iostream>
using namespace std;

int main()
{
	int xy1;
	char li2;

	do
	{
		system("cls");
		cout << "Insert Data (value) : ";
		cin >> xy1;
		cout << "=============================" << endl;
		cout << "\n";
		cout << "report : " << endl;
		cout << "\n";

		if (xy1 > 0) {
			cout << ">> Positive range";
		} else if (xy1 < 0) {
			cout << ">> Negative range";
		} else {
			cout << ">> zero";
		}
		

		cout << "\n\n\n";
		cout << "Input again (Y/T) ? : ";
		cin >> li2;
	} while (li2 == 'Y' || li2 == 'y');
	cout << "press any key to close ...";
	cin.get();
	getchar();
	return 0;
}
