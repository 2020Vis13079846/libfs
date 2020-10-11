#include <stdio.h>

int mkdir(char *name) { }

int mkfile(char *name) 
{ 
    FILE *fp;
    fp  = fopen (name, "r");
    fclose (fp);
}
