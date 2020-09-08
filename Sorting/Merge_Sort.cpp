/* C program for Merge Sort */
#include <iostream>  
using namespace std;
template<class T>
void Merge(T array[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 

    T L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = array[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = array[m + 1 + j]; 
  

    i = 0;  
    j = 0;  
    k = l;  
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            array[k] = L[i]; 
            i++; 
        } 
        else { 
            array[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        array[k] = L[i]; 
        i++; 
        k++; 
    } 
  
      while (j < n2) { 
        array[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
template<class T>
void Merge_Sort(T array[], int l, int r) 
{ 
    if (l < r) { 
        int m = l + (r - l) / 2; 
        Merge_Sort(array, l, m); 
        Merge_Sort(array, m + 1, r); 
  
        Merge(array, l, m, r); 
    } 
} 
  
template<class T>
void print(T A[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout<< A[i]<<" "; 
} 

int main() 
{ 
   int arr[] = {2,0,4,5,6,7}; 
    
    Merge_Sort(arr, 0, 5); 
  
    printf("\nSorted array is \n"); 
    print(arr, 6); 
    return 0; 
} 
