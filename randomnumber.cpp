#include <iostream>
#include <ctime>
#include <stdlib.h>

int main(){

srand((unsigned) time(0));

int n;
int r1;
int r2;
int v;
int f=0;
int d=0;
int y;
int r3;

std::cout << "Welcome to the random number generator\n";

	while (d<1){

		std::cout << "What is the lowest number you would like?\n";
		std::cin >> r1;

		std::cout << "What is the highest number you would like?\n";
		std::cin >> r2;

		std::cout << "How many numbers would you like\n";
		std::cin >> n;

		r3= (r2-r1) + 1;
		
		std::cout << "Your numbers are:\n"; 

		while (n>0){

				v=rand() % r3 + r1;
				std::cout << v << "\n";

				n--;

		}
		std::cout << "Would you like another set of numbers?\n""(1-yes and 2-no)\n";
				;std::cin >> f;

				if (f==2) {
					d++;
				} else {
					y++;
				}

	}


}
