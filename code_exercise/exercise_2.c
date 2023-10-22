//FILE OPERATIONS 
/*
fopen --- open file
fclose ---close file
fread ---read from file
fwrite ---wrtite to file
syntax: FILE*filepointer=fopen("filename","mode");
ıf we dont close file it maybe cannot open
*/
#include <stdio.h>
 int main()
 {
    FILE*outfile,*infile;
    int b =5,f;
    float a =13.72,c=6.68,e,g;
    fopen("testdate","w");
    fprintf(outfile,"%f %d %f",a,b,c);
    fclose(outfile);
    infile=fopen("testdate","r");
    fscanf(infile," %f %d %f ",e,f,g);
    printf(" %f %d %f\n",a,b,c);
    printf(" %f %d %f\n",e,f,g);
 }