#include <iostream>
#include <windows.h>
#include <ctime>
#include "Map.h"


using namespace std;

void main(void)
{
	Map myMap(time(0));
	myMap.display();
	system("PAUSE");
}

		/*cout << endl << endl;
		for (int j = 0; j < 80; j++) {
			for (int i = 0; i < 80; i++) {
				if (a[i][j] == NULL) {
					cout << ".";
				}
			}
		}

	}
	system("PAUSE");
}
*/ 