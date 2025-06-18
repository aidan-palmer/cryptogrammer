#include <stdio.h>
#include <stdlib.h>

void write_csv(int line, int num_sentences, int num_chars, char* quote, char* author) {

}

int count_sentences(char* block) {

}

int count_chars(char* block) {

}

char* parse_author(char* block) {

}

char* parse_quote(char* block) {

}

void read_txt(char* filename) {
    // open and read file
    // sort of a "main"
    // get each block of quote and author, then parse that with parse_quote and parse_author,
    // then pass that to write_csv
}

int main(int argc, char** argv) {
        
}
/* 
 * main is where I will run the formatter
 * add in condition where if quotes.csv already exists, rename it to quotes.old.csv
 * */
