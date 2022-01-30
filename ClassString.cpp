#include "ClassString.h"
#include <iostream>
#include <cstring>
#include <cstddef>


ClassString::ClassString(){
  p = nullptr;
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

ClassString::~ClassString(){
  delete[] p;
}

void ClassString::printmot(){
  int i=0;
  for(i=0;i<sizeString;i++){
    std::cout << p[i];
  }
  std::cout << std::endl;
}

int ClassString::length(){ //returns the length of the word without counting "/0"
  return sizeString;
}

int ClassString::max_size() const{ //returns the maximum size of a word
  return memReserved;
}

char* ClassString::resize(std::size_t n, char c){ //return a word with the length n
    if (n > sizeString){
        for (int i=sizeString; i<n; i++)
            p[i] = c;
    }
    else if (n < sizeString){
        sizeString = n;
        char* newp;
        for (int j=0; j<sizeString; j++){
            newp[j]= p[j];
        }
        p = newp;
    }
    return p;
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
