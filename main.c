#include "string.h"
#include "stdio.h"


int main(int argc, char *argv[])
{
	char sz[] = "Hi buddy, welcome to Alibaba";
	printf("%s\n", sz);
	char *r = reverse_sentence(sz);
	printf("%s\n", r);

	return 0;
}
