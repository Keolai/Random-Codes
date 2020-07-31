#include <iostream>
#include <string>
#include <algorithm>
#include <cstddef>

//This code takes a string of characters, deletes all vowels, and deletes all consonants that occur more than once

int main() {
// gets rid of vowels
	std::cout << "Welcome to simplifier!\n ";

	int y=0;
	int n=0;
	int d;

	while (n <1) {
		std::cout << "Please enter the string that you would like to transform (no spaces or capitals)\n ";
		std::string words;
		std::cin >> words;

		words.erase(std::remove( words.begin(), words.end(), 'a' ), words.end() );
		words.erase(std::remove( words.begin(), words.end(), 'u' ), words.end() );
		words.erase(std::remove( words.begin(), words.end(), 'o' ), words.end() );
		words.erase(std::remove( words.begin(), words.end(), 'e' ), words.end() );
		words.erase(std::remove( words.begin(), words.end(), 'i' ), words.end() );
		words.erase(std::remove( words.begin(), words.end(), 'A' ), words.end() );
		words.erase(std::remove( words.begin(), words.end(), 'U' ), words.end() );
		words.erase(std::remove( words.begin(), words.end(), 'O' ), words.end() );
		words.erase(std::remove( words.begin(), words.end(), 'E' ), words.end() );
		words.erase(std::remove( words.begin(), words.end(), 'I' ), words.end() );

// counts for each consonant

		int countq = std::count (words.begin(), words.end(), 'q');
		int countw = std::count (words.begin(), words.end(), 'w');
		int countr = std::count (words.begin(), words.end(), 'r');
		int countt = std::count (words.begin(), words.end(), 't');
		int county = std::count (words.begin(), words.end(), 'y');
		int countp = std::count (words.begin(), words.end(), 'p');
		int counts = std::count (words.begin(), words.end(), 's');
		int countd = std::count (words.begin(), words.end(), 'd');
		int countf = std::count (words.begin(), words.end(), 'f');
		int countg = std::count (words.begin(), words.end(), 'g');
		int counth = std::count (words.begin(), words.end(), 'h');
		int countj = std::count (words.begin(), words.end(), 'j');
		int countk = std::count (words.begin(), words.end(), 'k');
		int countl = std::count (words.begin(), words.end(), 'l');
		int countz = std::count (words.begin(), words.end(), 'z');
		int countx = std::count (words.begin(), words.end(), 'x');
		int countc = std::count (words.begin(), words.end(), 'c');
		int countv = std::count (words.begin(), words.end(), 'v');
		int countb = std::count (words.begin(), words.end(), 'b');
		int countn = std::count (words.begin(), words.end(), 'n');
		int countm = std::count (words.begin(), words.end(), 'm');

// if then for keeping or erasing

		if (countq > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'q'), words.end());
		}
		if (countw > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'w'), words.end());
		}
		if (countr > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'r'), words.end()); //error
		}
		if (countt > 1) {
			words.erase(std::remove(words.begin(),words.end(), 't'), words.end());
		}
		if (county > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'y'), words.end());
		}
		if (countp > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'p'), words.end());
		}
		if (counts > 1) {
			words.erase(std::remove(words.begin(),words.end(), 's'), words.end());
		}
		if (countd > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'd'), words.end());
		}
		if (countf > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'f'), words.end());
		}
		if (countg > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'g'), words.end());
		}
		if (counth > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'h'), words.end());
		}
		if (countj > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'j'), words.end());
		}
		if (countk > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'k'), words.end());
		}
		if (countl > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'l'), words.end());
		}
		if (countz > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'z'), words.end());
		}
		if (countx > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'x'), words.end());
		}
		if (countc > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'c'), words.end());
		}
		if (countv > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'v'), words.end());
		}
		if (countb > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'b'), words.end());
		}
		if (countn > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'n'), words.end());
		}
		if (countm > 1) {
			words.erase(std::remove(words.begin(),words.end(), 'm'), words.end());
		}

		std::cout << "Your statement is " << words << "\n" ;
		std::cout << "Would you like to simplify another string? (1-yes and 2-no)\n";
		std::cin >> d; 
		if (d==2) {
					n++; 
				} else {
					y++; 
				}


	}

}
