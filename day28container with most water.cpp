
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() -1;
    int maxwater= 0;
    
    while(left<right){
        int width = right - left;
        int h = min(height[left],height[right]);
        int area = width*h;
        
        maxwater = max(maxwater,area);

        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
        return maxwater;
    }

}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int ans = maxArea(height);

    cout << "Maximum water area: " << ans << endl;

    return 0;
}

