#include "copyfile.h"
int main(int argc, char * argv[]){
    FILE *fin, *fout;
    char c;
    if (argc!=3){
        printf("Usage: %s filein fileout\n", argv[0]);
        exit(0);
    }
    if ((fin=fopen(argv[1],"r"))==NULL){
        perror("fopen filein");
        exit(0);
    }
    if ((fout=fopen(argv[2],"w"))==NULL){
        perror("fopen fileout");
        exit(0);
    }
    while ((c=getc(fin))!=EOF)
        putc(c,fout);
    fclose(fin);
    fclose(fout);
    return 0;
}
