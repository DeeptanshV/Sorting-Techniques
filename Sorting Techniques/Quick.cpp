#include <stdio.h>
void swap(int a, int b) 
{ 
  int t = a; 
  a = b; 
  b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
  int pivot = arr[high];    // pivot 
  int i = (low - 1);  // index of smaller element 
  for (int j = low; j <= high- 1; j++) 
  { 
    // if current element is smaller than the pivot 
    if (arr[j] < pivot) 
    { 
      i++;    // increment index of smaller element 
      swap(&arr[i], &arr[j]); 
    } 
  } 
  swap(&arr[i + 1], &arr[high]); 
  return (i + 1); 
} 
  
void quick_sort(int arr[], int low, int high) 
{ 
  if (low < high) 
  { 
    int pi = partition(arr, low, high); 
    quick_sort(arr, low, pi - 1);
    quick_sort(arr, pi + 1, high); 
  } 
} 
int main()
{
  int a[100], n, i;
  printf("No. of elements to sort");
  scanf("%d", &n);
  printf("\nEnter the elements:\n");
  for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
  quick_sort(a, 0, n - 1);
  printf("\nArray after sorting:");
  for(i = 0; i < n; i++)
    printf("%d ",a[i]);
  return 0;
}
