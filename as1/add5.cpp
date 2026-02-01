#include <iostream>
using namespace std;
int find_side(int num, int height, int width)
{
    int side;
    int min_side = INT8_MAX;
    for (int i = 1; i <= num; i++)
    {
        side = width * i;
        int num_row = (num + i - 1) / i;
        if ((width * i) > height * (num_row))
        {
            side = width * i;
        }
        else
        {
            side = height * (num_row);
        }
        if (side < min_side)
        {
            min_side = side;
        }
    }
    return min_side;
}
int main()
{
    int n, h, w;
    cout << "enter number of rectangles: " << endl;
    cin >> n;
    cout << "enter height of rectangle: " << endl;
    cin >> h;
    cout << "enter width of rectangles: " << endl;
    cin >> w;
    int s = find_side(n, h, w);
    cout << "side of square = " << s << endl;
    return 0;
}
