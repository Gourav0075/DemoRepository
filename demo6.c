#include<stdio.h>
#include<stdlib.h>

#define SIZE 6
#define true 1
#define false 0
#define swap(a,b) {int t=a;a=b;b=t;}
void display_array(int arr[]);

void Bubble_sort(int arr[]);


void Selection_Sort(int arr[]);

int main()
{
    int arr[SIZE]={30,20,60,50,10,40};
    printf("before swapping: \n");
    display_array(arr);
   

   // Selection_Sort(arr);
    Bubble_sort(arr);
    printf("after swapping: \n");
    display_array(arr);

    return 0;
}

void display_array(int arr[])
{
    int i;
    printf("Array elements are: ");
    for(i=0;i<6;i++)
    {
        printf("%4d",arr[i]);
       
    }
    printf("\n");
   
    
}
void Bubble_sort(int arr[])
{
    int first=0;
   // int second;
    int iterate;

    for(iterate=0;iterate<SIZE-1;iterate++)
    {
        for(first=0;first<SIZE-iterate-1;first++)   // 0;0<6-0-1//0;0<5 //true  
        {
            if(arr[first]>arr[first +1])
            {
                swap(arr[first],arr[first+1]);
            }
        }
    }

}


void Selection_Sort(int arr[])
{

    int first=0;
    int second;

    for(first=0;first<SIZE-1;first++)
    {
        for(second=first+1;second<SIZE;second++)
        {
            if(arr[first]>arr[second])
            {
                swap(arr[first],arr[second]);
            }
        }
    }
}
/*
int main()
{
    int a[20],i,x,n;
    printf("How many elements?");
    scanf("%d",&n);
     
    printf("Enter array elements:\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
     
    printf("\nEnter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
    {
        if(a[i]==x)
            break;
    }
     
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
    return 0;
}
*/
/*
int main()
{
    int n;
    int i;
    int *ptr=NULL;

    printf("Enter the element for a array: ");
    scanf("%d",&n);

    ptr=(int *)calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("\nthe memory is not allocated");

    }
    else{
        printf("memory allocated successfully \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("\n after enterning the array element\n ");

    for(i=0;i<n;i++)
    {
        printf("Ptr[%d]=%d at location of &%u",i,ptr[i],&ptr[i]);
        printf("\n");
    }

    }

    free(ptr);
    ptr=NULL;
    return 0;
}*/