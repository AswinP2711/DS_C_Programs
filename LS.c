#include<stdio.h>
void read(int a[],int *n)
{
	int i;
	printf("\nEnter number of elements : ");
	scanf("%d",n);
	for(i=0;i<*n;i++)
		scanf("%d",&a[i]);
}

void search(int a[],int *n)
{
	int e,i;
	printf("\nEnter element to search : ");
	scanf("%d",&e);
	for(i=0;i<*n;i++)
		if(a[i]==e)
		{
			printf("\nThe element %d found at %d location",e,i+1);
			return;
		}
		printf("\nThe element %d is not present in the array",e);
}

void display(int a[],int *n)
{
	int i;
	printf("\nthe elements are:");
	for(i=0;i<*n;i++)
		printf("%d",a[i]);	
}

int main()
{
	int arr[10],n=0;
	int ch,e=1;
	printf("\n____________________________MENU____________________________\n");
	while(e)
	{
		printf("\n1.Read\n2.search\n3.Display\n4.Exit\n");
		printf("\nEnter your choice :\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:read(arr,&n);
			break;
			case 2:search(arr,&n);
			break;
			case 3:display(arr,&n);
			break;
			case 4:e=0;
			printf("\nexiting from program thera ra raaaaaa..........")
				
		}	
	}
	
}
