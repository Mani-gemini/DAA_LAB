#include <iostream>
using namespace std;
// this prgram is giving max length of subarray instead of sub sequence 
int good_subseq(int arr[], int n)
{
    int i = 0;
    int j = 1;
    int len = 1;
    int maxlen = 1;
    while (i < n-1)
    {
        if (abs(arr[j] - arr[i]) <= 10)
        {
            len += 1;
            i++;
            j++;
            maxlen = max(maxlen, len);
        }

        else
        {
            len = 1;
            i = j;
            j = i + 1;
        }
    }
    return maxlen;
}
int main()
{
    int l;
    cout<<"enter length of array" <<endl;
    cin>>l;
    int a[l];
    cout<<"enter elements of the array"<<endl;
    for (int i = 0; i < l; i++)
    {
        cin>>a[i];
    }
    int max_length=good_subseq(a,l);
    cout<<"maximum possible length of a good subsequence is : "<<max_length<<endl;
    return 0;
}
