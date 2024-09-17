#include <bits/stdc++.h>
int findSecondLargest(int arr[], int n)
{
   int fl = INT_MIN;
   int sl = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]> fl ){
            sl =fl ;
            fl = arr[i];
        }
        else if(arr[i]== fl){
            continue ;
        }
        else if (arr[i] > sl){
            sl = arr[i];
        }
    }
    return sl;
}
