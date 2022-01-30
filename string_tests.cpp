#include "ClassString.h"
#include <iostream>
#include <cstddef>
#include <cstring>
using namespace std;


int main(){

  size_t chain_mem = 11;
  char* chain =  new char[chain_mem];
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

    // Test functions Student B
    std::cout <<"Word length is : " << mot1 -> length()<< std::endl;
    std::cout <<"The maximum size of a word is : " << mot1 -> max_size()<< std::endl;

    char charEssay = 'd'; // It is the char to use for adding letters at the word in the function resize()
    ClassString* mot2 = new ClassString(chain); // I create a new word "Hello World"
    std::cout <<"If we want a length of 5, the new word is : " << mot1 -> resize(5, charEssay)<< std::endl;
    std::cout <<"If we want a length of 15 (adding the char "<< charEssay << "), the new word is : " << mot2 -> resize(15, charEssay)<< std::endl;

    //Sonia's tests
    std::cout << std::endl;
    char* chain3 = new char[100];
    memcpy(chain3,chain,chain_mem);
    std::cout << "Testing with chain3: hello world with capacity of 100" << std::endl;
    ClassString mot3 = chain3;

    std::cout << "capacity(): " << mot3.capacity() << std::endl;
    std::cout << "empty(): " << mot3.empty() << std::endl;
    std::cout << "reserve(20): old memReserved = " << mot3.capacity(); mot3.reserve(120); std::cout << " new memReserved = " << mot3.capacity() << std::endl;
    std::cout << "reserve(12): old memReserved = " << mot3.capacity(); mot3.reserve(12); std::cout << "  new memReserved = " << mot3.capacity() << std::endl;
    std::cout <<"operator=(chain): "; mot3.printmot();
}