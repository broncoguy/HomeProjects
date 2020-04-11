#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char text);
int main()
{
char str [999];
printf("Enter String to translate: ");
scanf("%s", str);
int strlength = strlen(str);
int i;
char* MorseCodeSize = malloc(1000);
strcpy(MorseCodeSize,"");
printf("translated message:\n");
for(i = 0; i < strlength; i++){
   printf("%s", convert(str[i]));
}
   return(0);
}

char* convert(char text)
{

  char *letter = malloc(1000);
    if(text == 'A' || text == 'a'){
        strcpy(letter, ".-");

    }
    else if(text == 'B' || text == 'b'){
        strcpy(letter, "-...");

    }
    else if(text == 'C'|| text == 'c'){
        strcpy(letter, "-.-.");

    }
    else if(text == 'D'|| text == 'd'){
        strcpy(letter, "-..");

    }
    else if(text == 'E'|| text == 'e'){
        strcpy(letter, ".");

    }
    else if(text == 'F'|| text == 'f'){
        strcpy(letter, "..-.");

    }
    else if(text == 'G'|| text == 'g'){
        strcpy(letter, "--.");

    }
    else if(text == 'H'|| text == 'h'){
        strcpy(letter, "....");

    }
    else if(text == 'I'|| text == 'i'){
        strcpy(letter, "..");

    }
    else if(text == 'J'|| text == 'j'){
        strcpy(letter, ".---");

    }
    else if(text == 'K'|| text == 'k'){
        strcpy(letter, "-.-");

    }
    else if(text == 'L'|| text == 'l'){
        strcpy(letter, ".-..");

    }
    else if(text == 'M'|| text == 'm'){
        strcpy(letter, "--");

    }
    else if(text == 'N'|| text == 'n'){
        strcpy(letter, "-.");

    }
    else if(text == 'O'|| text == 'o'){
        strcpy(letter, "---");

    }
    else if(text == 'P'|| text == 'p'){
        strcpy(letter, ".--.");

    }
    else if(text == 'Q'|| text == 'q'){
        strcpy(letter, "--.-");

    }
    else if(text == 'R'|| text == 'r'){
        strcpy(letter, ".-.");

    }
    else if(text == 'S'|| text == 's'){
        strcpy(letter, "...");

    }
    else if(text == 'T'|| text == 't'){
        strcpy(letter, "-");

    }
    else if(text == 'U'|| text == 'u'){
        strcpy(letter, "..-");

    }
    else if(text == 'V'|| text == 'v'){
        strcpy(letter, "...-");

    }
    else if(text == 'W'|| text == 'w'){
        strcpy(letter, ".--");

    }
    else if(text == 'X'|| text == 'b'){
        strcpy(letter, "-..-");

    }
    else if(text == 'Y'|| text == 'y'){
        strcpy(letter, "-.--");

    }
    else if(text == 'Z'|| text == 'z'){
        strcpy(letter, "--..");

    }
    else if(text == '1'){
        strcpy(letter, ".----");

    }
    else if(text == '2'){
        strcpy(letter, "..---");

    }
    else if(text == '3'){
        strcpy(letter, "...--");

    }
    else if(text == '4'){
        strcpy(letter, "....-");

    }
    else if(text == '5'){
        strcpy(letter, ".....");

    }
    else if(text == '6'){
        strcpy(letter, "-....");

    }
    else if(text == '7'){
        strcpy(letter, "--...");

    }
    else if(text == '8'){
        strcpy(letter, "---..");

    }
    else if(text == '9'){
        strcpy(letter, "----.");

    }
    else if(text == '0'){
        strcpy(letter, "-----");

    }
    else if(text == '.'){
        strcpy(letter, ".-.-.-");

    }
    else if(text == ','){
        strcpy(letter, "--..--");

    }
    else if(text == '?'){
        strcpy(letter, "..--..");

    }
    else{
        strcpy(letter, " ");

    }
    return letter;
}
