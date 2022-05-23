#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>
#include <stdlib.h>

/*declaring functions */
void scan_word(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

int i;
*ptr1, *ptr2;

int main(void) {

    /*declaring array, initializing to 0 | assigning a pointer to an array*/
    int occurrences1[26] = {0};
	int occurrences2[26] = {0};


	/*asking user words, and scanning the words */
    printf("Enter the first word: ");
	scan_word(occurrences1);

	printf("Enter the second word: ");
	scan_word(occurrences2);

	if(is_anagram(occurrences1, occurrences2)){
		printf("Both the two words are anagrams!");
		return 0;
	}
	else{
		printf("The two words are not anagrams.");
		return 0;
	}
}
/*Function to scan the words and changed it to upper case letters */
void scan_word(int occurrences[26]){
    char c;
	while ((c = getchar()) != '\n'){
		if(isalpha(c)){
			occurrences[toupper(c) - 'A']++;
		}
	}
}

 /*Function to check whether the following two words are anagrams through the occurences of same letters*/
bool is_anagram(int occurrences1[26], int occurrences2[26]){
	ptr1 = occurrences1;
	ptr2 = occurrences2;

	for(i = 0; i < 26; i++){
		if(*(ptr1+i) != *(ptr2+i)){
			return false;
		}
	}
	return true;
}

