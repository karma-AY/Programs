#include <iostream>
using namespace std;

int trap(int height[], int n) {
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                water += leftMax - height[left];
            left++;
        } else {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                water += rightMax - height[right];
            right--;
        }
    }
    return water;
}

int main() {
    int n;
    cout << "Enter the number of bars: ";
    cin >> n;
    int height[n];
    cout << "Enter height of bar respectively: ";
    for(int i=0; i<n; i++)
    {
        cin >> height[i];
    }
    cout << "Water trapped: " << trap(height, n) << endl;
    return 0;
}
