void sortZeroesAndOne(int input[], int size)
{
    int left = 0,right = size-1;
    while(left<right){
        if(input[left]==0){
            left++;   
        }
        else if(input[right]==1){
            right--;
        }else{
            swap(input[left],input[right]);
            left++;
            right--;
        }
        

    }
    
}
