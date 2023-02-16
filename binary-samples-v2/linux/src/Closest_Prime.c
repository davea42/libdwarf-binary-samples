#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j=1,s=0,x,y,q=0,w=0;
    printf("Enter The Number...:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
            s++;
        }
      if(s==2)
            printf("Closest prime to %d is %d",a,a);
      else
      {
      while(w<2&&q<2)
      {
        w=0;
      q=0;
          x=a+j;
      y=a-j;
      j++;
         for(i=1;i<=x;i++)
          {
          if(x%i==0)
            q++;
          }
          for(i=1;i<=y;i++)
          {
          if(y%i==0)
            w++;
          }
      }
          if(w==2&&q==2)
            printf("%d and %d is closest prime to %d",y,x,a);
          else if(q==2)
            printf("%d is the closest prime to %d",x,a);
          else if(w==2)
            printf("%d is the closest prime to %d",y,a);

      }
    return 0;
    }

