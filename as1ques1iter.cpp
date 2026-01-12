#include <iostream>
using namespace std;
void binary_search(int arr[],int l,int r,int key){
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (arr[mid]==key)
        {
            cout<<"value found"<<endl;
            return;
        }
        else if (arr[mid]<key)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        
    }
    cout<<"value not found"<<endl;
    return;
}
int main() {
    int l;
    cout<<"enter length of an array"<<endl;
    cin>>l;
    int a[l];
    cout<<"enter values of array "<<endl;
    for (int i = 0; i < l; i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"enter the value to search for"<<endl;
    cin>>key;
    binary_search(a,0,l,key);
    return 0;
}