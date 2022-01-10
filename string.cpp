#include "string.h"
#include <iostream>

string::string(){
	chain[0]='H';
	chain[1]='e';
	chain[2]='l';
	chain[3]='l';
	chain[4]='o';
	chain[5]=' ';
	chain[6]='W';
	chain[7]='o';
	chain[8]='r';
	chain[9]='l';
	chain[10]='d';
	chain[11]='\0';
}

void string::print(){
	for(int i=0;i<12;i++){
		std::cout << chain[i] ;
	}	
	std::cout << '\n' ;
}
