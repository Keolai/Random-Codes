#include <iostream>
#include <vector>
#include <string> 
#include <chrono> 

//this program finds all the possible factors of a number (NEEDS C++11 SUPPORT TO BE COMPILED) 

using namespace std;
using namespace std::chrono; 

int main(){ 

int d = 0;
int y = 0; 

while (d<1){

int f = 0; 
 
std::vector<int> factors;   
factors.push_back(1); 
int numb; 

std::cout << "Enter the absolute value of the number that you would like to factor:\n";
std::cin >> numb; 

int begnumb; 
int i = 2;
int math; 
int posnumb; 

begnumb = numb; 

auto start = high_resolution_clock::now(); 

while (i != begnumb) {
    math= numb % i; 
        if(math > 0) {
        i++; 
        } else {
        factors.push_back(i); 
        //int newnumb = numb / i; *note- this allows for a factor tree 
        //numb = newnumb;
        i++;
        }
    
}


factors.push_back(begnumb); 

auto stop = high_resolution_clock::now(); 
auto duration = duration_cast<microseconds>(stop - start); 

std::cout << "The factors of " << begnumb << " are:\n"; 
for (std::vector<int>::const_iterator x = factors.begin(); x != factors.end(); ++x)
    std::cout << *x << "\n";
std::cout << "Time taken to calculate: " << duration.count() << " microseconds\n";

std::cout << "Would you like to factor another number?\n""(1-yes and 2-no)\n";
;std::cin >> f;

    if (f==2) {
		d++;
	} else {
    	y++;
	}

}

} 
