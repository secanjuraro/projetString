#include "ClassString.h"
#include <iostream>
using namespace std;


int main(){

  char* chain =  new char[11];
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
  chain[11]= '\0';

  ClassString* mot1 = new ClassString(chain);
  mot1 -> printmot();


}
