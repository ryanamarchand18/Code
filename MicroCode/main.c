#include <stdio.h>
#include <stdbool.h>
#include "countingAlgorithm.h"

int main(int argc, char const *argv[])
{
    double trueCount = 5; //(running count) / (decks left in shoe)
    int playerScore = 1;
    int dealerScore = 5;

    //int runningCount = 0; //Using the hi-lo system
    //int numberCardsLeftInShoe = 312; //6 decks * 52 = 312 starting cards
    char recommendedAction = calculate(trueCount, playerScore, dealerScore);

    printf("Recommended action for player score %d and dealer score %d: %c\n", playerScore, dealerScore, recommendedAction);

    return 0;
}