// { Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

void insertionSort(int arr[], int n);



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends


/* The task is to complete insert() which is used 
   as shown below to implement insertionSort() */
   
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        int key,j;
        for(int i=1;i<n;i++)
        {
            key=arr[i];
            for(j=i-1;j>=0;j--)
            {
                if(arr[j]>key)
                arr[j+1]=arr[j];
                else break;
            }
            arr[j+1]=key;
        }
    }




