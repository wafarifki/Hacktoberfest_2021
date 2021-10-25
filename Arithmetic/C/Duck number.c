# include <stdio.h>
# include <stdlib.h>


int main()
{
    int dno,dkno,r,flg;
	flg=0;
 printf("\n\n Check whether a number is a Duck Number or not: \n");
 printf(" ----------------------------------------------------\n");
 printf(" Input a number: ");
 scanf("%d",&dkno);
 dno=dkno;
    while(dkno>0)
        {
            if(dkno % 10 == 0)
            {
            flg=1;
            break;
            }
			dkno/=10;
        }
            if(dno>0 && flg==1)
            {
             printf(" The given number is a Duck Number.\n");
            }
            else
            {
             printf(" The given number is not a Duck Number.\n");
            }
}

