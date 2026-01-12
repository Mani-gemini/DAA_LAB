#include <iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int len1 = mid - l + 1;
    int len2 = r - mid;
    int temp1[len1];
    int temp2[len2];
    for (int i = 0; i < len1; i++)
    {
        temp1[i] = arr[l + i];
    }
    for (int i = 0; i < len2; i++)
    {
        temp2[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < len1 && j < len2)
    {
        if (temp1[i] < temp2[j])
        {
            arr[k] = temp1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = temp2[j];
            k++;
            j++;
        }
    }
    while (i < len1)
    {
        arr[k] = temp1[i];
        k++;
        i++;
    }
    while (j < len2)
    {
        arr[k] = temp2[j];
        k++;
        j++;
    }
}
void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int l;
    cout << "enter length of an array" << endl;
    cin >> l;
    int a[l];
    cout << "enter values of array " << endl;
    for (int i = 0; i < l; i++)
    {
        cin >> a[i];
    }
    merge_sort(a, 0, l - 1);
    cout << "sorted array" << endl;
    for (int i = 0; i < l; i++)
    {
        cout << a[i] << "   ";
    }
    cout << endl;
    return 0;
}
