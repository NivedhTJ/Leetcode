int lengthOfLastWord(char* s) {
    int length = strlen(s);
    int count = 0;

    while (length > 0 && isspace(s[length - 1])) {
        length--;
    }
    
    while(length > 0 && !isspace(s[length-1])){
        length--;
        count++;
    }
    return count;
}