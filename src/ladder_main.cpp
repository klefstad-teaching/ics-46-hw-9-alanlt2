#include "ladder.h"
int main() {
    set<string> word_list;
    load_words(word_list, "./src/words.txt"); 
    string start_word = "balls";
    string end_word = "phone";
    vector<string> ladder = generate_word_ladder(start_word, end_word, word_list);
    print_word_ladder(ladder);
    verify_word_ladder(ladder);
}