#include <stdio.h>

int main()
{

    FILE *fin = fopen( "74_input.dat", "rb" );
    FILE *fout = fopen( "74_output.txt", "w" );
    int arr[256] = {};

    while(!feof(fin))
    {
        arr[getc( fin )]++;
    }

    int max = 0;
    int i = 0;
    for ( i = 1; i < 256; ++i)
        if ( arr[max] < arr[i] )
            max = i;

    fprintf(fout, "%d\n", max);

    fclose(fin);
    fclose(fout);
}
