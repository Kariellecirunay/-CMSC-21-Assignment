#include <stdio.h>
#include <ctype.h>  /* toupper, isalpha */
#include <stdbool.h> /*define bool */

void scan_word(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

int i;

int main(void) {

    int occurrences1[26] = {0};
	int occurrences2[26] = {0};

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
void scan_word(int occurrences[26]){
	char c;
	while ((c = getchar()) != '\n'){
		if(isalpha(c)){
			occurrences[toupper(c) - 'A']++;
		}
	}
}

bool is_anagram (int occurences1[26],int occurences2[26])
{
    for (i=0;1 < 26; i++);{
        if (occurences1[i] != occurences2[i]){
            return false;
        }
    }
    return true;
}



