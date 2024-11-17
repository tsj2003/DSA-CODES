
bool isPermutation(char input1[], char input2[]) {
  int arr[26] = {0};
  for (int i = 0; input1[i] != '\0'; i++){
     char ch  = input1[i];
      int idx = ch -'a';
      arr[idx ]+=1;
  }
 for (int i = 0; input2[i] != '\0'; i++){
      char ch = input2[i];
      int idx = ch -'a';
      arr[idx]-=1;
  }
   for(int i=0;i<=25;i++){
       if(arr[i]!=0){
            return 0;
       }

   }
   return true;
}  
