#include <iostream>
#include <limits>
using namespace std;
void maxmin_divide_and_conquer(int arr[], int start, int stop, int &min, int & max)
{
    if (start == stop)
    {
        min = max = arr[start];
    }
    else
    {
        int midpoint = (start + stop) / 2;

        int leftMin;
        int leftMax;
        int rightMin;
        int rightMax;

        maxmin_divide_and_conquer(arr, start, midpoint, leftMin, leftMax);
        maxmin_divide_and_conquer(arr, midpoint + 1, stop, rightMin, rightMax);

        if (leftMin < rightMin)
            min = leftMin;
        else
            min = rightMin;

        if (leftMax > rightMax)
            max = leftMax;
        else
            max = rightMax;
    }
}

int main()
{
    int arr[50],n;
	
	cout<<"Enter number of variables in array";//line 36 to 41 from q 13(internet soln assumed an array in the code itself) and rest from internet(don't fully understand arrays) 
    cin>>n;
    cout<<"Enter all values in array";
    for(int i=0; i<n; i++)
	{
        cin>>arr[i];
    }

    int min;
    int max;
    maxmin_divide_and_conquer(arr, 0, n - 1, min, max);

    cout << "Divide and Conquer recursive --- " << '\n';
    cout << "Minimum is: " << min << '\n' << "Maximum is: " << max;

    return 0;
}
