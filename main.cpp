#include<stdio.h>

int main() 
{
    int n, i, a[10000], max, min;
    printf("So luong xe oto la: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
        }
        max=a[1];
        for(i=1; i<=n; i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        printf("\nIn ra gia xe oto cao nhat: %d", max);
        min=a[1];
        for(i=1; i<=n; i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        printf("\nIn ra gia xe oto thap nhat: %d", min);
}