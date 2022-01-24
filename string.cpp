#include "string.h"
#include <iostream>
#include <cstring>

string::string(){
	std::cout << 'd' ;
	chain = new char[2]();
	chain[0]= 'a';
	chain[1]= '\0';
	size_=1;
}
string::~string(){
	delete chain;

}
string::string(const string& str){
	int i= 0;
	chain = new char[str.size_]();
	std::cout << 'c' ;
	while (i< str.size_){
		chain[i] = str.chain[i];
	}
	std::cout << 'b' ;
}

void string::print(){
	for(int i=0;i<size_;i++){
		std::cout << chain[i] ;
	}	
}

const char* string::c_str(){
	return chain;
}

int string::size(){
	return size_;
}

void string::clear(){
	delete chain;
	chain = new char[1]();
	chain[0]= '\0';
	size_=0;
}

/*string& string::operator=(char c){
	string b;
	string& b&;
	return b;
}

string string::operator+(const string& lhs, const char* rhs){
	
}
*/
