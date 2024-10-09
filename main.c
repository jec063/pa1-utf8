

#include <stdio.h>
#include <stdint.h>



int32_t is_ascii(char str[]){
    int i ;
    for (i = 0; str[i] != '\0' ; i++){
        if (str[i] > 127 || str[i]< 0){
            return 0;
        }
    }
    return 1; 
}

int32_t capitalize_ascii(char str[]){
    int numCap=0; 
    for (int i=0; str[i]!= '\0';i++){
        if (str[i] >= 'a' && str[i]<= 'z'){
            str[i] -= 32;
            numCap++;
        }
    }
    return numCap;


    
}



int main (){
printf("Is 🔥 ASCII? %d\n", is_ascii("🔥"));

//=== Output ===
//Is 🔥 ASCII? 0

printf("Is abcd ASCII? %d\n", is_ascii("abcd"));



int32_t ret = 0;
char str[] = "abcd";
ret = capitalize_ascii(str);
printf("Capitalized String: %s\nCharacters updated: %d\n", str, ret);

//=== Output ===
//Is abcd ASCII? 1
}




//=== Output ===
//Capitalized String: ABCD
//Characters updated: 4
