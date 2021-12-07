#include <stdio.h>

int main()
{
    FILE *fin = fopen("73_input.txt", "rb");
    FILE *fout = fopen("73_output.txt", "w");
    fseek(fin, 0, SEEK_END);
    int coun_bytes = ftell(fin);
    fprintf(fout, "%d", coun_bytes);
    fclose(fin);
    fclose(fout);
    return 0;
}
