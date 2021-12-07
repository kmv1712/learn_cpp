#include <stdio.h>

int main()
{
    int i;
    char c;
    FILE *fin = fopen("72_input.txt", "r");
    FILE *fout = fopen("72_output.txt", "r");
    fscanf(fin,"%d", &i);
    fseek(fin, i, SEEK_SET);
    c = getc(fin);
    fprintf(fout, "%c\n", c);
    fclose(fin);
    fclose(fout);
    return 0;
}
