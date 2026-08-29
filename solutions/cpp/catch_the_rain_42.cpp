#include <bits/stdc++.h>
using namespace std;

class Solution_01{
public:
    int trap(vector<int>& height) {
        int total = 0;
        int maxHeight = *max_element(height.begin(),height.end());
        int length = height.size();
        for(int i = 1; i <= maxHeight; i++){
            int j = 0;
            while(j < length && height[j] - i < 0){
                j++;
            }
            int k = length - 1;
            while(k >= 0 && height[k] - i < 0){
                k--;
            }
            for(int p = j; p < k; p++){
                if(height[p] - i < 0) total++;
            }
        }

        return total;
    }
};

class Solution_02 {
public:
    int trap(vector<int>& height) {
        int total = 0;
        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;

        while(left < right){


            if(height[left] < height[right]){
                if(leftMax < height[left]) leftMax = height[left];
                else total += leftMax -  height[left];
                left++;
            }else{
                if(rightMax < height[right]) rightMax = height[right];
                else total += rightMax - height[right];
                right--;
            }
        }

        return total;
    }
};