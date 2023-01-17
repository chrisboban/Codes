/*
One of the interpretation of insertion sort is that when we try to insert an element at position 'i', elements from position 0 to i-1 are in sorted order. 
So let's use binary search to find to find the position of insertion.

(i) Normal binary to search for an element in a sorted array is given,this code will return index of element if it is present in the array and returns -1 otherwise.
    Modify the code to return the position to insert the search element in the sorted array.
    That is for example, if the original array contains five elements 12, 3, 45, 33, 37 and 
    if we are trying to insert 33 then at that point the array will look as 3, 12, 45, 33 and 37, binary search should return index 2 (human index 3)

(ii) Binary search function given here work with an integer array, whereas a vector is used in the main function,
     use appropraite function of the container such that binary search shall be used for the process
*/


#include<iostream>
#include<vector>
using namespace std;
int binary_search_pos(int *elements, int low, int high, int s)
{
	int mid;
	mid = (low+high)/2;
	if(low == high){
		if(s>elements[low])
			return mid+1;
		return low;
	}
	if(s<elements[mid])
		return binary_search_pos(elements,low,mid,s);
	if(s>elements[mid])
		return binary_search_pos(elements,mid+1,high,s);
	return 0;
}
int main()
{

   int elements[20];
    int key,i,j,n,pos;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>elements[i];
   for(j=1;j<n;j++)
    {
		pos = binary_search_pos(elements,0,j-1,elements[j]);
		i = j-1; 
		key = elements[j];
		while(i>=pos)
		{	
			elements[i+1] = elements[i];
			i = i-1;
		}
		elements[pos]= key;
	}
	  for(i=0;i<n;i++)
    {
        cout<<elements[i]<<" ";
    }
	return 0;
}
