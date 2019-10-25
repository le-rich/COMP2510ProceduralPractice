#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define CHECK(X) printf("%s...%s\n", (X) ? "passed" : "FAILED", #X);

size_t count_alpha(const char s[]);
int all_digits(const char s[]);
void lowercase_copy(char dest[], const char src[]);
void reverse_copy(char dest[], const char src[]);
void ltrim_copy(char dest[], const char src[]);
int is_valid_id(const char s[]);
int is_valid(const char s[]);


int main(void){

	return 0;
}

/* a */
size_t count_alpha(const char s[]){
	size_t count =0;
	size_t i;
	for (i = 0; s[i] != '\0'; ++i){
		if (isalpha(s[i]))
			count++;
	}

	return count;
}

/* b */
int all_digits(const char s[]){
	size_t i;
	for (i = 0; s[i] != '\0'; ++i){
		if (!isdigit(s[i]))
			return 0;
	}

	return 1;
}

/* c */
void lowercase_copy(char dest[], const char src[]){
	size_t i;
	for (i = 0; src[i] != '\0'; ++i){
		dest[i] = tolower(src[i]);
	}
	
	dest[i] = '\0';
}

/* d */
void reverse_copy(char dest[], const char src[]){
	size_t length = 0;
	size_t i;
	for (i = 0; src[i] != '\0'; ++i){
		length++;
	}

	for (i = 0; src[i] != '\0'; ++i){
		dest[i] = src[length - i];
	}
}

/* e */
void ltrim_copy(char dest[], const char src[]){
	size_t i = 0;
	size_t copyIndex = 0;

	while (isspace(src[i])){			/* Theres a lot of ways to do this. You could for loop and ignore isspace chars */
		i++;
	}

	while(src[i] != '\0'){
		dest[copyIndex] = src[i];
		copyIndex++;
		i++;
	}
}

/* f */
int is_valid_id(const char s[]){
	size_t i;	
	if ((s[0] == 'a' || s[0] == 'A') && strlen(s) == 9){			
		for (i = 1; s[i] != '\0'; ++i){
			if (!isdigit(s[i])){
				return 0;
			}
		}
		return 1;										/*  This is on the assumption that theres only the null character at the end. 
		         												Will return 1 if there's a null char in the middle of string  */
	}

	return 0;
}

/* g */
int is_valid(const char s[]){
	size_t length = strlen(s);
	size_t i;
	if ((length >= 2 && length <= 19) && (s[0] != '-' && s[length -1] != '-')){
		for (i = 1; s[i] != '\0'; ++i){
			if (!isalpha(s[i])){
				return 0;
			}
		}

		return 1;
	}


	return 0;
}
