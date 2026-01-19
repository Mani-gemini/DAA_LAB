#include <iostream>
using namespace std;
int largest_sum_subarr(int a[],int n){
    int mxsum=INT32_MIN;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        if (sum<0)
        {
            sum=0;
        }
        if (sum>mxsum)
        {
            mxsum=sum;
        }    
    }
    return mxsum;
}
int main() {
    int len;
    cout<<"enter length of array"<<endl;
    cin>>len;
    int arr[len];
    cout<<"enter elements of array"<<endl;
    for (int i = 0; i < len; i++)
    {
        cin>>arr[i];
    }
    //int arr2[8]={-2,-5,6,-2,-3,1,5,-6};
    int sum=largest_sum_subarr(arr,len);
    cout<<"largest sum of subarray: "<<sum<<endl;
    return 0;
}