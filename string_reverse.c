/*
input string: “Hi buddy, welcome to Alibaba.”，
output string:“Alibaba. to welcome buddy, Hi”。
*/

char *reverse_string(char *beg, char *end)
{
	char *r = beg;
	char tmp;
	if(NULL==beg || NULL=end)
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

char *reverse_sentence(char *in)
{
	char *beg=NULL, *end=NULL;
	char tmp;
	if(	NULL == in)	
		return NULL;

	beg = in;
	end = beg;

	while(' ' != *end++);
	if('\n' != *end)
	{
		end--;
		reverse_string(beg, end);
		
		beg = end;
		beg++;
		end = beg;
	}
	else
	{

	}

	while
	
	
}
