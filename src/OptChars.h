#ifndef OPTCHARS_H
#define OPTCHARS_H
#include "Options.h"

class OptChars : public Options
{
public:
    OptChars();
    OptChars(int argc, const char **argv);
    OptChars(const OptChars &rhs);
    ~OptChars();
    void setOptstring(string validopt);
	int getopt(void);
};

#endif // OPTCHARS_H
