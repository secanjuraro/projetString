#ifndef CLASSSTRING
#define CLASSSTRING

#include <cstddef>

class ClassString
{
  public:
  	ClassString(); //default constructor
    ClassString(const char*); //constructor from a c-string  
  	void printmot();
    int length();
    int max_size() const;
    char* resize(std::size_t, char);
    //int capacity();
    ~ ClassString(); //destructor

  protected:
  	char* p;
    int sizeString;
    int memReserved;
};


#endif