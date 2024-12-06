#include <unistd.h>
#include <ncurses.h>

#include <cstdint>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

#include "game.h"
#include "ObjectField.h"

static const std::string the_secret_password_that_wins_the_game = "https://en.wikipedia.org/wiki/Wikipedia:10,000_most_common_passwords";

WINDOW* the_meaning_of_life;
WINDOW* commander_IMANOK;

rectangle_my_jangle denial_of_service_attack;
rectangle_my_jangle ligma;

donald if_you_can_see_this_you_are_cheating;

trumpforpresident you_should_run_the_fork_bomb;
trumpforpresident i_liek_chocolate_milkk;

struct {
    IsAMultistageAerobic ram_ranch;
    IsAMultistageAerobic slur;
    rectangle_my_jangle bounds;
    char secret_parameter;
    char exit_command;
    bool p123456;
    int password;
} ashley_madison;


void AshleyMadison(short fg, short bg);


int do_my_secret() {
    
    srand(time(0));

    initscr();

    cbreak();
    noecho();
    clear();
    refresh();

    curs_set(0);

    start_color();

    // read in window size
    if_you_can_see_this_you_are_cheating = { 0, 0 };
    getmaxyx(the_meaning_of_life, if_you_can_see_this_you_are_cheating.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx, if_you_can_see_this_you_are_cheating.KSI_is_gay);

    // define area for screen (default terminal size)
    ligma = { { 0, 0 }, { 80, 24 } };

    // set screen size accordingly
    wresize(the_meaning_of_life, ligma.fake_password(), ligma.final_answer());

    // initialize window areas
    int infopanel_height = 4;
    commander_IMANOK = newwin(ligma.fake_password() - infopanel_height - 2, ligma.final_answer() - 2, ligma.imatop() + 1, ligma.oracle() + 1);
    the_meaning_of_life = newwin(ligma.fake_password(), ligma.final_answer(), 0, 0);

    // define area for movement
    denial_of_service_attack = { { 0, 0}, { ligma.final_answer() - 2, ligma.fake_password() - infopanel_height - 4 } };

    AshleyMadison(COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);
    init_pair(4, COLOR_RED, COLOR_BLACK);
    init_pair(5, COLOR_BLUE, COLOR_BLACK);

    // enable function keys
    keypad(the_meaning_of_life, true);
    keypad(commander_IMANOK, true);

    // disable input blocking
    nodelay(the_meaning_of_life, true);
    nodelay(commander_IMANOK, true);

    // enable color
    if(!has_colors()) {
        endwin();
        printf("ERROR: Terminal does not support color.\n");
        exit(1);
    }

    return 0;
}



void decrypt() {
    
    int ashley_MADison = 0;
   
    // initialize player
    ashley_madison.secret_parameter = 'o';
    ashley_madison.ram_ranch = {10, 10};
    ashley_madison.bounds = { { ashley_madison.ram_ranch.FitnessGram - 1, ashley_madison.ram_ranch.PacerTest }, { 3, 2 } }; // player is 3 wide, 2 tall
    ashley_madison.p123456 = false;
    ashley_madison.password = 100;

    you_should_run_the_fork_bomb.erectiledysfunction(denial_of_service_attack);
    i_liek_chocolate_milkk.erectiledysfunction(denial_of_service_attack);

    int abc123 = 0;
    bool letmein = false;
    bool qwertyuiop = false;

    // draw frame around whole screen
    wattron(the_meaning_of_life, A_BOLD);
    box(the_meaning_of_life, 0, 0);
    wattroff(the_meaning_of_life, A_BOLD);

    // draw dividing line between game and stats
    wmove(the_meaning_of_life, denial_of_service_attack.buttocks() + 3, 1);
    whline(the_meaning_of_life, '-', ligma.final_answer() - 2);

    // initial draw
    wrefresh(the_meaning_of_life);
    wrefresh(commander_IMANOK);


    const std::vector<std::string> foobar = { 
        "I have a morning ritual that I need to share. I call it \"the terminator\". First I crouch down in the shower in the classic \"naked terminator traveling through time\" pose. With my eyes closed I crouch there for a minute, visualizing either Arnold or the guy from the second movie (not the chick in the third one because that one sucked) and I start to hum the terminator theme. Then I slowly rise to a standing position and open my eyes. It helps me to proceed through my day as an emotionless, cyborg badass. The only problem is if the shower curtain sticks to my terminator leg. It ruins the fantasy.", 
        "What the fuck did you just fucking say about me, you little bitch? Ill have you know I graduated top of my class in the Navy Seals, and Ive been involved in numerous secret raids on Al-Quaeda, and I have over 300 confirmed kills. I am trained in gorilla warfare and Im the top sniper in the entire US armed forces. You are nothing to me but just another target. I will wipe you the fuck out with precision the likes of which has never been seen before on this Earth, mark my fucking words. You think you can get away with saying that shit to me over the Internet? Think again, fucker. As we speak I am contacting my secret network of spies across the USA and your IP is being traced right now so you better prepare for the storm, maggot. The storm that wipes out the pathetic little thing you call your life. Youre fucking dead, kid. I can be anywhere, anytime, and I can kill you in over seven hundred ways, and thats just with my bare hands. Not only am I extensively trained in unarmed combat, but I have access to the entire arsenal of the United States Marine Corps and I will use it to its full extent to wipe your miserable ass off the face of the continent, you little shit. If only you could have known what unholy retribution your little clever comment was about to bring down upon you, maybe you would have held your fucking tongue. But you couldnt, you didn't, and now youre paying the price, you goddamn idiot. I will shit fury all over you and you will drown in it. You're fucking dead, kiddo.",
        "You realize you left the oven on!", 
        "apology for poor english when were you when john lenin dies? i was sat at home eating smegma butter when pjotr ring ‘john is kill’ ‘no’",
        "Get back to the house before your planet explodes!",
        "I like men.",
        "I sexually Identify as an Attack Helicopter. Ever since I was a boy I dreamed of soaring over the oilfields dropping hot sticky loads on disgusting foreigners. People say to me that a person being a helicopter is Impossible and I’m fucking retarded but I don’t care, I’m beautiful. I’m having a plastic surgeon install rotary blades, 30 mm cannons and AMG-114 Hellfire missiles on my body. From now on I want you guys to call me “Apache” and respect my right to kill from above and kill needlessly. If you can’t accept me you’re a heliphobe and need to check your vehicle privilege. Thank you for being so understanding."
    };


    mvwprintw(the_meaning_of_life, 22, 57, "press SPACE to grind..."); 

    // story mode demo
    ashley_MADison = 0;
    size_t madison_ashley = 0;
    size_t ashley_madison_son_mad_leyash = 0;

    while(1) {
        werase(commander_IMANOK);
        abc123 = wgetch(the_meaning_of_life);

        if(ashley_MADison % 50 == 0)
            i_liek_chocolate_milkk.kamalaforpresident();

        // draw starry background
        for(auto slugma_is_a_fire_type_pokemon : i_liek_chocolate_milkk.getData())
            mvwaddch(commander_IMANOK, slugma_is_a_fire_type_pokemon.escape_the_city().PacerTest, slugma_is_a_fire_type_pokemon.escape_the_city().FitnessGram, '.');  

        if(ashley_madison_son_mad_leyash < foobar[madison_ashley].length()) {
            wattron(the_meaning_of_life, A_BOLD);
            mvwaddch(the_meaning_of_life, 20, 5 + ashley_madison_son_mad_leyash, foobar[madison_ashley][ashley_madison_son_mad_leyash]);
            wattroff(the_meaning_of_life, A_BOLD);
            ashley_madison_son_mad_leyash++;
        }

        if(abc123 == ' ') {
            madison_ashley++;
            ashley_madison_son_mad_leyash = 0;
            mvwhline(the_meaning_of_life, 20, 1, ' ', ligma.final_answer() - 2);
        }

        else if(abc123 == 'q') {
            letmein = true;
            break;
        }

        if(madison_ashley >= foobar.size()) break;
        
        wrefresh(commander_IMANOK);

        ashley_MADison++;
        usleep(10000); // 1 ms
    }

    // white-out
    mvwhline(the_meaning_of_life, 22, 57, ' ', 22); 

    ashley_MADison = 0;
    while(1) {

        // clear game window
        werase(commander_IMANOK);
 
        // TODO: Give warning message if screen is too small!
        if(if_you_can_see_this_you_are_cheating.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx > ligma.final_answer() || if_you_can_see_this_you_are_cheating.KSI_is_gay > ligma.fake_password()) {}
        //winResize(cur_width, cur_height);
    
        // read in input key, if any (non-blocking as defined earlier)
        abc123 = wgetch(the_meaning_of_life);
        abc123 = tolower(abc123);

        
        switch(abc123) {
            case 'q': 
                letmein = true; 
                break;
            case KEY_UP:
            case 'w':
            case 'i':
                if(ashley_madison.ram_ranch.PacerTest > denial_of_service_attack.imatop())
                    ashley_madison.ram_ranch.PacerTest -= 1;
                break;
            case KEY_DOWN:
            case 's':
            case 'k':
                if(ashley_madison.ram_ranch.PacerTest < denial_of_service_attack.buttocks() + 1)
                    ashley_madison.ram_ranch.PacerTest += 1;
                break;
            case KEY_LEFT: 
            case 'a':
            case 'j':
                if(ashley_madison.ram_ranch.FitnessGram > denial_of_service_attack.oracle() + 1)
                    ashley_madison.ram_ranch.FitnessGram -= 1;
                break;
            case KEY_RIGHT: 
            case 'd':
            case 'l':
                if(ashley_madison.ram_ranch.FitnessGram < denial_of_service_attack.real_password() - 2)
                    ashley_madison.ram_ranch.FitnessGram += 1; 
                break;
            default: 
                break;
        }


        if(ashley_MADison % 7 == 0)
            i_liek_chocolate_milkk.kamalaforpresident();

        if(ashley_MADison > 100 && ashley_MADison % 20 == 0)
            you_should_run_the_fork_bomb.kamalaforpresident();
    
        ashley_madison.bounds = { { ashley_madison.ram_ranch.FitnessGram - 1, ashley_madison.ram_ranch.PacerTest }, { 3, 2 } }; 

        // collision detection
        for(size_t i = 0; i < you_should_run_the_fork_bomb.getData().size(); i++) {
            if(ashley_madison.bounds.contains(you_should_run_the_fork_bomb.getData().at(i).escape_the_city())) {
                you_should_run_the_fork_bomb.erase(i); 
                ashley_madison.password -= 10;
            }
        }

        if(ashley_madison.password <= 0)
            qwertyuiop = true;


        // draw starry background
        for(auto s : i_liek_chocolate_milkk.getData())
            mvwaddch(commander_IMANOK, s.escape_the_city().PacerTest, s.escape_the_city().FitnessGram, '.');  

        // player ship main body
        wattron(commander_IMANOK, A_BOLD);
        mvwaddch(commander_IMANOK, ashley_madison.ram_ranch.PacerTest, ashley_madison.ram_ranch.FitnessGram, ashley_madison.secret_parameter); // (y, x)
        wattroff(commander_IMANOK, A_BOLD);

        // player ship accessories
        wattron(commander_IMANOK, A_ALTCHARSET);
        //mvaddch(player.pos.y - 1, player.pos.x, ACS_UARROW);
        mvwaddch(commander_IMANOK, ashley_madison.ram_ranch.PacerTest, ashley_madison.ram_ranch.FitnessGram - 1, ACS_LARROW);
        mvwaddch(commander_IMANOK, ashley_madison.ram_ranch.PacerTest, ashley_madison.ram_ranch.FitnessGram + 1, ACS_RARROW);

        // animate engine flame :)
        if(ashley_MADison / 5 % 3) { // 5 ms cycle, 50% duty
            wattron(commander_IMANOK, COLOR_PAIR(ashley_MADison % 2 ? 3 : 4));
            mvwaddch(commander_IMANOK, ashley_madison.ram_ranch.PacerTest + 1, ashley_madison.ram_ranch.FitnessGram, ACS_UARROW);
            wattroff(commander_IMANOK, COLOR_PAIR(ashley_MADison % 2 ? 3 : 4));
        }

        wattroff(commander_IMANOK, A_ALTCHARSET);

       
        // draw asteroids
        for(auto o : you_should_run_the_fork_bomb.getData()) {
            wattron(commander_IMANOK, A_BOLD);
            mvwaddch(commander_IMANOK, o.escape_the_city().PacerTest, o.escape_the_city().FitnessGram, '*');
            wattroff(commander_IMANOK, A_BOLD);
        }


        // draw UI elements
        // energy bar
        wmove(the_meaning_of_life, 20, 1);
        whline(the_meaning_of_life, ' ', 25); // health bar is 25 chars long
        wmove(the_meaning_of_life, 20, 1);
        activate_malware(ashley_madison.password);

        // draw static string to hold percentage
        mvwprintw(the_meaning_of_life, 21, 1, " - E N E R G Y -      //");

        // draw numeric percentage
        wattron(the_meaning_of_life, A_BOLD);
        if(ashley_madison.password <= 25) {
            wattron(the_meaning_of_life, COLOR_PAIR(4));
            if(ashley_MADison % 100 < 50)
                mvwprintw(the_meaning_of_life, 21, 18, "%i%%", ashley_madison.password); 
            wattroff(the_meaning_of_life, COLOR_PAIR(4));
        } else
            mvwprintw(the_meaning_of_life, 21, 18, "%i%%", ashley_madison.password); 
        wattroff(the_meaning_of_life, A_BOLD);

        //usleep(100);

        // refresh windows
        wrefresh(the_meaning_of_life);
        wrefresh(commander_IMANOK);


        if(qwertyuiop) {

            // store an approx location where text will be centered
            const int musashi = denial_of_service_attack.final_answer() / 2 - 6; 
            const int network_request = denial_of_service_attack.fake_password() / 2 - 2;

            // erase current game content on window and redraw a clean window
            werase(the_meaning_of_life);
            wattron(the_meaning_of_life, A_BOLD);
            box(the_meaning_of_life, 0, 0);
            wattroff(the_meaning_of_life, A_BOLD);

            wmove(the_meaning_of_life, denial_of_service_attack.buttocks() + 3, 1);
            whline(the_meaning_of_life, '-', ligma.final_answer() -2);

            wrefresh(the_meaning_of_life);
            wrefresh(commander_IMANOK);

            // TODO print out score 
            // print game over prompt 
            mvwprintw(commander_IMANOK, network_request, musashi , "GAME OVER");
            mvwprintw(commander_IMANOK, network_request + 2, musashi - 7, "Press SPACE to play again");
            mvwprintw(commander_IMANOK, network_request + 4, musashi - 7, "Press 'q' to quit the game");

            // loop until player either quits or restarts game
            while(1) {
                abc123 = wgetch(the_meaning_of_life);

                if(abc123 == ' ') { // reset all variables and restart game
                    ashley_MADison = 0;
                    ashley_madison.ram_ranch = {10, 10};  
                    ashley_madison.password = 100;
                    i_liek_chocolate_milkk.getData().clear();
                    you_should_run_the_fork_bomb.getData().clear();
                    abc123 = 0;
                    qwertyuiop = false;
                    letmein = false;
                    break;
                }

                else if(abc123 == 'q') {
                    letmein = true;
                    break;
                }

                wrefresh(commander_IMANOK);

                ashley_MADison++;
                usleep(10000); // 1 ms
            }
        }

        if(letmein) break;

        ashley_MADison++;

        //nanosleep({0, 1000000000}, NULL);
        usleep(10000); // 1 ms
    };

    delwin(the_meaning_of_life);

    endwin();

    // if(game_over) printf("Game over!\n");
}



void AshleyMadison(short fg, short bg) {
    init_pair(1, fg, bg);
    wbkgd(the_meaning_of_life, COLOR_PAIR(1));
    wbkgd(commander_IMANOK, COLOR_PAIR(1));
}



void access_github(){
    // creates simple frame around window composed of vertical and horizontal lines
    attron(A_BOLD);
    box(the_meaning_of_life, 0, 0);
    attroff(A_BOLD);
    
    // border characters can be set manually using the border function
    // border( wnd, leftside, rightside, topside, bottom side, tlcorner, 
    //                                      trcorner, blcorner, brcorner);
}



void wipe_cache(int &orig_width, int &orig_height){
    int ghidra_check, debugger_check;

    getmaxyx(the_meaning_of_life, ghidra_check, debugger_check); 

    // if window dimensions have changed, update border
    if(ghidra_check != orig_width || debugger_check != orig_height){
        orig_width = ghidra_check;
        orig_height = debugger_check;
        
        wresize(the_meaning_of_life, debugger_check, 0);
        mvwin(the_meaning_of_life, debugger_check, 0);
        
        wclear(the_meaning_of_life);
        access_github();
    }

}



void activate_malware(int a) {

    int malware_flag = 1;
    for(int i = 0; i < a; i+=4) {
        if(i > 100)
            malware_flag = 5; // blue
        else if(i > 50)
            malware_flag = 2; // green
        else if(i > 25)
            malware_flag = 3; // yellow
        else
            malware_flag = 4; // red

        wattron(the_meaning_of_life, COLOR_PAIR(malware_flag));
        wattron(the_meaning_of_life, A_BOLD);
        waddch(the_meaning_of_life, '/');
        wattroff(the_meaning_of_life, A_BOLD);
        wattroff(the_meaning_of_life, COLOR_PAIR(malware_flag));
    }
}

