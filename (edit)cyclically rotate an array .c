#include<stdio.h>
#include<conio.h>

void main()
{
    int a[1000];
    int i,j,n,k,temp;
    printf("enter the size of array");
    scanf("%d",&n);

    printf("enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" enter for rotate :");
    scanf("%d",&k);

      for(j=1;j<=k;j++)
      {
        temp=a[n-1];
        for(i=n-1;i>=1;i--)
        {
            a[i]=a[i-1];
        }
        a[i]=temp;
       }

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
