#include <string>
#include <iostream>
#include <cmath>

int main(){

	int y=0;
	int n=0;

	while (n<1) {
		float a;
		float b;
		float c;

		int d; 

		std::cout << "enter a\n";
		std::cin >> a;

		std::cout << "enter b\n";
		std::cin >> b;

		std::cout << "enter c\n";
		std::cin >> c;

		float solution1;
		float solution2;

		solution1 = (-1*b + sqrt(b*b - 4*a*c))/2*a;
		solution2 = (-1*b - sqrt(b*b - 4*a*c))/2*a;

		std::cout << "your solutions are " << solution1 << " and " << solution2 << "\n";
		std::cout << "Would you like to solve another equation?\n""(1-yes and 2-no)\n";
		;std::cin >> d; 

		if (d==2) {
			n++; 
		} else {
			y++; 
		}

	}
}






