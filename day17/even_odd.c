#include<stdio.h>
int main()
{
      int n,s1=0,s2=0;
      printf("/*It will take numbers until\nyou enter a Zero*/\n\n");
      do
      {
            printf("Enter Number : ");
            scanf("%d",&n);
            if(n%2==0)
                  s1=s1+n;
            else
                  s2=s2+n;
      }while(n!=0);
      printf("\nSum of Even Numbers :  %d\n",s1);
      printf("\nSum of Odd Numbers  :  %d\n",s2);
      return 0;
}
