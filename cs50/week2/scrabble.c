#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word);

// score card key
int key[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // get words
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    // compute scores
    int p1_score = compute_score(p1);
    int p2_score = compute_score(p2);

    if (p1_score > p2_score)
    {
        printf("Player 1 wins!\n");
        return 0;
    }
    if (p1_score < p2_score)
    {
        printf("Player 2 wins!\n");
        return 0;
    }
    else
    {
        printf("Tie!\n");
        return 0;
    }
}

int compute_score(string word)
{
    // counter for score
    int score = 0;

    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += key[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += key[word[i] - 'a'];
        }
    }

    return score;
}
