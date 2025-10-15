// VL Arrays Notes
#include <iostream>
using namespace std;

int nums[] = {5, 24, 1, 0, 66, 47, 3};

int main(){
    int length = size(nums);
    for(int j=0; j < length; j++){
        for(int i=1; i< (length); i++){
            // cout << nums[i]<< endl;
            if(nums[i] < nums[i-1]){
                int swap = nums[i];
                nums[i] = nums[i-1];
                nums[i-1] = swap;
            }
        }
    }

    for(int i=0; i< length; i++){
        cout << nums[i] << ", ";
    }
    return 0;
}