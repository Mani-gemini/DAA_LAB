#include <iostream>
using namespace std;
void binary_search(int arr[],int l,int r,int key){
    if (l>r)
    {
        cout<<"value not found"<<endl;
        return;
    }
    
    int mid=(l+r)/2;
    if (arr[mid]==key)  
    {
        cout<<"value found"<<endl;
        return;
    }
    else if (arr[mid]<key)
    {
        binary_search(arr,mid+1,r,key);
    }
    else
    {
        binary_search(arr,l,mid-1,key);
    }
    
    
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
