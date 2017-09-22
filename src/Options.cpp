#include "Options.h"
#include <string>
#include <cstring>
#include <stdio.h>
#include <iostream>
using namespace std;

Options::Options()
{
	/*
    argC = 0;
    argV = NULL;
    */
    optstring = "";
    count = 1;
}

Options::~Options()
{

}

void Options::setOptstring(string validopt)
{
	optstring = validopt;
}

int Options::numopt(void)
{
	count = 0;
	int number = 0;
	while (getopt() != 0) {
        number++;
    }

		return number;
	}
