/*Using ADT's to make a card deck and create a shuffle function.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <locale.h>
#include <wchar.h>

#define SPADES 0x2660
#define CLUBS 0x2663
#define HEARTS 0x2665
#define DIAMONDS 0x2666

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

typedef struct card
{
    wchar_t suit;
    int pips;
    char face[3];
} card;
typedef uint64_t counter;

counter count_sf = 0, count_s = 0, count_f = 0, count_foak = 0, count_fh = 0, count_toak = 0, count_tp = 0, count_op = 0, count_hc = 0;

void init_card_group(card *);
void print_cards(card *, int);
void shuffle(card *);
void make_hand(card *, card *);
void draw5(card *, card *);
void sorter(card *, int);
int drawisstraight(card *);
int drawisflush(card *);
int drawisfourkind(card *);
int drawisthreekind(card *p);
int drawhaspairs(card *);

int main()
{
    card deck[52], hand[7], card_5[5];
    setlocale(LC_ALL, "en_US.UTF-8");

    init_card_group(deck); //Initializing card group.
    //print_cards(deck,52);//Printing ordered deck.
    //shuffle(deck);
    //print_cards(deck,52);//Printing shuffled deck.
    //make_hand(deck,hand);
    //print_cards(hand,7);//Printing 7 hand draw.

    for (uint64_t i = 0; i < 1000000ul; i++)
    {
        shuffle(deck);
        make_hand(deck, hand);
        //print_cards(hand,7);
        draw5(hand, card_5);
    }

    wprintf(L"Number of straight flushes:%d\n", count_sf);
    wprintf(L"Number of straights:%d\n", count_s);
    wprintf(L"Number of flushes:%d\n", count_f);
    wprintf(L"Number of four of a kind:%d\n", count_foak);
    wprintf(L"Number of full houses:%d\n", count_fh);
    wprintf(L"Number of three of a kind:%d\n", count_toak);
    wprintf(L"Number of double pairs:%d\n", count_tp);
    wprintf(L"Number of single pairs:%d\n", count_op);
    wprintf(L"Number of high cards:%d\n", count_hc);

    return 0;
}
//Function for initializing cards with standard order.
void init_card_group(card *card_p)
{
    wchar_t suits[] = {SPADES, CLUBS, HEARTS, DIAMONDS};
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 13; i++)
        {
            card_p[i + ((j)*13)].suit = suits[j];
            card_p[i + ((j)*13)].pips = i + 1;
        }
    }
}

//Function for printing deck.
void print_cards(card *card_p, int numofc)
{
    int pips_cur;

    wprintf(L"The cards are:\n");
    for (int i = 0; i < numofc; i++)
    {
        pips_cur = (card_p + i)->pips;

        switch (pips_cur)
        {
        case 1:
            sprintf((card_p + i)->face, "A");
            break;
        case 11:
            sprintf((card_p + i)->face, "J");
            break;
        case 12:
            sprintf((card_p + i)->face, "Q");
            break;
        case 13:
            sprintf((card_p + i)->face, "K");
            break;
        default:
            sprintf((card_p + i)->face, "%d", pips_cur);
        }
        wprintf(L" %s%lc\n", (card_p + i)->face, (card_p + i)->suit);
    }
    printf("\n");
}
//Function to shuffle the deck.
void shuffle(card *card_p)
{
    card tmp;
    srand(time(NULL));
    for (int i = 0; i < 52; i++)
    {
        tmp = card_p[i];
        int r = rand() % (52 - i);
        card_p[i] = card_p[r + i];
        card_p[r + i] = tmp;
    }
}
//Function to create a hand of 7 cards.
void make_hand(card *deck_p, card *hand_p)
{

    for (int i = 0; i < 7; i++)
    {
        hand_p[i] = deck_p[i];
    }
}
//Function to draw combos of 5 cards from 7 cards.
void draw5(card *hand_p, card *draw)
{
    int j = 0;
    counter sf = 0, s = 0, f = 0, foak = 0, fh = 0, toak = 0, tp = 0, op = 0, hc = 0;
    for (int a = 0; a < 6; a++)
    {
        for (int b = a + 1; b < 7; b++)
        {
            //cards not to consider are a and b

            for (int i = 0; i < 7; i++)
            {
                if (i != a && i != b)
                {
                    draw[j] = hand_p[i];
                    j++;
                }
            }

            j = 0;
            sorter(draw, 5);
            //Previous if else block was here and without break printed 21 mil runs.with break gave 6 mil hands.
            if (drawisstraight(draw) && drawisflush(draw))
                sf++; //Straight Flush Counter

            else if (drawisstraight(draw))
                s++; //Straight Counter
            else if (drawisflush(draw))
                f++; //Flush Counter
            else if (drawisfourkind(draw))
                foak++; //Four Of A Kind Counter
            else if (drawisthreekind(draw) == 2)
                fh++; //Full House Counter
            else if (drawisthreekind(draw))
                toak++; //Three Of A Kind Counter
            else if (drawhaspairs(draw) == 2)
                tp++; //Two Pairs Counter
            else if (drawhaspairs(draw))
                op++; //One Pair Counter
            else
                hc++; //High Card Counter

            //print_cards(draw,5);
        }
    }
    if (sf > 0)
        count_sf++;
    else if (s > 0)
        count_s++;
    else if (f > 0)
        count_f++;
    else if (foak > 0)
        count_foak++;
    else if (fh > 0)
        count_fh++;
    else if (toak > 0)
        count_toak++;
    else if (tp > 0)
        count_tp++;
    else if (op > 0)
        count_op++;
    else if (hc > 0)
        count_hc++;
}
void sorter(card *hand_p, int numofc)
{
    int temp = 0;
    for (int a = 0; a < numofc - 1; a++)
    {
        for (int b = a + 1; b < numofc; b++)
        {
            if ((hand_p + a)->pips > (hand_p + b)->pips)
            {
                temp = (hand_p + a)->pips;
                (hand_p + a)->pips = (hand_p + b)->pips;
                (hand_p + b)->pips = temp;
            }
        }
    }
}
/* Determine a straight draw */
int drawisstraight(card *p)
{
    /* straight, ace high */
    if (p[0].pips == 1 && p[1].pips == 10 && p[2].pips == 11 && p[3].pips == 12 && p[4].pips == 13)
        return (TRUE);

    /* other straight */
    if (p[0].pips != p[1].pips - 1)
        return (FALSE);
    if (p[1].pips != p[2].pips - 1)
        return (FALSE);
    if (p[2].pips != p[3].pips - 1)
        return (FALSE);
    if (p[3].pips != p[4].pips - 1)
        return (FALSE);

    return (TRUE);
}
/* Determine a flush draw */
int drawisflush(card *p)
{
    wchar_t s;

    /* obtain the first card's suit */
    s = p[0].suit;
    /* compare with all the other cards */
    for (int x = 1; x < 5; x++)
    {
        if (s != p[x].suit)
            return (FALSE);
    }

    return (TRUE);
}
/* Check for pairs */
int drawhaspairs(card *p)
{
    /* test the first two cards */
    if (p[0].pips == p[1].pips)
    {
        /* check for a second pair */
        if (p[2].pips == p[3].pips || p[3].pips == p[4].pips)
            return (2);
        else
            return (TRUE);
    }

    /* test the second two cards */
    if (p[1].pips == p[2].pips)
    {
        /* check for a second pair */
        if (p[3].pips == p[4].pips)
            return (2);
        else
            return (TRUE);
    }

    /* test for a pair at the 3rd position */
    if (p[2].pips == p[3].pips)
        return (TRUE);

    /* test for a pair at the final position */
    if (p[3].pips == p[4].pips)
        return (TRUE);

    return (FALSE);
}
/* only two possible hand patterns for four-of-a-kind */
int drawisfourkind(card *p)
{
    /* test the first four cards */
    if (p[0].pips == p[1].pips && p[1].pips == p[2].pips && p[2].pips == p[3].pips)
        return (TRUE);
    /* test the last four cards */
    if (p[1].pips == p[2].pips && p[2].pips == p[3].pips && p[3].pips == p[4].pips)
        return (TRUE);

    return (FALSE);
}
/* three possible hand patterns for three-of-a-kind  - and full house */
int drawisthreekind(card *p)
{
    /* test the first three cards */
    if (p[0].pips == p[1].pips && p[1].pips == p[2].pips)
    {
        /* also test for full house */
        if (p[3].pips == p[4].pips)
            return (2);
        else
            return (1);
    }

    /* test the next three cards */
    if (p[1].pips == p[2].pips && p[2].pips == p[3].pips)
        return (TRUE);

    /* test the last three cards */
    if (p[2].pips == p[3].pips && p[3].pips == p[4].pips)
    {
        /* also test for a full house */
        if (p[0].pips == p[1].pips)
            return (2);
        else
            return (1);
    }

    return (FALSE);
}
