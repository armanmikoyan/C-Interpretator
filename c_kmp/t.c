#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 50
#define MAX_NUM_WORDS 1000

int main() {
    char words[MAX_NUM_WORDS][MAX_WORD_LEN]; // массив строк
    int num_words = 0; // количество слов

    // Открыть файл для чтения
    FILE *fp = fopen("file", "r");
    if (fp == NULL) {
        printf("Ошибка при открытии файла\n");
        exit(1);
    }

    // Читать файл по словам
    while (fscanf(fp, "%s", words[num_words]) == 1) {
        num_words++;
        if (num_words == MAX_NUM_WORDS) {
            printf("Достигнуто максимальное количество слов (%d)\n", MAX_NUM_WORDS);
            break;
        }
    }

    // Закрыть файл
    fclose(fp);



//data
struct Number {
    char name[50];
    int value;
};
struct String {
    char name[50];
    char value[150];
};


int integer_length = 0;
int string_length = 0;


	for(int i = 0; i<num_words;++i){		
	  if(strcmp(words[i], "int") == 0) {
 	     integer_length++;

	}
	  else if(strcmp(words[i], "str") == 0){
	   string_length++;
	}
		
	}

	struct Number number[integer_length];
	struct String string[string_length];
	 


	for(int i = 0; i<num_words;i++){		
              if(strcmp(words[i], "int") == 0) {
                strcpy(number[i].name, words[i+1]);
                number[i].value =  atoi(words[i+2]);
 	            printf("%s\n",number[i].name);
                 printf("%d\n",number[i].value);
            


	}
	}

     
		
    return 0;


}








