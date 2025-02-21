#include <stdio.h>
void main(){
    char x;
    scanf("%c", &x);
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
        printf("Vowel");
    }
    else if(x=='b' || x=='c' || x=='d' || x=='f' || x=='g' || x=='h' || x=='j' || x=='k' || x=='l' || x=='m' || x=='n' || x=='p' || x=='q' || x=='r' || x=='s' || x=='t' || x=='v' || x=='w' || x=='x' || x=='y' || x=='z' || x=='B' || x=='C' || x=='D' || x=='F' || x=='G' || x=='H' || x=='J' || x=='K' || x=='L' || x=='M' || x=='N' || x=='P' || x=='Q' || x=='R' || x=='S' || x=='T' || x=='V' || x=='W' || x=='X' || x=='Y' || x=='Z'){
        printf("Consonant");
    }
    else if (x>='0' && x<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}