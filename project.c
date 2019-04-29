#include <stdio.h>
#include <string.h>

// functions for first 5
void rCiphEncrypt(char *text1, int key);
void rCiphDecrypt(char *text1, int key);
void sCiphEncrypt(char *text1, char *textkey);
void sCiphDecrypt(char *text1, char *textkey);
void rCiphDecryptText(char *text1, int key);

int main() { 

    int choice;
    int key = 0;
    char textkey[100];
    char text1[100];
    printf("Enter text here: \n");
    scanf("%[^\n]", text1);
    printf("For encryption of a message with a rotation cipher press 1: \n");
    printf("For decryption of a message encrypted with a rotation cipher press 2 \n");
    printf("For encryption of a message with a substitution cipher press 3 \n");
    printf("For decryption of a message encrypted with a substitution cipher press 4 \n");
    printf("For decryption of a message encrypted with a rotation cipher press 5\n”);
    scanf("%d", &choice); 
        
        switch (choice)	 //reads user input and runs appropriate task
        {
            case 1:                        //1st case
                rCiphEncrypt(text1, key);
                break; 
                
            case 2:                         //2nd case 
                rCiphDecrypt(text1, key);
                break;
                
            case 3:                         //3rd case 
                sCiphEncrypt(text1, textkey);
                break;
                
            case 4:                         //4th case
                sCiphDecrypt(text1, textkey);
                break;

	case 5:		//5th case
	rCiphDecryptText(text1,  key);
	break;
                
            error:                        //if user does not enter number between 1 and 4
                printf("Input must be between 1 and 4\n");
                break;
                //end of switch case, user now enters message and appropriate function is called
        }
    return 0; 
}  
 
void rCiphEncrypt(char *text1, int key) {
    
    int i;				 //iteration through the string
    char c; 			//c is the character  
    printf("Enter a key (from 1 to 25): \n");
    scanf("%d", &key);
    
        for(i = 0; text1[i] != '\0' ; ++i) { 		//loop through the string
            c = text1[i];
            
            if (c >= 'A' && c<= 'Z'){
                c = c + key;
                
                if (c > 'Z'){
                    c = c - 'Z' +'A' - 1; 
                }
            text1[i] = c; 
            }
        }   
        printf("Encrypted message(rotation cipher): %s", text1);
}			//end of rotation cipher function
void rCiphDecrypt(char *text1, int key){  		//similar to above function minus key
    
    int i;
    char c;
    printf("please enter a key (1 to 25): \n");
    scanf("%d", &key);
    
        for(i = 0; text1[i] != '\0' ; ++i){		 //loop through the string
            c = text1[i];
                
            if (c >= 'A' && c <= 'Z'){
                c = c - key;
                    
                if (c < 'A'){
                    c = c + 26; 
                }
            text1[i] = c; 
            }
        }   
            printf("Encrypted message(rotation cipher): %s\n", text1);
}		//end of rotation cipher 


void sCiphEncrypt(char *text1, char *textkey) { 		    
    int i= 0;
    printf("Enter key: \n");
    scanf("%s", textkey);
    char c;
    
        for (i = 0; text1[i] != '\0'; i++) {
            c = text1[i];
                
                if (c >= 'A' && c <= 'Z') {
                    c = textkey[c - 'A'];
                }
            text1[i] = c;
        }
        
    printf("Decrypted message(substitution cipher) : %s\n", text1);
}


void sCiphDecrypt(char *text1, char *textkey) {
    
    int i;
    int i2 = 0;  		// second iteration 
    int c;  		//character
    printf("Enter Encrytion key:\n");
    scanf("%s", textkey);
    
        for (i = 0; text1[i] != '\0'; i++) {
            
            c = text1[i];
                
                if (c >= 'A' && c <= 'Z'){ 
                
                    for(i2 = 0; i2 < 27; i2++){
                        if(text1[i] == textkey[ix]) {
                            break;
                        }
                    }
                    text1[i] = i2 + 'A';
            }           

             }
        
        printf("Decrypted message(Substitution cypher): %s\n", text1);
    
}
void rCiphDecryptText(char *text1, int key) {
    int i;
    char c;
    int counter = 1;
        for(counter = 1; counter<= 26; counter++){
	   for(i=0; text1[i] != ‘\0’; ++i) }
		
	       c = text1[i];
		  key = 1;
			
		      if(c>= ‘A’) {
			c = c – key;

		      if (c<’A’) {
			 c = c + ‘Z’ – ‘A’ + 1;
            }
	   		text1[i] = c;
        }
				key++;
    
printf("Message is: %s\nKey is: %d\n”, text1, counter);
}
