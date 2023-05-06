//C program to demonstrate Binary Search.
#include <stdio.h>
int bS(int[], int, int, int);
#define Max 100
main()
{
    int a[Max], key, ub, lb = 0, n;
    printf("Enter the range of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(int i;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the Key: ");
    scanf("%d",&key);
    ub = n-1 ;
    int result = bS(a , key, lb, ub);
    if(result==-1)
    {
        printf("\nkey not found");
    }else{
    printf("\nkey found at index %d ");
    }

}
int bS(int a[], int key, int lb, int ub)
{
    while(lb<=ub)
    {
         int mid = lb + (ub - lb) / 2;

        if (a[mid] == key)
            return mid;

        if (a[mid] < key)
            lb = mid + 1;

        else
            ub = mid - 1;
    }

    return -1;
}

//sboyrikku

