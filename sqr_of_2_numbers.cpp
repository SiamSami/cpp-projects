#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int number = 0;
	int start = 0;
	cout << "Enter the number you want to start from.\n";
	cin >> start;
	cout << "Enter the number you want to end at.\n";
	cin >> number;
	int amountOfsum = 0;
	bool go = true;
	for (int x = start; x <= number; ++x)
	{
		go = true;
		for (int y = 1; y < x; ++y)
		{
			if (go)
			{
				for (int z = 1; z < x; ++z)
				{
					if (go)
					{
						if (pow(y, 2) + pow(z, 2) == x)
						{
							amountOfsum++;
							go = false;
						}
					}
					
				}
			}
			
		
		}
		
	}
	cout << "Answer: " << amountOfsum << endl;
}
