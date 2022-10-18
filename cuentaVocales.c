#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int isVowel(char c){
    c = toupper(c);

    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        return 1;
    }
    return 0;
}

int main(){
    char c;
    int vowels;
    int countOfVowels = 0;
    int n = 0;
    do{
        n = read(STDIN_FILENO, &c, 1);
        vowels = isVowel(c);
        countOfVowels += vowels;
    } while(n != 0);
    printf("El total de vocales es %d\n", countOfVowels);
    return 0;
}