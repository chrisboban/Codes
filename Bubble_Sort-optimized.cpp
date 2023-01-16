/*
The code given below does bubble sorting. Both best and worst case complexity of the algorithm coded here is O(n2). 
Optmize the code so that the process of sorting shall be sorted once the elements are in ascending order.
*/

#include<iostream>
#include<vector>
using namespace std;
// elements a and b are passed by reference
void swap(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

void bubble_sort_optimized(int elements[],int n)
{
  int i, j,flag;
    for(i=0;i<n-1;i++)
    {
        flag = 0;
      for(j=0;j<n-i-1;j++)
      {
        if(elements[j]>elements[j+1]){
          swap(elements[j], elements[j+1]);
          flag = 1;
        }
      }
      if(flag == 0){
              break;
          }
    }	
}
int main()
{
	vector<int> elements;
	int i, j, n,e;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>e;
		elements.push_back(e);	
	}
	bubble_sort_optimized(elements.data(),n);
	for(auto it = elements.begin();it!=elements.end();it++)
		cout<<*it<<" ";
}
