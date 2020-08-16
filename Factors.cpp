#include <iostream>
#include <vector>
#include <string> 

//this program finds all of the possible factors of a given number

using namespace std;

int main(){ 
 
std::vector<int> factors;   
factors.push_back(1); 
int numb; 

std::cout << "Enter the absolute value of the number that you would like to factor:\n";
std::cin >> numb; 

int begnumb; 
int i = 2;
int math;  

begnumb = numb; 

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

std::cout << "The factors of " << begnumb << " are:\n"; 
for (std::vector<int>::const_iterator x = factors.begin(); x != factors.end(); ++x)
    std::cout << *x << "\n";

} 
