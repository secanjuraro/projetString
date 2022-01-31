#include "ClassString.h"
#include <iostream>
#include <cstring>
#include <cstddef>
using namespace std;

ClassString::ClassString(){
  p = nullptr;
}

ClassString::ClassString(const ClassString& str){
	p = new char[str.memReserved];
	memcpy(p,str.p,str.sizeString);
	sizeString = str.sizeString;
	memReserved = str.memReserved;
}

ClassString::ClassString(const char* str){
  memReserved = 100;
  p = new char[memReserved];
  int i=0;
  while(str[i]!='\0'){
    i += 1;
  }
  sizeString = i;
  memcpy(p,str,sizeString);
  this -> p[sizeString] = '\0';
}

void ClassString::printmot(){
  int i=0;
  for(i=0;i<sizeString;i++){
    std::cout << p[i];
  }
  std::cout << std::endl;
}
// Student A(Blanc Théo)
const char* ClassString::c_str(){
	return p;
}

int ClassString::size(){
	return sizeString;
}

void ClassString::clear(){
	delete p;
	p = new char[1]();
	p[0] = '\0';
	sizeString = 0;
	memReserved = 0;
}

ClassString& ClassString::operator=(char c){
	clear();
  p = new char[2];
	p[0] = c;
	p[1] = '\0';
	sizeString = 1;
	memReserved = 1;
	return *this;
}

ClassString operator+(const ClassString& lhs,const char* rhs){
  ClassString str;
	str.p = new char[lhs.sizeString + strlen(rhs) + 1];
	std::strcpy(str.p,lhs.p);
	std::strcat(str.p,rhs);
	str.sizeString = lhs.sizeString + strlen(rhs);
	str.memReserved = lhs.sizeString + strlen(rhs);
	return str;
}

// Student B (Maëva Beugin)
int ClassString::length() const{ //returns the length of the word without counting "/0"
  return sizeString;
}

int ClassString::max_size() const{ //returns the maximum size of a word
  return memReserved;
}

ClassString& ClassString::resize(std::size_t n, char c){ //return a word with the length n
    if (n > sizeString){
        for (int i=sizeString; i<n; i++)
            p[i] = c;
    }
    else if (n < sizeString){
        char* newp;
        for (int j=0; j<n; j++){
            newp[j]= p[j];
        }
        p = newp;
    }
    sizeString = n;
    return *(new ClassString(p));
}

ClassString& ClassString::operator=(const ClassString& word){
  return *(new ClassString(word));
}

ClassString operator+(const ClassString& lhs,char rhs){
  ClassString str;
	str.p = new char[lhs.sizeString + 2];
  char* rhsbis=  new char[2];
  rhsbis[0]=rhs;
  rhsbis[1]= '\0';
  std::strcpy(str.p,lhs.p);
	std::strcat(str.p,rhsbis);
	str.sizeString = lhs.sizeString + 1;
	str.memReserved = lhs.sizeString + 1;
	return str;
}

// Student C (Sonia Canjura)
ClassString::~ClassString(){
  std::cout << "Deleting "; printmot();
  delete[] p;
}

int ClassString::capacity(){
  return memReserved;
}

bool ClassString::empty(){
  return sizeString == 0 ;
}

void ClassString::reserve(std::size_t n){
  if (n>memReserved){
    char* temp_ = new char[n];
    memcpy(temp_,p,memReserved);
    memReserved = n;
    delete[] p;
    p = temp_;
  }
  else if(n<memReserved) {
    if(n>=sizeString){
      char* temp_ = new char[n];
      memcpy(temp_,p,n);
      memReserved = n;
      delete[] p;
      p = temp_;
    }
  }
}

ClassString& ClassString::operator=(const char* s){
  return *(new ClassString(s));
}

ClassString operator+(const ClassString& lhs, const ClassString& rhs){
  char* temp_ = new char[lhs.length()+rhs.length()];
  memcpy(temp_,lhs.p,lhs.length());
  memcpy(temp_+lhs.length(),rhs.p,rhs.length());
  return *(new ClassString(temp_));
}
