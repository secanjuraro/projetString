#include <iostream>
#include <cstring>

class string
{
  public:
  	string();
  	~string();
  	string(const string& str);
  	void print();
  	const char* c_str();
  	int size();
  	void clear();
  	string& operator=(char c);
  	/*string operator+(const string& lhs, const char* rhs);*/
  
  protected:
  	char* chain;
  	int size_;
};
