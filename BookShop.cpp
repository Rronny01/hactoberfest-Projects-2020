#include <fstream.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>

void normalwindow(){
	window(1,1,80,25);
	textbackground(1);
	clrscr();
}
void winup(){
	window(1,1,80,1);
	textbackground(7);
	clrscr();
}

void wincenter(){
	window(1,2,80,24);
	textbackground(9);
	clrscr();
}

void windown(){
	window(1,25,80,25);
	textbackground(7);
	textcolor(2);
	clrscr();
}
void textdown(){
	windown();
	gotoxy(5,1);
	cputs("PRESENTATION OF JNV JALGAON.");
	struct date d;
	getdate(&d);
	textcolor(254);
	gotoxy(63,1);
	cputs("(");
	gotoxy(76,1);
	cputs(") <-");
	if(d.da_day<10){
		gotoxy(65,1);
		cputs("0");
		gotoxy(66,1);
		cprintf("%d/", d.da_day);
	}else{
		gotoxy(65,1);
		cprintf("%d/", d.da_day);
	}
	if(d.da_mon<10){
		gotoxy(68,1);
		cputs("0");
		gotoxy(69,1);
		cprintf("%d/", d.da_mon);
	}else{
		gotoxy(68,1);
		cprintf("%d/", d.da_mon);
	}
	gotoxy(71,1);
	cprintf("%d", d.da_year);
	textcolor(2);
}
void textup(){
	winup();
	textcolor(RED);
	gotoxy(2,1);
	cputs("ð");
	textcolor(RED);
	gotoxy(4,1);
	cputs("E");
	textcolor(BLACK);
	gotoxy(5,1);
	cputs("xit ");
	gotoxy(9,1);
	cputs("( Press     )");
	textcolor(RED);
	gotoxy(17,1);
	cputs("Esc"); // 27
	gotoxy(60,1);
	cputs("A");
	textcolor(BLACK);
	gotoxy(61,1);
	cputs("bout");
	gotoxy(66,1);
	cputs("( Press    )");
	textcolor(RED);
	gotoxy(74,1);
	cputs("F1");   // 59
}
void back(){
	_setcursortype(_NOCURSOR);
	textup();
	textdown();
	wincenter();
	gotoxy(1,1);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,2);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,3);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,4);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,5);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,6);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,7);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,8);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,9);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,10);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,11);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,12);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,13);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,14);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,15);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,16);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,17);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,18);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,19);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,20);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,21);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,22);
	puts("ÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄÄÄÅÄÄ");
	gotoxy(1,23);
	puts("  ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³    ³");
	gotoxy(1,24);
}
void graph(){
	back();
	textcolor(0);
	gotoxy(55,5);
	cputs("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
	gotoxy(79,4);
	cputs("Û");
	gotoxy(79,3);
	cputs("Û");
	gotoxy(3,6);
	cputs("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
	gotoxy(31,4);
	cputs("Û");
	gotoxy(31,5);
	cputs("Û");
	textcolor(1);
	textbackground(6);
	gotoxy(54,2);
	cputs("ROSHAN MORE");
	gotoxy(54,3);
	cputs("TEACHER SHAILENDRA SIR");
	gotoxy(54,4);
	cputs("    ---------x--------   ");
	textcolor(4);
	textbackground(7);
	gotoxy(2,3);
	cputs("   JNV JALGAON   ");
	gotoxy(2,4);
	cputs(" Faculty of Computer Science ");
	gotoxy(2,5);
	cputs("      ---------x--------     ");
}
void about_me(){
	// RANA ABDUL WAHEED
	// Class MCS
	// Lecturer:MR TANVEER SB
	char *word[]={"JNV JALGAON","Student's Name: ","HARSHAL kSHIRSAGAR","Bilal Chattha","Lecturer: ","Malik Tanveed"};
	textcolor(0);
	gotoxy(21,21);
	cputs("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
	gotoxy(64,20);
	cputs("Û");
	gotoxy(64,19);
	cputs("Û");
	gotoxy(64,18);
	cputs("Û");

	gotoxy(64,15);
	cputs("Û");
	gotoxy(64,16);
	cputs("Û");
	gotoxy(64,17);
	cputs("Û");
	gotoxy(64,14);
	cputs("Û");
	gotoxy(64,13);
	cputs("Û");
	gotoxy(64,12);
	cputs("Û");
	gotoxy(64,11);
	cputs("Û");
	textcolor(11);
	textbackground(12);
	gotoxy(20,10);
	cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	gotoxy(20,11);
	cputs("º                                          º");
	gotoxy(20,12);
	cputs("ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	gotoxy(20,13);
	cputs("º                                          º");
	gotoxy(20,14);
	cputs("º                                          º");
	gotoxy(20,15);
	cputs("º                                          º");
	gotoxy(20,16);
	cputs("º                                          º");
	gotoxy(20,17);
	cputs("º                                          º");
	gotoxy(20,18);
	cputs("º                                          º");
	gotoxy(20,19);
	cputs("º                                          º");
	gotoxy(20,20);
	cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	gotoxy(50,11);
	for(int i=0;i<strlen(word[0]);i++){
		gotoxy(32+i,11);
		cprintf("%c",word[0][i]);
		delay(100);
	}
	textcolor(10);
	for(i=0;i<strlen(word[4]);i++){
		gotoxy(22+i,13);
		cprintf("%c",word[4][i]);
		delay(50);
	}
	for(i=0;i<strlen(word[5]);i++){
		gotoxy(40+i,13);
		cprintf("%c",word[5][i]);
		delay(50);
	}
	textcolor(253);
	gotoxy(35,15);
	cputs("--------------");
	gotoxy(35,16);
	cputs("   CLASS MCS  ");
	gotoxy(35,17);
	cputs("--------------");
	textcolor(9);
	for(i=0;i<strlen(word[1]);i++){
		gotoxy(22+i,18);
		cprintf("%c",word[1][i]);
		delay(50);
	}
	for(i=0;i<strlen(word[2]);i++){
		gotoxy(40+i,18);
		cprintf("%c",word[2][i]);
		delay(50);
	}
	for(i=0;i<strlen(word[3]);i++){
		gotoxy(40+i,19);
		cprintf("%c",word[3][i]);
		delay(50);
	}
	textcolor(253);
	gotoxy(35,15);
	cputs("--------------");
	gotoxy(35,16);
	cputs("   CLASS A1   ");
	gotoxy(35,17);
	cputs("--------------");
	getch();
}
void logo(){
	textcolor(0);
	gotoxy(21,21);
	cputs("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
	gotoxy(64,20);
	cputs("Û");
	gotoxy(64,19);
	cputs("Û");
	gotoxy(64,18);
	cputs("Û");

	gotoxy(64,15);
	cputs("Û");
	gotoxy(64,16);
	cputs("Û");
	gotoxy(64,17);
	cputs("Û");
	gotoxy(64,14);
	cputs("Û");
	gotoxy(64,13);
	cputs("Û");
	gotoxy(64,12);
	cputs("Û");
	gotoxy(64,11);
	cputs("Û");
	textcolor(251);
	textbackground(12);
	gotoxy(20,10);
	cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	gotoxy(20,11);
	cputs("º                  JNV JALGAON             º");
	gotoxy(20,12);
	cputs("ÌÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	gotoxy(20,13);
	cputs("º   º                                      º");
	gotoxy(20,14);
	cputs("º   º                                      º");
	gotoxy(20,15);
	cputs("º   º                                      º");
	gotoxy(20,16);
	cputs("º   º                                      º");
	gotoxy(20,17);
	cputs("º   º                                      º");
	gotoxy(20,18);
	cputs("º   º                                      º");
	gotoxy(20,19);
	cputs("º   º                                      º");
	gotoxy(20,20);
	cputs("ÈÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	textcolor(14);
	gotoxy(26,13);
	cputs("Add Book To Stock ");
	gotoxy(26,14);
	cputs("Sell Book From Stock ");
	gotoxy(26,15);
	cputs("View Book Sold so far ");
	gotoxy(26,16);
	cputs("View Book In Stock ");
	gotoxy(26,17);
	cputs("Search Book In Stock ");
	gotoxy(26,18);
	cputs("Delete Book From Stock ");
	gotoxy(26,19);
	cputs("Exit ");
}


void gra_input(){
	textcolor(0);
	gotoxy(10,22);
	cputs("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
	gotoxy(74,10);
	cputs("ÛÛ");
	gotoxy(74,11);
	cputs("ÛÛ");
	gotoxy(74,12);
	cputs("ÛÛ");
	gotoxy(74,13);
	cputs("ÛÛ");
	gotoxy(74,14);
	cputs("ÛÛ");
	gotoxy(74,15);
	cputs("ÛÛ");
	gotoxy(74,16);
	cputs("ÛÛ");
	gotoxy(74,17);
	cputs("ÛÛ");
	gotoxy(74,18);
	cputs("ÛÛ");
	gotoxy(74,19);
	cputs("ÛÛ");
	gotoxy(74,20);
	cputs("ÛÛ");
	gotoxy(74,21);
	cputs("ÛÛ");

	textcolor(14);
	gotoxy(30,8);
	cputs("***  ADD NEW RECORD  ***");
	textcolor(5);
	textbackground(11);

	gotoxy(8,9);
	cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	gotoxy(8,10);
	cputs("º Book's Title:  º ");
	gotoxy(72,10);
	cputs(" º");
	gotoxy(8,11);
	cputs("ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	gotoxy(8,12);
	cputs("º Book's ID:     º ");
	gotoxy(46,12);
	cputs(" º Date:     º ");
	gotoxy(72,12);
	cputs(" º");
	gotoxy(8,13);
	cputs("ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	gotoxy(8,14);
	cputs("º Author:        º ");
	gotoxy(72,14);
	cputs(" º");
	gotoxy(8,15);
	cputs("ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	gotoxy(8,16);
	cputs("º Category:      º ");
	gotoxy(72,16);
	cputs(" º");
	gotoxy(8,17);
	cputs("ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	gotoxy(8,18);
	cputs("º Quantity of Book: º ");
	gotoxy(72,18);
	cputs(" º");
	gotoxy(8,19);
	cputs("ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	gotoxy(8,20);
	cputs("º Book's Price:  º ");
	gotoxy(72,20);
	cputs(" º");
	gotoxy(8,21);
	cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	textbackground(0);
	gotoxy(27,10);
	cputs("                                             ");
	gotoxy(27,12);
	cputs("                   ");
	gotoxy(61,12);
	cputs("           ");
	gotoxy(27,14);
	cputs("                                             ");
	gotoxy(27,16);
	cputs("                                             ");
	gotoxy(27,18);
	cputs("                                             ");
	gotoxy(27,20);
	cputs("                                             ");

}

void gra_output(){
	textcolor(14);
	gotoxy(27,8);
	cputs("***  DISPLAY BOOK IN STOCK  ***");
	textcolor(5);
	textbackground(11);
	gotoxy(4,9);
	cputs("ÉÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍËÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍ»");
	gotoxy(4,10);
	cputs("º  N§  º Book ID º   Book Title or Name          º Quan º Price º Total  º");
	gotoxy(4,11);
	cputs("ÌÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÎÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍ¹");
	gotoxy(4,12);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,13);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,14);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,15);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,16);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,17);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,18);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,19);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,20);
	cputs("ÈÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÊÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍ¼");
}
void gra_sell(){
	textcolor(14);
	gotoxy(27,8);
	cputs("***  DISPLAY BOOK OUT STOCK  ***");
	textcolor(5);
	textbackground(11);
	gotoxy(4,9);
	cputs("ÉÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍËÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍ»");
	gotoxy(4,10);
	cputs("º  N§  º Book ID º   Book Title or Name          º Quan º Price º Total  º");
	gotoxy(4,11);
	cputs("ÌÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÎÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍ¹");
	gotoxy(4,12);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,13);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,14);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,15);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,16);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,17);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,18);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,19);
	cputs("º      º         º                               º      º       º        º");
	gotoxy(4,20);
	cputs("ÈÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÊÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍ¼");
}

struct lib{
	char name[80];
	char id[5];
	char author[20];
	char date[11];
	short int number;
	char category[20];
	float cost;
	float total;
};

class library{
	protected:
		lib book[200];
		static int count;
		static int index;
	public:
		library();
		~library()
			{cout<<"Done";}
		void book_sell();
		void read_file();
		void write_file();
		void input_data();
		void output_data();
		void find_count();
		void find_book();
		void search_book();
		void delete_book();
		void scand_book();
		void sort_book();
		void sort_sell();
		void out_book();
};

int library::count=-1;
int library::index=119;

library::library(){
	for(int i=0;i<200;i++){
		strcpy(book[i].name,"");
		strcpy(book[i].id,"");
		strcpy(book[i].author,"");
		strcpy(book[i].date,"");
		strcpy(book[i].category,"");
		book[i].number=0;
		book[i].cost=0;
		book[i].total=0;
	}
}

void library::find_count(){
	for(int i=0;strcmp(book[i].id,"")!=0;i++);
	count = i - 1;
	for(int j=120;strcmp(book[j].id,"")!=0;j++);
	index = j - 1;
}

void library::read_file(){
	ifstream infile;
	infile.open("book.db", ios::ate);
	if(infile)
	infile.read((char*)this,sizeof(*this));
}

void library::write_file(){
	ofstream outfile;
	outfile.open("book.DAT",ios::ate);
	if(outfile){
		outfile.write((char*)this,sizeof(*this));
	}else{
		cout<<"\n Cannot Open This file! \n";
		exit(1);
	}
	outfile.close();
}

void library::input_data(){
	_setcursortype(_SOLIDCURSOR);
	gotoxy(27,10);
	gets(book[++count].name);
	id_con:
	gotoxy(27,12);
	gets(book[count].id);
	if((strlen(book[count].id))<4 || (strlen(book[count].id))>4){
		gotoxy(27,12);
		cout << "         ";
		goto id_con;
	}
	gotoxy(61,12);
	gets(book[count].date);
	gotoxy(27,14);
	gets(book[count].author);
	gotoxy(27,16);
	gets(book[count].category);
	gotoxy(27,18);
	cin >> book[count].number;
	gotoxy(27,20);
	cin >> book[count].cost;
	cin.get();
	book[count].total = book[count].number * book[count].cost;
	scand_book();
}

void library::book_sell(){
	char subject[10], ch;
	int change, too, taa=0;
	float price;
	play:
	normalwindow();
	graph();
	textbackground(9);
	textcolor(11);
	gotoxy(20,10);
	cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	gotoxy(20,11);
	cputs("º Enter Book's ID : º               º");
	gotoxy(20,12);
	cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	_setcursortype(_SOLIDCURSOR);
	gotoxy(42,11);
	cin >> subject;
	for(int i=0;i<=count;i++){
		if(strcmp(book[i].id, subject)==0){
			too = i;
			taa = 1;
		}
	}
	if(taa==1){
		_setcursortype(_NOCURSOR);
		textbackground(3);
		textcolor(11);
		gotoxy(8,14);
		cputs("ÉÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍËÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍ»");
		gotoxy(8,15);
		cputs("º Book ID º   Book Title or Name          º Quan º Price º Total  º");
		gotoxy(8,16);
		cputs("ÌÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÎÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍ¹");
		gotoxy(8,17);
		cputs("º         º                               º      º       º        º");
		gotoxy(8,18);
		cputs("ÈÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÊÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍ¼");
		textcolor(12);
		gotoxy(11,17);
		cputs(book[too].id);
		gotoxy(22,17);
		cputs(book[too].name);
		gotoxy(53,17);
		cprintf("%d",book[too].number);
		gotoxy(59,17);
		cprintf("%.2f",book[too].cost);
		gotoxy(67,17);
		cprintf("%.2f",book[too].total);
		textbackground(5);
		textcolor(252);
		gotoxy(12,20);
		cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		gotoxy(12,21);
		cputs("º  HOW MANY BOOK DO YOU WANT TO SELL :     AND COST:       º");
		gotoxy(12,22);
		cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		Again:
		_setcursortype(_SOLIDCURSOR);
		gotoxy(51,21);
		cin >> change;
		if(change>book[too].number){
			gotoxy(51,21);
			printf("   ");
			goto Again;
		}else{
			gotoxy(65,21);
			cin >> price;
			book[too].number = book[too].number - change;
			if(book[too].number==0){
				strcpy(book[++index].id,book[too].id);
				strcpy(book[index].name,book[too].name);
				strcpy(book[index].date,book[too].date);
				strcpy(book[index].author,book[too].author);
				strcpy(book[index].category,book[too].category);
				book[index].number = change;
				book[index].cost = price;
				book[index].total = book[index].number * book[index].cost;
				strcpy(book[count].id,"");
			}else{
				book[too].number = book[too].number;
				book[too].cost = book[too].cost;
				book[too].total = book[too].number * book[too].cost;
				strcpy(book[++index].id,book[too].id);
				strcpy(book[index].name,book[too].name);
				strcpy(book[index].date,book[too].date);
				strcpy(book[index].author,book[too].author);
				strcpy(book[index].category,book[too].category);
				book[index].number = change;
				book[index].cost = price;
				book[index].total = book[index].number * book[index].cost;
			}
		}
	}
	if(taa==0){
		textbackground(9);
		textcolor(259);
		gotoxy(20,10);
		cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		gotoxy(20,11);
		cputs("º         Invalid Book's ID         º");
		gotoxy(20,12);
		cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		textcolor(12);
		gotoxy(18,15);
		cputs("  Do you want to quit or continue (y/n). ");
		ch = toupper(getch());
	}
	if(ch == 'Y') goto play;

}

void library::output_data(){
	if(count==-1){
		textbackground(6);
		textcolor(253);
		gotoxy(20,10);
		cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		gotoxy(20,11);
		cputs("º          NO DATA IN STOCK         º");
		gotoxy(20,12);
		cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	}else{
		gra_output();
		textcolor(RED);
		int change=12;
		for(int i=0;i<=count;i++){
			gotoxy(7,change+i);
			cprintf("%d",i+1);
			gotoxy(13,change+i);
			cputs(book[i].id);
			gotoxy(25,change+i);
			cputs(book[i].name);
			gotoxy(56,change+i);
			cprintf("%d",book[i].number);
			gotoxy(62,change+i);
			cprintf("%.2f",book[i].cost);
			gotoxy(70,change+i);
			cprintf("%.2f",book[i].total);
			if((i+1)%8==0){
				textcolor(252);
				gotoxy(30,22);
				cputs(" Press any key to Continue...");
				getch();
				change = change - 8;
				gra_output();
				textcolor(RED);
			}
		}

	}
	getch();
}

void library::out_book(){
	if(index==119){
		textbackground(6);
		textcolor(253);
		gotoxy(20,10);
		cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		gotoxy(20,11);
		cputs("º         NO DATA OUT STOCK         º");
		gotoxy(20,12);
		cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	}else{
		gra_sell();
		textcolor(RED);
		int change=11;
		int plus=0;
		for(int i=120;i<=index;i++){
			plus++;
			gotoxy(7,change+plus);
			cprintf("%d",plus);
			gotoxy(13,change+plus);
			cputs(book[i].id);
			gotoxy(25,change+plus);
			cputs(book[i].name);
			gotoxy(56,change+plus);
			cprintf("%d",book[i].number);
			gotoxy(62,change+plus);
			cprintf("%.2f",book[i].cost);
			gotoxy(70,change+plus);
			cprintf("%.2f",book[i].total);
			if((i+1)%8==0){
				textcolor(252);
				gotoxy(30,22);
				cputs(" Press any key to Continue...");
				getch();
				change = change - 8;
				gra_output();
				textcolor(RED);
			}
		}

	}
	getch();
}

void library::find_book(){
	char subject[10], ch;
	int taa=0, too;
	play:
	normalwindow();
	graph();
	textbackground(5);
	textcolor(12);
	gotoxy(20,10);
	cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	gotoxy(20,11);
	cputs("º Enter Book's ID : º               º");
	gotoxy(20,12);
	cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	_setcursortype(_SOLIDCURSOR);
	gotoxy(42,11);
	cin >> subject;
	for(int i=0;i<=count;i++){
		if(strcmp(book[i].id, subject)==0){
			too = i;
			taa = 1;
		}
	}
	if(taa==1){
		_setcursortype(_NOCURSOR);
		textbackground(3);
		textcolor(11);
		gotoxy(8,14);
		cputs("ÉÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍËÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍ»");
		gotoxy(8,15);
		cputs("º Book ID º   Book Title or Name          º Quan º Price º Total  º");
		gotoxy(8,16);
		cputs("ÌÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÎÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍ¹");
		gotoxy(8,17);
		cputs("º         º                               º      º       º        º");
		gotoxy(8,18);
		cputs("ÈÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÊÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍ¼");
		textcolor(12);
		gotoxy(11,17);
		cputs(book[too].id);
		gotoxy(22,17);
		cputs(book[too].name);
		gotoxy(53,17);
		cprintf("%d",book[too].number);
		gotoxy(59,17);
		cprintf("%.2f",book[too].cost);
		gotoxy(67,17);
		cprintf("%.2f",book[too].total);
		getch();
	}
	if(taa==0){
		textbackground(9);
		textcolor(259);
		gotoxy(20,10);
		cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		gotoxy(20,11);
		cputs("º         Invalid Book's ID         º");
		gotoxy(20,12);
		cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		textcolor(12);
		gotoxy(18,15);
		cputs("  Do you want to quit or continue (y/n). ");
		ch = toupper(getch());
	}
	if(ch == 'Y') goto play;

}

void library::scand_book(){
	for(int i=0;i<=count-1;i++){
		if(strcmp(book[i].id,book[count].id)==0){
			strcpy(book[i].id,book[count].id);
			strcpy(book[i].name,book[count].name);
			strcpy(book[i].date,book[count].date);
			strcpy(book[i].author,book[count].author);
			strcpy(book[i].category,book[count].category);
			book[i].number = book[i].number + book[count].number;
			book[i].cost = book[i].cost;
			book[i].total = book[i].total + book[count].total;
			strcpy(book[count].id,"");
		}
	}

}

void library::delete_book(){
	char subject[10], ch;
	int taa=0, too;
	play:
	normalwindow();
	graph();

	textbackground(9);
	textcolor(11);
	gotoxy(20,10);
	cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	gotoxy(20,11);
	cputs("º Enter Book's ID : º               º");
	gotoxy(20,12);
	cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	_setcursortype(_SOLIDCURSOR);
	gotoxy(42,11);
	cin >> subject;
	for(int i=0;i<=count;i++){
		if(strcmp(book[i].id, subject)==0){
			too = i;
			taa = 1;
		}
	}
	if(taa==1){
		_setcursortype(_NOCURSOR);
		textbackground(3);
		textcolor(11);
		gotoxy(8,14);
		cputs("ÉÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍËÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍ»");
		gotoxy(8,15);
		cputs("º Book ID º   Book Title or Name          º Quan º Price º Total  º");
		gotoxy(8,16);
		cputs("ÌÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÎÍÍÍÍÍÍÎÍÍÍÍÍÍÍÎÍÍÍÍÍÍÍÍ¹");
		gotoxy(8,17);
		cputs("º         º                               º      º       º        º");
		gotoxy(8,18);
		cputs("ÈÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÊÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍ¼");
		textcolor(12);
		gotoxy(11,17);
		cputs(book[too].id);
		gotoxy(22,17);
		cputs(book[too].name);
		gotoxy(53,17);
		cprintf("%d",book[too].number);
		gotoxy(59,17);
		cprintf("%.2f",book[too].cost);
		gotoxy(67,17);
		cprintf("%.2f",book[too].total);
		textbackground(5);
		textcolor(252);
		gotoxy(20,20);
		cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		gotoxy(20,21);
		cputs("º  Do you want delete this book (y/n)  º");
		gotoxy(20,22);
		cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		ch = toupper(getch());
		if(ch=='Y'){
			strcpy(book[too].id,book[count].id);
			strcpy(book[too].name,book[count].name);
			strcpy(book[too].date,book[count].date);
		strcpy(book[too].author,book[count].author);
			strcpy(book[too].category,book[count].category);
			book[too].number = book[count].number;
			book[too].cost = book[count].cost;
			book[too].total = book[count].total;
			strcpy(book[count].id,"");
		}
	}
	if(taa==0){
		textbackground(9);
		textcolor(259);
		gotoxy(20,10);
		cputs("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		gotoxy(20,11);
		cputs("º         Invalid Book's ID         º");
		gotoxy(20,12);
		cputs("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		textcolor(12);
		gotoxy(18,15);
		cputs("  Do you want to quit or continue (y/n). ");
		ch = toupper(getch());
	}
	if(ch == 'Y') goto play;
}

void library::sort_book(){
	lib temp;
	for(int i=1;i<=count;i++){
		temp=book[i];
		for(int j=i-1;j>=0 && (strcmpi(temp.id,book[j].id)<0);j--)
		book[j+1]=book[j];
		book[j+1]=temp;
	}
}


void main(){
	int a, b=1;
	char ch;
	library book;
	Again:
	book.read_file();
	book.find_count();
	graph();
	logo();
	while(1){
		_setcursortype(_NOCURSOR);
		kea:for(a=1;a<=7;++a){
			if(a==b){
				textcolor(9);
				if (b==1){
					gotoxy(21,13);
					cputs("  ");
				}else if (b==2){
					gotoxy(21,14);
					cputs("  ");
				}else if (b==3){
					gotoxy(21,15);
					cputs("  ");
				}else if (b==4){
					gotoxy(21,16);
					cputs("  ");
				}else if (b==5){
					gotoxy(21,17);
					cputs("  ");
				}else if (b==6){
					gotoxy(21,18);
					cputs("  ");
				}else if (b==7){
					gotoxy(21,19);
					cputs("  ");
				}
			}else{
				textcolor(14);
				if (a==1){
					gotoxy(21,13);
					cputs("   ");
				}else if (a==2) {
					gotoxy(21,14);
					cputs("   ");
				}else if (a==3) {
					gotoxy(21,15);
					cputs("   ");
				}else if (a==4) {
					gotoxy(21,16);
					cputs("   ");
				}else if (a==5) {
					gotoxy(21,17);
					cputs("   ");
				}else if (a==6) {
					gotoxy(21,18);
					cputs("   ");
				}else if (a==7) {
					gotoxy(21,19);
					cputs("   ");
				}
			}
		}
		while (ch != 27){
			ch=getch();
			if (ch==13){
				if (b==1){
					normalwindow();
					graph();
					gra_input();
					book.input_data();
					book.sort_book();
					book.write_file();
					goto Again;
				}else if (b==2){
					normalwindow();
					graph();
					book.book_sell();
					book.write_file();
					goto Again;
				}else if (b==3){
					normalwindow();
					graph();
					book.out_book();
					goto Again;
				}else if (b==4){
					normalwindow();
					graph();
					book.output_data();
					goto Again;
				}else if (b==5){
					normalwindow();
					graph();
					book.find_book();
					goto Again;
				}else if (b==6){
					normalwindow();
					graph();
					book.delete_book();
					book.write_file();
					goto Again;
				}else if(b==7){
					book.sort_book();
					book.write_file();
					exit(1);
				}
			}
			if (ch==0){
				ch=getch();
				if (ch==80){
					b++;
					if (b>7) b=1;
					goto kea;
				}
				if (ch==72){
					b--;
					if (b<1) b=7;
					goto kea;
				}
				if(ch==59){
					normalwindow();
					graph();
					about_me();
					goto Again;
				}
			}
		}
		book.sort_book();
		book.write_file();
		exit(1);
	}
}
