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
void Bubble_Sort(T array[] , int size)
{
	
	for(int i = 0;i<size-1;i++)
	{
	  for(int j=0;j<size-i-1;j++)
	  {
	  	if(array[j]>array[j+1])
	  	  {
	  	  	swap(&array[j] , &array[j+1]);
			}
	  }
	}
}

template <class T>
void Bubble_Sort(vector<T> &array)
{
	int size = array.size();
	for(int i = 0;i<size-1;i++)
	{
	  for(int j=0;j<size-i-1;j++)
	  {
	  	if(array[j]>array[j+1])
	  	  {
	  	  	swap(&array[j] , &array[j+1]);
			}
	  }
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
	Bubble_Sort<int>(c);
	print<int>(c);
	Bubble_Sort<int>(a,4);
    print<int>(a,7);
    Bubble_Sort<char>(b,4);
    print<char>(b,7);
}

