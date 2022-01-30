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

    // Test functions Student B (Maëva Beugin)
    std::cout <<"Word length is : " << mot1 -> length()<< std::endl;
    std::cout <<"The maximum size of a word is : " << mot1 -> max_size()<< std::endl;

    char charEssay = 'd'; // It is the char to use for adding letters at the word in the function resize()
    ClassString* mot2 = new ClassString(chain); // I create a new word "Hello World"
    mot1 -> resize(5, charEssay);
    std::cout <<"If we want a length of 5, the new word is : " << std::endl;
    mot1 -> printmot();
    mot2 -> resize(15, charEssay);
    std::cout <<"If we want a length of 15 (adding the char "<< charEssay << "), the new word is : " << std::endl;
    mot2 -> printmot();
    ClassString* motOperatorEgal = mot2;
    std::cout <<"Test operator=(const ClassString&) : "<< std::endl; motOperatorEgal -> printmot();
    //ClassString* motOperatorPlus = mot1 + charEssay;
    //std::cout <<"Test operator+(const ClassString&, char) : "<< std::endl;
    //motOperatorPlus->printmot();

    std::cout << std::endl;
    // Test functions Student C (Sonia Canjura)
    char* chain3 = new char[100];
    memcpy(chain3, chain, chain_mem);
    std::cout << "****  Student C : testing with chain3=\"Hello World\" with capacity of 100  ****" << std::endl;
    std::cout << "mot3.operator=(chain3): "; ClassString mot3 = chain3; mot3.printmot();
    std::cout << "capacity(): " << mot3.capacity() << std::endl;
    std::cout << "empty(): " << mot3.empty() << std::endl;
    std::cout << "reserve(120): old memReserved = " << mot3.capacity(); mot3.reserve(120); std::cout << ", new memReserved = " << mot3.capacity() << std::endl;
    std::cout << "reserve(12): old memReserved = " << mot3.capacity(); mot3.reserve(12); std::cout << ",  new memReserved = " << mot3.capacity() << std::endl;
    std::cout <<"operator+(mot3, mot3): "; (mot3 + mot3).printmot();
    /* Manual deletion of pointers */
    delete mot1; //mot1 is not deleted automatically
    delete mot2; //mot2 is not deleted automatically
    delete[] chain3; //chain3 is not deleted automatically
 }
