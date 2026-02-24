#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void) {

    const char *fantasies[] = {
        "Step-sis hentai sneaking into your bed for secret passionate creampie",
        "Busty step-mom hentai waking you with slow morning blowjob and ride",
        "Step-bro step-sis taboo shower hentai soaping each other up",
        "Step-sister caught watching hentai and pulls you in to join",
        "Step-family hentai vacation - locked hotel room all night creampies",
        "Secret step-sis romance confession turns into raw loving sex",
        "Quintessential Quintuplets Nino Nakano tsundere rule34 jealous possessive pounding",
        "Quintessential Quintuplets Miku Nakano rule34 shy headphones on deepthroat ride",
        "Quintessential Quintuplets Ichika Nakano rule34 mature actress seductive roleplay creampie",
        "Quintessential Quintuplets Yotsuba Nakano rule34 energetic lucky girl marathon sex",
        "Quintessential Quintuplets Itsuki Nakano rule34 tutor girl study break intense fuck",
        "Quintessential Quintuplets all five sisters rule34 harem but you pick your favorite tonight",
        "Alya Sometimes Hides Her Feelings Alya Kujou rule34 Russian beauty hiding her moans",
        "Alya Kujou rule34 tsundere hiding feelings while getting railed hard",
        "Alya Kujou elegant rule34 Russian whispers in your ear during passionate sex",
        "Zero Two Darling in the Franxx rule34 pink hair girl intense mating press",
        "Tifa Lockhart rule34 huge tits bouncing while she rides you cowgirl",
        "Yor Forger Spy x Family rule34 assassin wife using her body on you",
        "Rias Gremory rule34 crimson hair devil passionate creampie breeding",
        "Hinata Hyuga rule34 shy wife gentle hentai loving deep creampie",
        "Mikasa Ackerman rule34 strong beauty finally submits completely",
        "Marin Kitagawa My Dress-Up Darling rule34 cosplay outfit torn off for rough sex",
        "Chizuru Mizuhara Rent-a-Girlfriend rule34 perfect girlfriend hotel date sex",
        "Rem Re:Zero rule34 devoted maid hentai full body worship service",
        "Asuna Sword Art Online rule34 clearer hentai reward after battle",
        "Ahegao rule34 popular thicc anime girl completely lost in orgasm",
        "Popular busty hentai waifu titfuck with cum swallowing finish",
        "Romantic hentai anime girlfriend slow kisses turning into hard pounding",
        "Popular anime girl desperate cowgirl riding you to creampie",
        "Thicc waifu rule34 doggystyle from behind deep creampie",
        "Popular hentai school uniform quickie in empty classroom",
        "Anime childhood friend rule34 first time together super romantic",
        "Busty anime onee-san hentai gentle start to wild finish",
        "Popular hentai idol girl private fan meeting backstage sex",
        "Nino Quintuplets rule34 naked apron cooking turns into kitchen fuck",
        "Alya rule34 library secret quickie hiding from everyone",
        "Tifa Lockhart rule34 Seventh Heaven bar after hours on the counter",
        "Yor Forger rule34 flexible assassin hentai crazy positions",
        "Rias Gremory rule34 private peerage only reward for you",
        "Zero Two rule34 intense tongue kissing and riding",
        "Hinata Hyuga rule34 morning love making gentle wife sex",
        "Marin Kitagawa rule34 trying brand new cosplay outfits on your cock",
        "Popular busty hentai girl paizuri titfuck session",
        "Anime romance date night rule34 ends with hotel creampie",
        "Itsuki Quintuplets rule34 serious girl finally lets loose",
        "Miku Nakano rule34 quiet girl surprisingly loud and wet",
        "Ichika Quintuplets rule34 seductive older sister energy all night",
        "Yotsuba hentai rule34 happy lucky sex till you both collapse",
        "Alya Kujou rule34 jealous possessive queen riding you",
        "Tifa rule34 perfect body hentai full nelson deep",
        "Popular hentai waifu ahegao tongue out eyes rolled orgasm",
        "Step-mom hentai teaching her boy exactly how to please her",
        "Romantic hentai slow build up to massive creampie finish",
        "Popular anime thicc ass rule34 twerking hard on your dick"
    };

    size_t num = sizeof(fantasies) / sizeof(fantasies[0]);

    // Seed once for true randomness across the whole session
    srand((unsigned int)time(NULL));

    printf("=== FULLY RANDOM JERK-OFF THEME GENERATOR v1.0 === \n\n");
    printf("Made by MysteryX cause he was bored \n\n");

    char again;
    do {
        int pick = rand() % num;
        printf(" TODAY'S GOON ASSIGNMENT \n");
        printf("%s\n\n", fantasies[pick]);
        printf("Search it up, lube heavy, edge hard, imagine every thrust and moan...\n\n");
        printf("Another fresh random one? (y/n): ");
        scanf(" %c", &again);
        again = tolower(again);
    } while (again == 'y');

    printf("\nSee you next time you need to drain those nasty balls\n");
    return 0;
}
