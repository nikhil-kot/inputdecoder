#include <stdio.h> 
#include <stdlib.h> // For exit()   
#include <string.h>
#include <ctype.h>
int main( int argc, char **argv) 
{ 
	
    FILE *fptr; 	
	 int logic;
    char filename[100], c[100]; 
 	 char str[100];
	 int count7;
	 char first;
	 int last_pos;
	 char *str_op;
	 int length;
	 int valid_int = 0;
	 int valid_flag = 0;
	 char last;
	 //char *str_op = str + 1;
	 //first = str[0];
	 //filename = 'stdin';
	 //last_pos = strlen(str)-1
    //printf("Enter the filename: \n"); 
    //scanf("%s", filename); 
	 
    // Open file 
    if (argc > 1){
	 	fptr = fopen(argv[1], "r");
	 }
	 else{
		fptr = fopen("stdin", "r");
	 }
    if (fptr == NULL) 
    { 
        printf("Cannot open file or file does not exist \n"); 
        exit(0); 
    }  
    // Read contents from file 	
	
    while (fgets(c,100,fptr) != NULL) 
    { 
        //str = c;
		  printf ("%s", c); 
			logic = 0;
		  	first = c[0];
		//*str_op = c + 1;
		length = strlen(c)-1;
		//printf("%d \n", length);
		last_pos = strlen(c)-1;
		last = c[(strlen(c)-2)];
		//printf("last char is: %c \n", last);
	 	//if (c[0] == 'Q' || c[0] == 'M' || c[0] == 'P' || c[0] == 'E'){
			//printf("GOOD %c \n", first);
			//}
			
			//else if (!(c[0] == 'Q')){
			//printf("FAILX %c \n", first );
			//break;
			//}

		if (isdigit(first)){
			printf("FAIL \n");
		}
		else if (first == 'a' || first == 'b' || first == 'c'|| first == 'd'|| first == 'e'|| first == 'f'|| first == 'g'|| first == 'h'|| first == 'i'|| first == 'j'|| first == 'k'|| first == 'l'|| first == 'm'|| first == 'n'|| first == 'o'|| first == 'p'|| first == 'q'|| first == 'r'|| first == 's'|| first == 't'|| first == 'u'|| first == 'v'|| first == 'w'|| first == 'x'|| first == 'y'|| first == 'z'|| first == 'A'|| first == 'B'|| first == 'C'|| first == 'D'|| first == 'F'|| first == 'G'|| first == 'H'|| first == 'I'|| first == 'J'|| first == 'K'|| first == 'L'|| first == 'N'|| first == 'O'|| first == 'R'|| first == 'S'|| first == 'T'|| first == 'U'|| first == 'V'|| first == 'W'|| first == 'X'|| first == 'Y'|| first == 'Z'){
			printf("FAIL \n");
		}	 	
		else if (first == 'Q'){
		//printf("new string is %s \n", str_op);
		count7=0;
		logic = 1;
		for (int i = 1; i < strlen(c)-1; i++) {
			if (c[i] == '6' || c[i] == '7'){
				//printf("valid \n");
					}
			else{
				count7=0;
				break;
				}
			if (c[i] == '7'){
				count7++;
				}
				}
				//printf("%d \n", count7);
				if (count7 % 2 == 0){
					printf("FAIL \n");
				}
				else{
					logic = 1;
					printf("OK \n");
					}
			}	  	
		else if (first  == 'P' && length  == 1){
		logic = 2;
		printf("OK \n");
		}	

		else if (first  == 'P' && last == 'C'){
		//printf("new string is %s \n", str_eep);
		logic = 3;
		valid_int = 1;
		for (int i = 1; i < strlen(c)-1; i+=2) {
			for (int j=2 ; j < strlen(c)-1 ; j+=2){
				if (*(c+i) != 'B' && *(c+j) != 'C'){
					valid_int = 0;
			  		}
			  	}
			}	
	
				
		
		
		if (valid_int == 1){	
			printf("OK \n");
		
		}
		else {
			printf("FAIL \n");
			
			}
		}
		else if (first  == 'P' && last != 'C'){
			printf("FAIL \n");

			}

		else if (first == 'E' && last == 'F'){
		//printf("foo \n");
		//char *str_foo = str + 1;
		//printf("new string is %s \n", str_foo);
		
	//(int i = 1; i< last_pos *str_foo != '\0'; str_foo++)	
	logic = 4;
	valid_flag = 1; 
	for (int i = 1; i < strlen(c)-2; i++) {
		//printf("char is %c \n", *str_foo);
		if (c[i] == '0' || c[i] == '1' || c[i] == '2'){
			//printf("valid \n");
			valid_flag = 1;
			//printf("%d \n", valid_flag);
			}
		else{
			//printf("invalid \n");
			valid_flag = 0;
			//printf("%d \n", valid_flag);
			break;
			
			}
		
		}
		if (valid_flag == 1){
			printf("OK \n");		
			
			}
		else if (valid_flag == 0){
			printf("FAIL \n");
			
			}
	}

		else if (first == 'M' && isdigit(c[1]) && isdigit(c[2])){
			//printf("valid \n");
			logic = 5;
			valid_flag = 0;
			if (c[3] == 'E' && last == 'F'){
				//printf("foo \n");
				//printf("new string is %s \n", str_foo);
			 	for (int i = 4; i < strlen(c)-2; i++){
					if (c[i] == '0' || c[i] == '1' || c[i] == '2'){
						//printf("valid \n");
						valid_flag = 1;
						//printf("%d \n", valid_flag);
						}
					else {
						valid_flag = 0;
						break;
						}
					}
			 	if (valid_flag == 1){
					printf("OK \n");
			
					}			
				else{
					printf("FAIL \n");	
					}		
			 }
			else if (c[3] == 'P' && last == 'C'){
				valid_flag = 1;
				for (int i = 4; i < strlen(c)-1; i++){
					for (int j=5 ; j < strlen(c)-1 ; j+=2){
						if (*(c+i) != 'B' && *(c+j) != 'C'){
						valid_flag = 0;
						}
					}				
				}
				if (valid_flag == 1){
					printf("OK \n");
					
					}
				else{
					printf("FAIL \n");
					}
			}
			else if (c[3] == 'P' && last == 'P'){
				printf("OK \n");
				}	
			else if (c[3]  == 'P' && last != 'C'){
				printf("FAIL \n");
			}
			else{
				printf("FAIL \n");
				}
		
			}
		//else if(logic == 0)  {
			//printf("%d \n",logic);
			//printf("invalid \n");
			//}	
	
}//end of while
	  
  
    fclose(fptr); 
    return 0; 
}

