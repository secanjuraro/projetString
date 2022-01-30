#ifndef CLASSSTRING
#define CLASSSTRING

#include <cstddef>

class ClassString
{
  public:
  	ClassString(); //default constructor
    ClassString(const char*); //constructor from a c-string
    ~ ClassString(); //destructor
    void printmot();
    int length();
    int max_size() const;
    char* resize(std::size_t, char);
    int capacity();
    bool empty();
    void reserve(std::size_t);
    ClassString& operator=(const char*);


  protected:
  	char* p;
    int sizeString;
    int memReserved;
};


#endif
