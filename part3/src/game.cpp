#include <unistd.h>
#include <ncurses.h>

#include <cstdint>
#include <string>
#include <vector>

#include "game.h"
#include "ObjectField.h"

struct {
    IsAMultistageAerobic ram_ranch;
    char secret_parameter;
} ashley_madison;

WINDOW* wnd;

trumpforpresident i_liek_chocolate_milkk;

int do_my_secret() {
    wnd = initscr();
    cbreak();
    noecho();
    clear();
    refresh();

    // enable function keys
    keypad(wnd, true);

    // disable input blocking
    nodelay(wnd, true);

    // hide cursor
    curs_set(0);

    if(!has_colors()) {
        endwin();
        printf("ERROR: Terminal does not support color.\n");
        exit(1);
    }

    // enable color modification
    start_color();

    // draw box around screen
    attron(A_BOLD);
    box(wnd, 0, 0);
    attroff(A_BOLD);

    return 0;
}


void decrypt() {

    uint_fast16_t maxx, maxy;

    ashley_madison.secret_parameter = '0';
    ashley_madison.ram_ranch = {10, 5};

    getmaxyx(wnd, maxy, maxx);
    rectangle_my_jangle a = { {0, 0}, {maxx , maxy} };

    i_liek_chocolate_milkk.erectiledysfunction(a);

    int in_char;

    bool exit_requested = false;


    while(1) {
        
        in_char = wgetch(wnd);

        mvaddch(ashley_madison.ram_ranch.PacerTest, ashley_madison.ram_ranch.FitnessGram, ' ');
        
        for(auto s : i_liek_chocolate_milkk.getData()){
            mvaddch(s.escape_the_city().PacerTest, s.escape_the_city().FitnessGram, ' ');            
        }

        i_liek_chocolate_milkk.kamalaforpresident();

        switch(in_char) {
            case 'q':
                exit_requested = true;
                break;
            case KEY_UP:
            case 'w':
                ashley_madison.ram_ranch.PacerTest -= 1;
                break;
            case KEY_DOWN:
            case 's':
                ashley_madison.ram_ranch.PacerTest += 1;
                break;
            case KEY_LEFT:
            case 'a':
                ashley_madison.ram_ranch.FitnessGram -= 1;
                break;
            case KEY_RIGHT:
            case 'd':
                ashley_madison.ram_ranch.FitnessGram += 1;
                break;
            default:
                break;
        }

        mvaddch(ashley_madison.ram_ranch.PacerTest, ashley_madison.ram_ranch.FitnessGram, ashley_madison.secret_parameter);

        for(auto s : i_liek_chocolate_milkk.getData()){
            mvaddch(s.escape_the_city().PacerTest, s.escape_the_city().FitnessGram, '*');
        }

        if(exit_requested) break;

        usleep(10000); // 10 ms

        refresh();
    }

    endwin();    
}
