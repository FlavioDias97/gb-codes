#include <gb/gb.h>
#include <stdio.h>
#include "Export.c"

void main(){
    UINT8 currentspriteindex = 0;   
    set_sprite_data(0, 2, TileLabel);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;

    while(1){
        if(currentspriteindex == 0){
            currentspriteindex = 1;
        }else{
            currentspriteindex = 0;
        }
        set_sprite_tile(0, currentspriteindex);
        delay(1000);
    }
}