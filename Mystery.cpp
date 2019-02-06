// Exercise 4.16: Mysterio.cpp
#include <iostream>
using namespace std;

int main()
{
		int count = 1;

		while (count <= 10)
		{
			if (count % 2 == 1) {
			cout << "****" << endl;
			++count;
		}

		if (count % 2 == 0)
		{
			cout << "++++++++" << endl;
			++count;
		}
		}
		system("pause");
} // end class Mystery
