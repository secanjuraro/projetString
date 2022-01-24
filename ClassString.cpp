#include "ClassString.h"
#include <iostream>
#include <cstring>


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
    std::cout << p[i]<< std::endl;
  }
}
