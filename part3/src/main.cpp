#include <cstdint>

#include "game.h"



int main(int argc, char **argv){
    // parse 
    // quiz q;
    // quiz();
    
    int init_status = do_my_secret(); 

    if(init_status == 0)
        decrypt();

    return 0;
}
