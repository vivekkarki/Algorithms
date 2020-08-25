#include<iostream>
#include<vector>
using namespace std;
template <class T>
void swap(T *a , T *b)
{
	T temp = *a;
	*a = *b;
	*b = temp;
	
}

template <class T>
void Selection_Sort(T array[] , int size)
{
	int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   
      for(j = i+1; j<size; j++){
         if(array[j] < array[imin]){
		   imin = j;
	     }
	 }
         swap(&array[i], &array[imin]);
   }
}

template <class T>
void Selection_Sort(vector<T> &array)
{
	int size = array.size();
		int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   
      for(j = i+1; j<size; j++){
         if(array[j] < array[imin]){
		   imin = j;
	     }
	 }
         swap(&array[i], &array[imin]);
   }
}

template <class T>
void print(T array[] , int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
}


template <class T>
void print(vector<T> array)
{
	int size = array.size();
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	
}


int main()
{
	int a[] = {2,0,4,5,1,6,7};
	char b[]={'s','b','d','e'};
	
	vector<int> c = {5,4,3,2,1};
	Selection_Sort<int>(c);
	print<int>(c);
	Selection_Sort<int>(a,7);
    print<int>(a,7);
    Selection_Sort<char>(b,4);
    print<char>(b,7);
}

