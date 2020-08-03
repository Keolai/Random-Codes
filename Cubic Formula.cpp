#include <string>
#include <iostream>
#include <cmath>
#include <complex> 

int main(){

	int y=0;
	int n=0;

	while (n<1) {
		float a;
		float b;
		float c;
        float d;

		int f; 

		std::cout << "enter a\n";
		std::cin >> a;

		std::cout << "enter b\n";
		std::cin >> b;

		std::cout << "enter c\n";
		std::cin >> c;

        std::cout << "enter d\n";
        std::cin >> d; 

		float solution1;
		float rsolution2;
        float rsolution3;
		
		float isolution2;
		float isolution3;
		
		//squares and cubes of variables
		
		float as= a*a;
		float bs= b*b;
		float bc= b*b*b; 

		//components to each solution

		float comp1= ((2*bc) - (9*a*b*c) + (27*as*d)) * ((2*bc) - (9*a*b*c) + (27*as*d)); // (2b^3-9abc+27a^2d)^2
		float comp2= (bs - (3*a*c)) * (bs - (3*a*c)) * (bs - (3*a*c)); // (b^2-3ac)^3
		float comp3= (2*bc) - (9*a*b*c) + (27*as*d); 
		float comp4= sqrt(comp1 - (4 * comp2)); 
		float poseq= cbrt(0.5* (comp3 + comp4)); //positive string
		float negeq= cbrt(0.5* (comp3 - comp4)); //negative string
		float start= (-1*b)/(3*a); //start of all equations
		float mid1= -1/(3*a); //mids of x1
		//std::complex<float> poscomp(1, (sqrt(3)));   SCRAPPED 
		//std::complex<float> negcomp(1, -(sqrt(3))); 
		//float posmid= poscomp/(6*a);
		//float negmid= negmid/(6*a); 
		float threes= sqrt(3); 
		float denom= 6 * a; // 6a in eq

		//real solutions
		solution1 = start + (mid1 * poseq) + (mid1 * negeq); 
		rsolution2 = start + (poseq/denom) + (negeq/denom); 
		rsolution3 = start + (poseq/denom) + (negeq/denom);

		//imaginary solutions
		isolution2 = (threes * poseq)/denom + (threes * negeq)/denom; 
		isolution3 = (threes * negeq)/denom + (threes * poseq)/denom;


		std::cout << "your solutions are:\n" << solution1 << "\n" << rsolution2 << " + " << isolution2 << "(i)\n" <<
		rsolution3 << " + " << isolution3 << "(-i)\n"; 
		std::cout << "Would you like to solve another equation?\n""(1-yes and 2-no)\n";
		;std::cin >> f; 

		if (f==2) {
			n++; 
		} else {
			y++; 
		}

	}
}






