

#include <stdio.h>
#include <form.h>
#include <ncurses.h>
#include "database_util.h"

#define WIDTH 30
#define HEIGHT 10 
void createChain();
// method for the menu, // metodo para el el menu,
int print_menu(WINDOW *menu_win, int highlight, char *choices[], int n_choices);
void createRule();
void createTable();
void createTableIP();


void createTable();



void createRule(){

	int startx = (80 - WIDTH) / 2;
	int starty = (24 - HEIGHT) / 2;
	clear();
	endwin();
	initscr();
	mvprintw(0,0,"Please select the type of rule");
	refresh();
	char *choices[]={"accept","drop","reject","redirect"};
	int n_choices = sizeof(choices) / sizeof(char *); //numero de opciones //number of options
	WINDOW *menu_win;
	// method to create a menu, it's from ncurses // metodo para crear un menu, es de ncurses
	menu_win = newwin(HEIGHT, WIDTH, starty, startx);
	keypad(menu_win, TRUE); //obtenemos datos del teclado // we get data from the keyboard
	refresh();
	int salida=print_menu(menu_win, 1,choices,n_choices);
	// seleccionamos la salida y vemos que hacemos para crear la tabla
	// we select the output and see what we do to create the table
	switch(salida){
		case 1: //accept, podemos aprovectar la misma window en la que estamos
			//accept, we can deprovecte the same window we're in
			
			break;
		case 2: //drop
			break;
		case 3: //reject
			break;
		case 4: //redirect
			break;



	}
	
}

void createTable(){
	int startx = (80 - WIDTH) / 2;
	int starty = (24 - HEIGHT) / 2;
	clear();
	endwin();
	initscr();
	mvprintw(0,0,"Please select the family");
	refresh();
	char *choices[]={"ip","ip6","arp","nat"};
	int n_choices = sizeof(choices) / sizeof(char *); //numero de opciones //number of options
	WINDOW *menu_win;
	// method to create a menu, it's from ncurses // metodo para crear un menu, es de ncurses
	menu_win = newwin(HEIGHT, WIDTH, starty, startx);
	keypad(menu_win, TRUE); //obtenemos datos del teclado // we get data from the keyboard
	refresh();
	int salida=print_menu(menu_win, 1,choices,n_choices);
	//seleccionamos la salida y vemos que hacemos para crear la tabla
	//we select the output and see what we do to create the table
	switch(salida){
		case 1: //ip
			createTableIP();
			break;
		case 2: //ip6
			break;
		case 3: //arp
			break;
		case 4: //nat
			break;
	}


	
	
}


void createTableIP(){

	FIELD *field[3];
	FORM  *my_form;
	int ch;
	
	/* Initialize curses */
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);

	/* Initialize the fields */
	field[0] = new_field(1, 10, 4, 18, 0, 0);
	field[1] = new_field(1, 10, 6, 18, 0, 0);
	field[2] = NULL;

	/* Set field options */
	set_field_back(field[0], A_UNDERLINE); 	/* Print a line for the option 	*/
	field_opts_off(field[0], O_AUTOSKIP);  	/* Don't go to next field when this */
						/* Field is filled up 		*/
	
	/* Create the form and post it */
	my_form = new_form(field);
	post_form(my_form);
	refresh();
	
	mvprintw(4, 10, "Value 1:");
	
	refresh();

	/* Loop through to get user requests */
	while((ch = getch()) != KEY_F(1))
	{	switch(ch)
		{	case KEY_DOWN:
				/* Go to next field */
				form_driver(my_form, REQ_NEXT_FIELD);
				/* Go to the end of the present buffer */
				/* Leaves nicely at the last character */
				form_driver(my_form, REQ_END_LINE);
				break;
			case KEY_UP:
				/* Go to previous field */
				form_driver(my_form, REQ_PREV_FIELD);
				form_driver(my_form, REQ_END_LINE);
				break;
			default:
				/* If this is a normal character, it gets */
				/* Printed				  */	
				form_driver(my_form, ch);
				break;
		}
	}

	/* // Un post form and free the memory // A post form and free the memory */
	unpost_form(my_form);
	free_form(my_form);
	

	endwin();
	char tableName[80];
	printw("%d",*field[0]);
	refresh();
	getch();
	char command[80];
	snprintf(command, sizeof(command), "nft create table '%s'  > test.txt", tableName);
	system(command);

}




void createChain(){
	
	endwin();
	clear();
	initscr();
	
	printw ("Please select the hook of chain\n");
			
	char *choices[]={"INPUT","OUTPUT","PREROUTE","POSTROUTING","CUSTOM"};
	int num= sizeof(choices) / sizeof(char *);
	WINDOW *menuwin;
	menuwin = newwin(num+10, 30, 5, 5);
	char *tablas[100];
	WINDOW *menu2;
	keypad(menuwin, TRUE);
	refresh();
	int salida=print_menu (menuwin, 1, choices, num);
    
    switch(salida){
        case 1: //input
            // debemos de llamar a las tablas que hay existentes
	    // we should call the tables that are existing
        	 
        	 
        	 
        	 menu2=newwin(num+10,30,5,5);
        	 keypad(menu2,TRUE);
        	 refresh();
        	 *tablas=getTables();
        	 int num2= sizeof(tablas) / sizeof(char *);
        	  salida=print_menu (menuwin, 1,tablas , num2);

            break;
        case 2: //output
            //
            break;
        case 3: // preroute
            //
            break;

        case 4:
            break;        
           // 
       case 5:
            break;
            //
    
    }    
	


}



int print_menu(WINDOW *menu_win, int highlight, char *choices[], int n_choices)
{
    //tarea: modificar metodo para que solo necesite el array de las opciones, que el solo imprima y detecte el menu
    //task: modify method so that you only need the array of options, that the only one prints and detects the menu
	int x, y, i;	

	int choice = 0;
	int c=0;
        
        
	
	while(1)	//infinito para vovler a el desde los ficheros de funciones
	{		//infinite for vovler to the from function files

	

	        x = 2;
	        y = 2;
	        box(menu_win, 0, 0);
	        for(i = 0; i < n_choices; ++i)
	        {	if(highlight == i + 1) /* High light the present choice */
		        {	wattron(menu_win, A_REVERSE); 
			        mvwprintw(menu_win, y, x, "%s", choices[i]);
			        wattroff(menu_win, A_REVERSE);
		        }
		        else
			        mvwprintw(menu_win, y, x, "%s", choices[i]);
		        ++y;
	        }
	        wrefresh(menu_win);



		
		
			// we get the keystrokes // obtenemos las pulsaciones del teclado
		        c = wgetch(menu_win);
		        switch(c)
		        {	case KEY_UP: //flecha arriba //arrow up
			 		// we check that if highlight is 1 (first position) we leave it the same (i.e. we select it as high)
			 		// comprobamos que si highlight es 1 (primera posicion) lo dejamos igual (es decirlo, lo seleccionamos como high)
				        if(highlight == 1)
						// we left it at 1 (n_choises was 0) // lo dejamos a 1 (n_choises era 0)
					        highlight = n_choices;
				        else
						// if it's not one, we're up in position // si no es uno, subimos de posicion
					        --highlight;
				        break;
			        case KEY_DOWN:
				        if(highlight == n_choices)
					        highlight = 1;
					
				        else 
					        ++highlight;
				
				
				        break;
			        case 10:
			 		// case intro, it happens to choose the option // caso intro, pasa a elegir la opcion
				        choice = highlight;
				        break;
			        default:
				        mvprintw(24, 0, "Character pressed is = %3d Hopefully it can be printed as '%c'", c, c);
				        refresh();
				        break;
		        }
		

		        if(choice != 0)	/* se sale del loop infinito, por lo cual procedemos a hacer segun la choise elegida.
					   goes out of the infinite loop, so we proceed to do according to the chosen choice. */
			        break;
		        else
			        continue;
			        //print_menu(menu_win, highlight, choices, n_choices);
	}	
	mvprintw(23, 0, "You chose choice %d with choice string %s\n", choice, choices[choice - 1]);
	
	clrtoeol();
	//here in function of the choice we do the necessary things
	//aqui en funcion de la choice hacemos las cosas necesarias
	refresh();
	//createChain();
	
	return choice;
}


