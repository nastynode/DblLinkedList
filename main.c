#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>


/**
 * This is just a file to test implementation of doubly linked list
 * 
 * for our example we'll have a doubly linked list of strings representing a user's web history
 * 
 * can go forward, back, and to new site
 */
int main(void){
	
	char msg[30];
	char temp[30];
	int row, col;
	/*Initiliaze ncurses*/
	initscr();
	getmaxyx(stdscr, row, col);
	
	char econ[30];
	sprintf(econ, "%c", ((char) 27));

	while(ch != 27){
		mvprintw(1, 1, "%s", "Use the left and right arrows to navigate forward and back");
		mvprintw(2, 1, "%s", "Press \"Enter\" to add url to browsing history");
		strcpy(msg, " ");
		
		mvprintw(4, 4, "%s", "Last command: ");

		ch = getch();
	}
	

	endwin();

	return 0;
}
