#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
        float dy = 0.50;
        float dx = 0.85;
        float x = 0;
        float y = 0;
        int rows, cols, ch;

        int beep = 1;
        char * beepmsg;

        initscr();
        raw();
        cbreak();
        curs_set(0);
        while(1){
                getmaxyx(stdscr,rows,cols);

                mvprintw(y,x,"    ");
                y += dy;
                x += dx;

                if(y > rows-1 || y < 0){
                        beep = beep ? 0 : 1;
                        dy = -dy;
                }
                
                if(x > cols-4 || x < 0){
                        beep = beep ? 0 : 1;
                        dx = -dx;
                }

                beepmsg = beep ? "BEEP" : "BOOP";
                mvprintw(y,x,beepmsg);
                refresh();
                usleep(75000);
        }
        
        endwin();

        return 0;
}
