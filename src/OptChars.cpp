#include "OptChars.h"
#include <string>
#include <cstring>
#include <stdio.h>
#include <iostream>
using namespace std;



OptChars::OptChars(int argc, const char **argv)
{
	argC = argc;
	argV = (char**) argv;
	optstring = "";
	count = 1;
}

OptChars::OptChars(const OptChars &rhs)
{

    argC = rhs.argC;
	argV = rhs.argV;
    optstring = rhs.optstring;
    count = rhs.count;
}

OptChars::OptChars()
{
}


OptChars::~OptChars()
{

}

void OptChars::setOptstring(string validopt)
{
	optstring = validopt;
}


int OptChars::getopt(void)
{

	for (; count < argC; count++)
	{
		for (size_t j = 0; j < optstring.size(); j++)
		{
			if (argV[count][0] == '-' && strlen(argV[count]) == 2)
			{
			if(argV[count][1] == optstring[j])
					{
				count++;
                cout << "Found match: -" << optstring[j] << endl;
				return 1;
					}
				}
			}
		}

	return 0;
}
