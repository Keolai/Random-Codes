#include <iostream>
#include <vector>
#include <string> 
#include <chrono> 
#include <math.h> 

using namespace std;
using namespace std::chrono; 

int main(){ 

int d = 0;
int y = 0; 

while (d<1){

int f = 0; 
 
std::vector<double> factors;   
factors.push_back(1); 
double numb; 

std::cout << "Enter the absolute value of the number that you would like to factor:\n";
std::cin >> numb; 

double begnumb; 
double i = 2;
double math; 
double posnumb; 

begnumb = numb; 

auto start = high_resolution_clock::now(); 

while (i != begnumb) {
   math=fmod(numb, i);
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
for (std::vector<double>::const_iterator x = factors.begin(); x != factors.end(); ++x)
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
