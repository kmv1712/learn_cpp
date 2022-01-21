#include <stdio.h>
#include <stdlib.h>

/*
MMCDLXXIX
I 1
V 5
X 10
L 50
C 100
D 500
M 1000

IV 4
IX 9
XL 40
XC 90
CD 400
CM 900
*/
int roman2int(char str[20])
{
    int r;
    for( int i = 0; str[i] != 0; i++ )
    {
        if ( str[i] == 'I' )
        {
            if( str[i+1] != 0 )
            {
                if( str[i+1] == 'V' )
                {
                    i++;
                    r += 4;
                }
                else if(str[i+1] == 'X')
                {
                    i++;
                    r += 9;
                }
                else
                    r += 1;
            }
            else
                r += 1;
        }
        else if( str[i] == 'V' )
            r += 5;
        else if( str[i] == 'X' )
        {
            if( str[i+1] != 0 )
            {
                if( str[i+1] == 'L' )
                {
                    i++;
                    r += 40;
                }
                else if(str[i+1] == 'C')
                {
                    i++;
                    r += 90;
                }
                else
                    r += 10;
            }
            else
                r += 10;
        }
        else if( str[i] == 'L')
            r += 50;
        else if( str[i] == 'C')
        {
            if( str[i+1] != 0)
            {
                if( str[i+1] == 'D' )
                    {
                        i++;
                        r += 400;
                    }
                    else if(str[i+1] == 'M')
                    {
                        i++;
                        r += 900;
                    }
                    else
                        r += 100;
            }
            else
                r += 100;
        }
        else if( str[i] == 'D' )
            r += 500;
        else if( str[i] == 'M' )
            r += 1000;
    }
    return r;
}

int main()
{
    char s[20];
    scanf("%s", &s);
    printf("%d\n", roman2int(s));
    return 0;
}
