#include <stdio.h>
#define max 100
int search(int arr[], int N, int key)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == key)
			return i;
	return -1;
}

int main(void)
{
	int arr[max] ,n;
	printf("enter the array limit: ");
	scanf("%d",&n);
	printf("enter the elements of array: ");
	for(int i =0;i<n;i++)
    {
	scanf("%d",&arr[i]);
    }
	int key;
	printf("enter the key value: ");
	scanf("%d",&key);
	int N = sizeof(arr) / sizeof(arr[0]);

	int result = search(arr, N, key);
    if(result==-1)
    {
        printf("key not found");
    }else{
    printf("key is found at index %d");
    }

	return 0;
}
