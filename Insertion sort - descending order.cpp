/*
The code template contains the code to arrange elements in ascending order using insertion sort. Elements are stored in an array.

(i) Change the code to arrange elements in descending order

(ii) store elements using a vector
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int key,i,j,n,m;
    vector<int> elements;
    //cout<<"Enter number of elements";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m;
        elements.push_back(m);
    }
    
    for(j=1;j<n;j++)
    {
        key = elements[j];
        i = j-1;
        while((i>=0)&&(elements[i]<key))
        {
            elements[i+1] = elements[i];
            i = i-1;
        }
        elements[i+1] = key;
    }
   for(i=0;i<n;i++)
    {
        cout<<elements[i]<<endl;
    }
}
