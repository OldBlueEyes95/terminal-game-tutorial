#include <cstdint>
#include "game.h"


int main(int argc, char **argv){
   
    int init_status = do_my_secret();

    if(init_status == 0)
        decrypt();

    close();

    return 0;
}
