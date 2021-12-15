// Прорамма развернет в обратном порядке все байты в файле 75_input.dat и запишет из в 75_output.dat
#include <stdio.h>

int main()
{
    FILE *fin = fopen("75_input.dat", "rb");
    FILE *fout = fopen("75_output.dat", "wb");

    fseek(fin, 0, SEEK_END);
    int coun_bytes = ftell(fin);

    while( coun_bytes > 0 )
    {
        coun_bytes--;
        fseek(fin, coun_bytes, SEEK_SET);
        char c = getc(fin);
        fputc(c, fout);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}
