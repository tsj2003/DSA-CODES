void removeConsecutiveDuplicates(char input[]) {
  int i =1;
  char lastchar = input[0];
  int j = 1;
  while(input[i]!='\0'){
      char ch = input[i];
      if(lastchar == ch)
        i++;
       else{
           input[j]=ch;
           j++;
           lastchar=ch;
           i++;

        }
  }
  input[j]='\0';
 
}
