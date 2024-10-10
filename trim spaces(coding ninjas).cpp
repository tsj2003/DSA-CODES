void trimSpaces(char input[]) {
    int ptr1= 0;
    int ptr2= 0;

    while(input[ptr1] !='\0'){
        if(input[ptr1]==' '){
                   ptr2 = ptr1;
        while(input[ptr2] !='\0'){
            
            if(input[ptr2]!=' '){
                swap(input[ptr1],input[ptr2]);
                break;
            }
            ptr2 ++;

        }

        }
        ptr1++;

       
    }
}
