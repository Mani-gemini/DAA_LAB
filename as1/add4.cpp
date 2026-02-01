#include <iostream>
using namespace std;

bool isSpecial(int A[], int n, int idx, int k)
{

    for (int L = idx; L >= 0; L--)
    {
        int countGreater = 0;
        for (int i = L; i < idx; i++)
        {
            if (A[i] > A[idx])
                countGreater++;
        }
        if (countGreater == k)
        {
            return true;
        }
        for (int R = idx + 1; R < n; R++)
        {
            if (A[R] > A[idx])
            {
                countGreater++;
            }
            if (countGreater == k)
            {
                return true;
            }
            if (countGreater > k)
            {
                break;
            }
        }
    }
    return false;
}

int speciality(int arr[], int n, int k)
{
    int sp = 0;
    for (int i = 0; i < n; i++)
    {
        if (isSpecial(arr, n, i, k))
        {
            sp += arr[i];
        }
    }
    return sp;
}

int main()
{
    int l, k;
    cout << "enter length of array" << endl;
    cin >> l;
    cout << "enter value of k" << endl;
    cin >> k;
    int a[l];
    cout << "enter elements of the array" << endl;
    for (int i = 0; i < l; i++)
    {
        cin >> a[i];
    }
    int spec = speciality(a, l, k);
    cout << "speciality of the sequence is: " << spec << endl;
    return 0;
}
