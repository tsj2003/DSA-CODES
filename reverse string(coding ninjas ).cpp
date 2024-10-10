  #include<cstring>
   void rev(char str[],int start,int end){
        while(start < end){
           char  temp = str[start];
            str[start]= str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }
void reverseStringWordWise(char input[]) {
    int length = strlen(input);
    rev(input,0,length -1);
    int start =0;
    for(int i =0;i <= length ;i++){
        if(input[i]==' ' || input[i]=='\0'){
            rev(input,start,i -1);
            start = i+1;
        }
    }
  
}
