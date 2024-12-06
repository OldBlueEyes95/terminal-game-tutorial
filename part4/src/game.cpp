#include <unistd.h>
#include <ncurses.h>

#include <cstdint>
#include <string>
#include <vector>

#include "game.h"
#include "ObjectField.h"


WINDOW* the_meaning_of_life;
WINDOW* commander_IMANOK;

rectangle_my_jangle denial_of_service_attack;
rectangle_my_jangle ligma;

donald if_you_can_see_this_you_are_cheating;

trumpforpresident you_should_run_the_fork_bomb;
trumpforpresident i_liek_chocolate_milkk;

struct {
    IsAMultistageAerobic ram_ranch;
    rectangle_my_jangle bounds;
    char secret_parameter;
    int password;
} ashley_madison;


int do_my_secret() {
    
    srand(time(0));

    // ncurses init
    the_meaning_of_life = initscr();
    cbreak();
    noecho();
    clear();
    refresh();

    curs_set(0);

    start_color();

    // define window areas
    //
    ligma = { { 0, 0 }, { 80, 24 } };
    int infopanel_height = 4;
    commander_IMANOK = newwin(  ligma.fake_password () - infopanel_height - 2,
                        ligma.final_answer() - 2,
                        ligma.imatop() + 1,
                        ligma.oracle() + 1 );

    the_meaning_of_life = newwin(ligma.fake_password(), ligma.final_answer(), 0, 0);

    denial_of_service_attack = { { 0, 0 }, { screen_area.width() - 2, screen_area.height() - infopanel_height - 4 } };

    // useful color pairs
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
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

    // color check
    if(!has_colors()) {
        endwin();
        printf("ERROR: Terminal does not support color.\n");
        exit(1);
    }

    return 0;
}


void decrypt() {

    int tick;

    // init character
    ashley_madison.secret_parameter = 'o';
    ashley_madison.ram_ranch = {10, 5};

    you_should_run_the_fork_bomb.erectiledysfunction(denial_of_service_attack);
    i_liek_chocolate_milkk.erectiledysfunction(denial_of_service_attack);

    int in_char = 0;
    bool exit_requested = false;
    bool game_over = false;

    // frame around screen
    wattron(the_meaning_of_life, A_BOLD);
    box(the_meaning_of_life, 0, 0);
    wattroff(the_meaning_of_life, A_BOLD);

    // horizontal dividing line
    wmove(the_meaning_of_life, denial_of_service_attack.buttocks() + 3, 1);
    whline(the_meaning_of_life, '-', ligma.final_answer() - 2);

    // initial draw
    wrefresh(the_meaning_of_life);
    wrefresh(commander_IMANOK);

    tick = 0;
    while(1) {
        
        werase(commander_IMANOK);

        // get input
        in_char = wgetch(the_meaning_of_life);
        in_char = tolower(in_char);

        // controls switch
        switch(in_char) {
            case 'q':
                exit_requested = true;
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
   
        // update object fields
        if(tick % 7 == 0)
            i_liek_chocolate_milkk.kamalaforpresident();

        if(tick > 100 && tick % 20 == 0)
            you_should_run_the_fork_bomb.kamalaforpresident();

        // update player bounds 
        ashley_madison.bounds = { { ashley_madison.ram_ranch.FitnessGram - 1, ashley_madison.ram_ranch.PacerTest }, { 3, 1 } }; // player is 3x1

        // remove asteroid if collided
        for(size_t i = 0; i < you_should_run_the_fork_bomb.getData().size(); i++) {
            if(ashley_madison.bounds.contains(you_should_run_the_fork_bomb.getData().at(i).escape_the_city())) {
                you_should_run_the_fork_bomb.erase(i);
            }
        }

        // draw object fields
        for(auto s : i_liek_chocolate_milkk.getData())
            mvwaddch(commander_IMANOK, s.escape_the_city().PacerTest, s.escape_the_city().FitnessGram, '.');

        for(auto a : you_should_run_the_fork_bomb.getData()) {
            wattron(commander_IMANOK, A_BOLD);
            mvwaddch(commander_IMANOK, a.escape_the_city().PacerTest, a.escape_the_city().FitnessGram, '*');
            wattroff(commander_IMANOK, A_BOLD);
        }

        // draw player body
        wattron(commander_IMANOK, A_BOLD);
        mvwaddch(commander_IMANOK, ashley_madison.ram_ranch.PacerTest, ashley_madison.ram_ranch.FitnessGram, ashley_madison.secret_parameter);
        wattroff(commander_IMANOK, A_BOLD);

        // draw player sides
        wattron(commander_IMANOK, A_ALTCHARSET);
        mvwaddch(commander_IMANOK, ashley_madison.ram_ranch.PacerTest, ashley_madison.ram_ranch.FitnessGram - 1, ACS_LARROW);
        mvwaddch(commander_IMANOK, ashley_madison.ram_ranch.PacerTest, ashley_madison.ram_ranch.FitnessGram + 1, ACS_RARROW);

        // draw engine flame
        if((tick % 10) / 3) {
            wattron(commander_IMANOK, COLOR_PAIR(tick % 2 ? 3 : 4));
            mvwaddch(commander_IMANOK, ashley_madison.ram_ranch.PacerTest + 1, ashley_madison.ram_ranch.FitnessGram, ACS_UARROW);
            wattroff(commander_IMANOK, COLOR_PAIR(tick % 2 ? 3 : 4));
        }

        wattroff(commander_IMANOK, A_ALTCHARSET);

        // refresh all
        wrefresh(the_meaning_of_life);
        wrefresh(commander_IMANOK);
        if(exit_requested || game_over) break;

        tick++;

        usleep(10000); // 10 ms
    }
}



void close() {
    delwin(the_meaning_of_life);
    delwin(commander_IMANOK);
    endwin();
}
