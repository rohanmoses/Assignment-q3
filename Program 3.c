#include<stdio.h>
int print(int a, int b[], char *c[]);
void main()
{
    int a[]={20,25,20,18,30,40},b;
    char *name[]={"Rohit", "James", "Alex", "Tony", "Lewis", "Thomas"};
    printf("----UNSORTED----\n");
    b=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<b;i++)
        printf("%d\t%s\n",a[i],name[i]);
    printf("----SORTED----\n");
    for(int i=0;i<b;i++)
        for(int j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;

                char *temp1=name[i];
                name[i]=name[j];
                name[j]=temp1;
            }
        }
    print(b,a,name);
    printf("----AGE----\n");
    printf("%d is the lower age\n",a[0]);
    printf("%d is the higher age",a[b-1]);
}
int print(int a, int b[], char *c[])
{
    for(int i=0;i<a;i++)
        printf("%d\t%s\n",b[i],c[i]);
}