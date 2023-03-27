#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "strings.h"

int main(int argc, char* argv[]) {
	for (int o = 0; o < argc; ++o) {
		if (strcmp(argv[o], "-h") == 0) {
			printf("%s%s", HELP, "\n");
			return 0;
		} else if (strcmp(argv[o], "-i") == 0) {
			FILE* mkfile;
			mkfile = fopen("Makefile", "w");
			fprintf(mkfile, "%d", 5);
			fclose(mkfile);

			return 0;
		}
	}
	return 0;
}
