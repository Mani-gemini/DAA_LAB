#include<iostream>
#include<climits>
using namespace std;
int maxCross(int arr[], int l, int m, int h) {
    int sum = 0, left = INT_MIN;
    for (int i = m; i >= l; i--) {
        sum += arr[i];
        left = max(left, sum);
    }
    sum = 0;
    int right = INT_MIN;
    for (int i = m + 1; i <= h; i++) {
        sum += arr[i];
        right = max(right, sum);
    }
    return left + right;
}

int maxSub(int arr[], int l, int h) {
    if (l == h) return arr[l];
    int m = (l + h) / 2;
    return max(
        max(maxSub(arr, l, m), maxSub(arr, m + 1, h)),
        maxCross(arr, l, m, h)
    );
}

int main() {
    int arr[] = {2, -4, 3, -1, 2, -4, 3};
    cout << maxSub(arr, 0, 6) << endl;
    return 0;
}
