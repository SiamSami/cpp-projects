#include <iostream>
using namespace std;
int main(){
	const int &x = 68; // Assigned the value of x to 68 as const.
	const_cast<int&>(x) = 19; // Reassigned the value of x to 19. "const_cast" casted away the constness of x.
	cout << x << endl; // Outputs 19;
}
