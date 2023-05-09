#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numberOfcards;
    queue<int> cards, discardedCards;

    while (cin >> numberOfcards, numberOfcards)
    {
        for (int i = 1; i <= numberOfcards; i++)
        {
            cards.push(i);
        }

        while (cards.size() > 1)
        {
            discardedCards.push(cards.front());
            cards.pop();
            cards.push(cards.front());
            cards.pop();
        }

        printf("Discarded cards: %d", discardedCards.front());
        discardedCards.pop();
        while (!discardedCards.empty())
        {
            printf(", %d", discardedCards.front());
            discardedCards.pop();
        }
        printf("\nRemaining card: %d\n", cards.front());
        cards.pop();
    }
    return 0;
}