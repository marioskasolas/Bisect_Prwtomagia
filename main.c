#include <stdio.h>

int main()
{
    int year , last ;
    int a;
    int b;
    int c;
    int d;
    int z;
    int f;

    printf("Give the first year you want to calculate and the last :\n");
    scanf("%d\n%d",&year,&last);
    printf("year %d , last year %d\n", year, last);
    int i;
    for(i = year; i <= last ; i = i + 1) {
        a = i % 19;
        /*printf("a = %d\n",a);*/
        b = i % 4;
        /* printf("b = %d\n",b);*/
        c = i % 7;
        /*printf("c =%d\n",c);*/
        d = (19 * a + 16) % 30;
        /*printf("d =%d\n",d);*/
        z = (2 * b + 4 * c + 6 * d) % 7;

        /* bicepts years are those that can can be divided exactly with 4 and not exactly with 400 */

        int t1, t2;
        if (i % 4 == 0) {
            t1 = 1;
        }
        else if(i % 4 != 0)
        {
            t1 = 0;
        }

        if (i % 100 != 0)
        {
            t2 = 1;
        }
        else if(i % 100 == 0 )
        {
            t2 = 0;
        }

        if (t1 == 1 && t2 == 1)
        {
            f = 1;
        }
        else if(t1 == 0 || t2 == 0)
        {
            f = 0;
        }


        if (f == 1)
        {
            printf("%d is a Bisect Year\n",i);
        }
        else if(f == 0) printf("%d is not a Bisect year\n");

        int date;
        date = d + z + f + 13;
        printf("The date will be : %d",date);

    }
}
