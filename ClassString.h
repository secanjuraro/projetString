#ifndef CLASSSTRING
#define CLASSSTRING

#include <cstddef>

class ClassString
{
  public:
  	ClassString(); //default constructor
	ClassString(const ClassString& str);//copy constructor
    ClassString(const char*); //constructor from a c-string
    ~ ClassString(); //destructor
    void printmot();
	const char* c_str();
	int size();
    int length() const;
    int max_size() const;
    ClassString& resize(std::size_t, char);
    int capacity();
	void clear();
    bool empty();
    void reserve(std::size_t);
    ClassString& operator=(const char*);
	ClassString& operator=(char c);
    ClassString& operator=(const ClassString&);
    friend ClassString operator+(const ClassString& lhs,const char* rhs);
    friend ClassString operator+(const ClassString&, const ClassString&);

  protected:
  	char* p;
    int sizeString;
    int memReserved;
};

//ClassString operator+(const ClassString&, char);

#endif
