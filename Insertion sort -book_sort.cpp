/*
Create a class book with title, author name, access number, price. Modify the insertion sort in the template code to

(i) Sort books in ascending order as per access number
(ii) Use vector

*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class book{
    
    public:
        string title;
        string auth;
        int acc;   //access_num
        string price;
        void get(){
            cin>>title;
            cin>>auth;
            cin>>acc;
            cin>>price;
        }
        void disp(){
            cout<<title<<endl;
            cout<<auth<<endl;
            cout<<acc<<endl;
            cout<<price<<endl;
        }
};

int main()
{
    int i,j,n;
    book b,key;
    vector<book> elements;
    // cout<<"Enter number of elements";
    cin>>n;
    for(i=0;i<n;i++){
        b.get();
        elements.push_back(b);
    }
    cout << endl;
    
    
    for(j=1;j<n;j++)
    {
        key = elements[j];
        i = j-1;
        while((i>=0)&&(elements[i].acc>key.acc))
        {
            elements[i+1] = elements[i];
            i = i-1;
        }
        elements[i+1] = key;
    }
   for(i=0;i<n;i++)
    {
        elements[i].disp();
    }
}
