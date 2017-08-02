#include <stdio.h>
//#include <iostream>

#include <stdlib.h>   //system function in c
//#include <cstdlib>      //system function in cpp

#include <string.h>
//#include <string>

#include <curses.h>   //wgetch,getch,...


void init();
void view_show(int arr[4][4]);
void control_rotation_right(int arr[4][4]);

//model     :   data
int block[4][4] = {{0,1,0,0},
                   {0,1,1,0},
                   {0,0,1,0},
                   {0,0,0,0}};
int new_block[4][4];

int main(){
    init();
    int ch;
    
    view_show(block);
    while(1){
        ch=getch();
        
        switch(ch){
            case KEY_UP:
                control_rotation_right(block);
                view_show(block);
                break;
//            case KEY_LEFT:
//                control_move_right();
//                break;
//            case KEY_LEFT:
//                control_move_left();
//                break;
//            case KEY_DOWN:
//                control_move_down();
//                break;
        }
    }
    endwin();
    return 0;
}

void init(){
    initscr();
    keypad(stdscr,TRUE);

    return;
}

//view      :   screen
void view_show(int block[4][4]){
    system("clear");
    for (int x=0;x<4;x++){
        for (int y=0;y<4;y++){
            if (block[x][y] == 1)
                printw("■ ");
            else if (block[x][y] == 0)
                printw("□ ");
        }
        printw("\n");
    }
    return;
}


//control   :   motion
void control_rotation_right(int block[4][4]){
    for (int x=0;x<4;x++){
        for (int y=0;y<4;y++){
            new_block[y][-x+3]=block[x][y];
        }
    }
    for (int x=0;x<4;x++){
        for (int y=0;y<4;y++){
            block[x][y]=new_block[x][y];
        }
    }
    return;
}


