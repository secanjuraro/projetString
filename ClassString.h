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
    int length() const;
    int max_size() const;
    ClassString& operator=(const ClassString&);
    ClassString& resize(std::size_t, char);
    int capacity();
    bool empty();
    void reserve(std::size_t);
    ClassString& operator=(const char*);
    friend ClassString operator+(const ClassString&, const ClassString&);

  protected:
  	char* p;
    int sizeString;
    int memReserved;
};

//ClassString operator+(const ClassString&, char);


#endif
