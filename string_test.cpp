#include <iostream>
#include <cstring>
#include "string.h"

int main(){
  /*int a;

  std::cout << "Hello, World!" << std::endl;
			*/
	string a;
	a.print();
	string b(a);
	a.print();
	b.print();
	
  return 0;
}
