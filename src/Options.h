#ifndef OPTIONS_H_
#define OPTIONS_H_
#include <string>
//always remember to use this.
using namespace std;
class Options
{
protected:
	int argC,count;
	char **argV;
	string optstring;
public:
    Options();
    ~Options();
	virtual void setOptstring(string validopt) = 0;
	virtual int getopt(void) = 0;
	int numopt(void);
};

#endif /* OPTIONS_H_ */
