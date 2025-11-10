#include <stdio.h>
#include <string.h>

// Q1. 
//int main(){
//	char username[10],password[10];
//	printf("Enter username.");
//	scanf("%s", &username);
//	printf("Enter password.");
//	scanf("%s", &password);
//	if (strlen(password)<8){
//		printf("Password is small.");
//		return 0;
//	} 
//	
//    if((strcmpi(username,password)==0))
//	{ printf("Password cannot be the same as username");
//	return 0;
//	} 
//	
//	if (((strchr(password,'@'))||(strchr(password,'#')))){
//		printf("Valid Password");
//	}
//}


// Q2.
//int main(){
//	char firstName[10], lastName[10];
//	printf("Enter your firstname\n");
//	scanf("%s", &firstName);
//	printf("Enter your LastName\n");
//	scanf("%s", &lastName);
//	
//	//printing First Name and Last Name and VIP if Ali
//	if (strcmp(lastName,"Ali")==0){
//	printf("Hello %s %s!(VIP)\n", firstName, lastName);	
//	} else { printf("Hello %s %s!\n", firstName, lastName);
//	}  
//	
//	printf("%s", strncat(firstName,lastName,lastName[strlen(lastName)-3]));
//		
//}
	
// Q3.
//int main(){
//	char grid[3][3]={ {'C','A','T'}, {'B','U','N'}, {'F', 'I', 'G'}
//	};
//	char word[3];
//	
//	//Finding if a specific word exists
//	printf("Enter your word to search\n");
//	scanf("%s", &word);
//	
//	int i,j,found=0;
//	for(j=0;j<3;j++){
//		if(grid[0][j]==word[j]){
//		found++;	
//		} 	
//		} if (found==3){
//			printf("Word found\n");
//		} else {printf("Word not found\n");
//		}
//	
//	char check;	
//	int count=0;
//	printf("Enter a word to check its occurence\n");	
//	scanf("%c", &check);
//	for (i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			if (grid[i][j]==check){
//				count++;
//			}
//		} 
//	}	printf("The number of occurences for %s is %d", check, count); 
//	} 
//	
 	
//Q4. 

int main(){
	int grades[5][4];
    printf("Enter Values for 2D Array");
    int i,j;
	for (i=0;i<5;i++){
		for(j=0;j<4;j++){
        scanf("%d", &grades[i][j]);
		} 
	} 
	
	for (i=0;i<5;i++){
		for(j=0;j<4;j++){
		printf("%d\t", grades[i][j]);}
		printf("\n");
} }	
