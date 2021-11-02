#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/times.h>
#include <sys/types.h>

// #include "func.h"

char *output[] = {
		"%x %X"
};

int main(int argc, char* argv[]) {
	
	if(argc < 2) {
		fprintf(stderr, "Usage : \n");
		exit(1);
	}
	
	struct tm *tm;
	int n;
	time_t t;
	char buf[BUFSIZ];
	
	// tzset();
	time(&t);
	
	// tm = gmtime(&t); or localtime();
	// tm->tm_year
	// tm->tm_mon
	// tm->tm_mday
	
	// print ctime(&t); or asctime(tm);
	
	// strftime(buf, sizeof(buf), output[0], tm);
	// printf("%s, %s\n", output[0], buf);	
	
	char opt;
	
	while((opt = getopt(argc, argv, "ymdk")) != -1) {
		printf("opt:%c, optopt:%d\n", opt, optopt);
		switch(opt) {
			case 'y':
				printf("year : \n");
				break;
			case 'm':
				printf("month : \n");
				break;
			case 'd':
				printf("day : \n");
				break;
			case 'k':
				printf("hi");
				break;
		}
	}
	
	// (int)timezone;
	// daylight;
	// tzname[0];
	// tzname[1];
	
	return 0;
}

























