#include <iostream>
using namespace std;
int main(int argv, char *argc[]) {
	int x = 0;
	for (int prime = 2; prime <= 100; ++prime)
	{
		x = 0;
		for (int n = 2; n <= prime; ++n)
		{
			if (prime != n && (prime%n) == 0)
		  {
			x++;
		  }
		  
		}
		if (x == 0)
		{
			cout << prime <<endl;
		}
		
	}
}
