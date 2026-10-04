#include <iostream>
using namespace std;

int main(){
    //maximum subarray sum
    // it means maximum sum from continous number in an array
    int n =7;
    int arr[7]={-2,-3,4,-2,-1,1,5};
    // for(int start = 0;start<7 ; start++){
    //     for(int end = start ; end < 6 ; end++ ){
    //         for (int i = start ; i<= end;i++){
    //             cout << arr[i];
    //         }
    //         cout <<" , ";
    //     }
    //     cout<<endl;
    // }
    int maxsum = INT_MAX;
    for(int st = 0 ; st<n ; st++){
       int currsum = 0;
       for(int end = st ; end<n ; end++){
            currsum += arr[end];
            maxsum = max(currsum,maxsum);
       }
    }
    cout <<"max sub array sum = "<<maxsum <<endl;
    return 0;
}