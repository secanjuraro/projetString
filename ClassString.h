#ifndef CLASSSTRING
#define CLASSSTRING

class ClassString
{
  public:
  	ClassString();
    ClassString(const char*);
  	void printmot();
    //int capacity();
    ~ ClassString();

  protected:
  	char* p;
    int sizeString;
    int memReserved;
};


#endif
