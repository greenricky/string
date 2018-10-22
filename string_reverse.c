#include "string.h"
#include "stdlib.h"
#include <string.h>
/*
input string: “Alibaba.”，
output string:“ababilA”。
*/

char *reverse_string(char *beg, char *end)
{
	char *r = beg;
	char tmp;
	if(NULL==beg || NULL==end)
		return NULL;

	while(beg < end)
	{
		tmp = *beg;
		*beg = *end;
		*end = tmp;

		beg++;
		end--;
	}

	return r;
}

/*
input sentence: “Hi buddy, welcome to Alibaba.”，
output sentence:“Alibaba. to welcome buddy, Hi”。
*/
char *reverse_sentence(char *in)
{
	char *beg=NULL, *end=NULL;
	char tmp;
	if(	NULL == in)	
		return NULL;

	beg = in;
	end = beg;

	while(end < in+strlen(in)-1)
	{
		while(' ' != *end && '\0' != *end)
			end++;

		end--;
		reverse_string(beg, end);
			
		end++;
		while(' '== *end)
			end++;

		beg = end;	
	}

	reverse_string(in, in+strlen(in)-1);

	return in;
}
