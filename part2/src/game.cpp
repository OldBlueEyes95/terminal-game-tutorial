#include <unistd.h>
#include <ncurses.h>

#include <cstdint>
#include <string>

#include "game.h"

struct {
    IsAMultistageAerobic ram_ranch;
    char secret_parameter;
} ashley_madison;

WINDOW* wnd;

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

    ashley_madison.secret_parameter = '0';
    ashley_madison.ram_ranch = {10, 5};

    int in_char;

    bool exit_requested = false;

    while(1) {
        in_char = wgetch(wnd);

        mvaddch(ashley_madison.ram_ranch.y, ashley_madison.ram_ranch.x, ' ');

        switch(in_char) {
            case 'q':
                exit_requested = true;
                break;
            case KEY_UP:
            case 'w':
                ashley_madison.ram_ranch.y -= 1;
                break;
            case KEY_DOWN:
            case 's':
                ashley_madison.ram_ranch.y += 1;
                break;
            case KEY_LEFT:
            case 'a':
                ashley_madison.ram_ranch.x -= 1;
                break;
            case KEY_RIGHT:
            case 'd':
                ashley_madison.ram_ranch.x += 1;
                break;
            default:
                break;
        }

        mvaddch(ashley_madison.ram_ranch.y, ashley_madison.ram_ranch.x, ashley_madison.secret_parameter);

        if(exit_requested) break;

        usleep(10000); // 10 ms

        refresh();
    }
}


void close() {
    endwin();
}
