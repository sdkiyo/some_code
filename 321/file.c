#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "colors.h"


//#define _this_DEBUG

#ifdef _this_DEBUG
#define D2(return_value, msg){\
	if (return_value == -1)\
	{\
		fprintf(stderr, red"%s() line %d \'" msg "\' errno: %s%s", __func__, __LINE__, strerror(errno), reset_color"\n");\
		return -1;\
	}\
}
#else
#define D2(return_value, msg){}
#endif



#define D(return_value, msg) \
if (return_value == -1)\
{\
	fprintf(stderr, red"%s() line %d \'" msg "\' errno: %s%s", __func__, __LINE__, strerror(errno), reset_color"\n");\
	return -1;\
}

#define __dbgLine(return_value) \
if (return_value == -1)\
{\
	fprintf(stderr, red"%s() line %d errno: %s%s", __func__, __LINE__, strerror(errno), reset_color"\n");\
	return -1;\
}





int main(const int argc, const char* const argv[])
{
	int x = -1;__dbgLine(x);
	
	return 0;
}
