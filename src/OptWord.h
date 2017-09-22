#ifndef OPTWORD_H
#define OPTWORD_H
#include "Options.h"

class OptWord : public Options
{
public:
    OptWord();
    OptWord(int argc, const char **argv);
    OptWord(const OptWord &rhs);
    ~OptWord();
	int getopt(void);

};

#endif // OPTWORD_H
