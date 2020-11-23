#include "header.h"
void compile(char *);

/* An Assembler program to compile a file into a machine code
 * if success creating a *.ob file with the memory lines (also extern and entry files)
 * author: Eldar Erel
 * version v1.0
 */
/* main method
 * getting file names parameters in the command line */
int main(int argc, char **argv) {
	if (argc==1) /* if no file were sent report error*/
	{
    		fprintf(stderr,"Error: Missing files to process\n");
    		exit(0);
	}
	while (argc>1) { /* compiling the files */
    		compile(argv[--argc]);
	}
    	return 0;
} /* end of main method */