bool checkPalindrome(char str[]) {
   int ind1=0;
    int ind2 = 0;
    while(str[ind2]!='\0'){
        ind2++;
    }
    ind2--;

    while (ind1 < ind2) {
        if (str[ind1] != str[ind2]) {
          return false;
        }
        ind1++;
        ind2--;
    }
    return true;
}
