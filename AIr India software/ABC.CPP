

#include <iostream.h> // Allowing both input and output on a stream.
#include <fstream.h>  // Provides for simultaneous input and output on a file
#include <process.h>  // for exit()
#include <string.h>   // for strlen
#include <stdlib.h>   // for time
#include <stdio.h>    // for gets, puts, remove
#include <ctype.h>    // for isupper,islower,toupper,tolower
#include <conio.h>    // for clear screen , getch()
#include <dos.h>      // for date & time


struct dat
{
	int d;
	int m;
	int y;
};

class anew
{	public:
	char nom[20];
	char pno[20];
	char sno[20];
	char ac[10];
	dat kentry;
	char place[20];
	char snag[50];
	long wno;
	char name[20];
	char sec[20];
	char status[15];
	dat kexit;
	char remarks[50];

	anew()
	{      strcpy(	nom," ");
	 strcpy(	pno," ");
	       strcpy(	sno," ");
		strcpy(ac," ");
		kentry.d=0; kentry.m=0; kentry.y=0;
	       strcpy(	place," ");
	   strcpy(	snag," ");
		wno=0;
	     strcpy(	name," ");
	      strcpy(	sec," ");
	      strcpy(	status,"under repair");
		kexit.d=0; kexit.m=0; kexit.y=0;
	       strcpy(	remarks," ");
	}


	void entry()
	{	char c;

		again:

		clrscr();
		cout<<"enter nomenclature\n";
		gets(nom);
		cout<<"enter workorder number\n";
		cin>>wno;
		cout<<"enter part number\n";
		gets(pno);
		cout<<"enter serial number\n";
		gets(sno);
		cout<<"enter date of entry(dd/mm/yyyy)\n";
		cin>>kentry.d; cout<<"/"; cin>>kentry.m; cout<<"/"; cin>>kentry.y;
		cout<<"enter aircraft from which the part was removed\n";
		gets(ac);
		cout<<"enter place of removal of part\n";
		gets(place);
		cout<<"enter snag\n";
		gets(snag);
		cout<<"enter name of technician/engineer alotted\n";
		gets(name);
		cout<<"enter section/bench\n";
		gets(sec);
		
		cout<<"\n want to save this record??(y/n)\n";
		cin>>c;
		
		if(c!='y')
		goto again;
	}

	void release()
	{	
		strcpy(status,"released");
		cout<<"\nenter date of exit(dd/mm/yyyy)\n";
		cin>>kexit.d; cout<<"/"; cin>>kexit.m; cout<<"/"; cin>>kexit.y;
		cout<<"\nenter workdone on the part and time taken\n";
		gets(remarks);
	}

	void scrap()
	{
	       strcpy(status,"scraped");
		cout<<"\nenter date of exit(dd/mm/yyyy)\n";
		cin>>kexit.d; cout<<"/"; cin>>kexit.m; cout<<"/"; cin>>kexit.y;
		cout<<"\nenter reason for being scraped\n";
		gets(remarks);
	}

	
	void vendor()
	{	
	       strcpy(	status,"vendor");
		cout<<"\nenter date of exit(dd/mm/yyyy)\n";
		cin>>kexit.d; cout<<"/"; cin>>kexit.m; cout<<"/"; cin>>kexit.y;
		cout<<"\nenter reason for being sent to vendor\n";
		gets(remarks);
	}


	void disp()
	{cout<<"\n status : "<<status;
		cout<<"\n nomenclature : "<<nom;
		cout<<"\n workorder number : "<<wno;
		cout<<"\n part number : "<<pno;
		cout<<"\n serial number : "<<sno;
		cout<<"\n aircraft from which the part was removed : "<<ac;
		cout<<"\n date of entry : "<<kentry.d<<"/"<<kentry.m<<"/"<<kentry.y;
		cout<<"\n place of removal of part : "<<place;
		cout<<"\n snag : "<<snag;
		cout<<"\n name of technician/engineer alotted : "<<name;
		cout<<"\n section/bench : "<<sec;cout<<"\n\n\n";
		
	}

	
	void dispm()
	{cout<<"\n status : "<<status;
		cout<<"\n nomenclature : "<<nom;
		cout<<"\n workorder number : "<<wno;
		cout<<"\n part number : "<<pno;
		cout<<"\n serial number : "<<sno;
		cout<<"\n aircraft from which the part was removed : "<<ac;
		cout<<"\n date of entry : "<<kentry.d<<"/"<<kentry.m<<"/"<<kentry.y;
		cout<<"\n place of removal of part : "<<place;
		cout<<"\n snag : "<<snag;
		cout<<"\n name of technician/engineer alotted : "<<name;
		cout<<"\n section/bench : "<<sec;
		cout<<"\n date of exit : "<<kexit.d<<"/"<<kexit.m<<"/"<<kexit.y;
		cout<<"\n remarks : "<<remarks;cout<<"\n\n\n";
	}


	

	void disps(char s[])
	{
		if(strcmp(s,sno)==0)
		{
			cout<<"\n status : "<<status;
			cout<<"\n nomenclature : "<<nom;
			cout<<"\n part number : "<<pno;
			cout<<"\n serial number : "<<sno;
			cout<<"\n aircraft from which the part was removed : "<<ac;
			cout<<"\n date of entry : "<<kentry.d<<"/"<<kentry.m<<"/"<<kentry.y;
			cout<<"\n place of removal of part : "<<place;
			cout<<"\n snag : "<<snag;
			cout<<"\n workorder number : "<<wno;
			cout<<"\n name of technician/engineer alotted : "<<name;
			cout<<"\n section/bench : "<<sec;
			cout<<"\n date of exit : "<<kexit.d<<"/"<<kexit.m<<"/"<<kexit.y;
			cout<<"\n remarks : "<<remarks;
			cout<<"\n\n\n";
		}


	}

	void dispp(char p[])
	{
		if(strcmp(p,pno)==0)
		{
			cout<<"\n status : "<<status;
			cout<<"\n nomenclature : "<<nom;
			cout<<"\n part number : "<<pno;
			cout<<"\n serial number : "<<sno;
			cout<<"\n aircraft from which the part was removed : "<<ac;
			cout<<"\n date of entry : "<<kentry.d<<"/"<<kentry.m<<"/"<<kentry.y;
			cout<<"\n place of removal of part : "<<place;
			cout<<"\n snag : "<<snag;
			cout<<"\n workorder number : "<<wno;
			cout<<"\n name of technician/engineer alotted : "<<name;
			cout<<"\n section/bench : "<<sec;
			cout<<"\n date of exit : "<<kexit.d<<"/"<<kexit.m<<"/"<<kexit.y;
			cout<<"\n remarks : "<<remarks;cout<<"\n\n\n";

		}


	}

	void dispna(char p[])
	{
		if(strcmp(p,nom)==0)
		{
			cout<<"\n status : "<<status;
			cout<<"\n nomenclature : "<<nom;
			cout<<"\n part number : "<<pno;
			cout<<"\n serial number : "<<sno;
			cout<<"\n aircraft from which the part was removed : "<<ac;
			cout<<"\n date of entry : "<<kentry.d<<"/"<<kentry.m<<"/"<<kentry.y;
			cout<<"\n place of removal of part : "<<place;
			cout<<"\n snag : "<<snag;
			cout<<"\n workorder number : "<<wno;
			cout<<"\n name of technician/engineer alotted : "<<name;
			cout<<"\n section/bench : "<<sec;
			cout<<"\n date of exit : "<<kexit.d<<"/"<<kexit.m<<"/"<<kexit.y;
			cout<<"\n remarks : "<<remarks;
			cout<<"\n\n\n";
		}

	}


	void dispw(long w)
	{
		if(w==wno)
		{
			cout<<"\n status : "<<status;
			cout<<"\n nomenclature : "<<nom;
			cout<<"\n part number : "<<pno;
			cout<<"\n serial number : "<<sno;
			cout<<"\n aircraft from which the part was removed : "<<ac;
			cout<<"\n date of entry : "<<kentry.d<<"/"<<kentry.m<<"/"<<kentry.y;
			cout<<"\n place of removal of part : "<<place;
			cout<<"\n snag : "<<snag;
			cout<<"\n workorder number : "<<wno;
			cout<<"\n name of technician/engineer alotted : "<<name;
			cout<<"\n section/bench : "<<sec;
			cout<<"\n date of exit : "<<kexit.d<<"/"<<kexit.m<<"/"<<kexit.y;
			cout<<"\n remarks : "<<remarks;
			cout<<"\n\n\n";
		 }


	}


};


class awaiting
{	 public:
	dat kreq;
	char namec[50];
	char p[20];
	char mno[20];
	long w;
	char status[10] ;

	void aentry()
	{
		cout<<" enter workorder number to be put into awaiting\n";
		cin>>w;
		strcpy(status,"awaiting");
		cout<<" enter name of the component awaiting for\n";
		gets(namec);
		cout<<" enter part number of the component \n";
		gets(p);
		cout<<" enter M/R number of the component request \n";
		gets(mno);
		cout<<" enter date of request(dd/mm/yyyy)\n";
		cin>>kreq.d; cout<<"/"; cin>>kreq.m; cout<<"/"; cin>>kreq.y;
	}

	void dispap(char pn[])
	{
		if(strcmp(pn,p)==0)
		{cout<<"\n status : "<<status;
			cout<<"\n workorder number : "<<w;
			cout<<"\n name of component : "<<namec;
			cout<<"\n part number of component : "<<p;
			cout<<"\n M/R number of component request : "<<mno;
			cout<<"\n date on which request for component was made : "<<kreq.d<<"/"<<kreq.m<<"/"<<kreq.y<<"\n\n\n\n";
		 getch();}


	}

	void dispad()
	{		cout<<"\n status : "<<status;
			cout<<"\n workorder number : "<<w;
			cout<<"\n name of component : "<<namec;
			cout<<"\n part number of component : "<<p;
			cout<<"\n M/R number of component request : "<<mno;
			cout<<"\n date on which request for component was made : "<<kreq.d<<"/"<<kreq.m<<"/"<<kreq.y<<"\n\n\n\n";

	}

	void dispaw(long pn)
	{
		if(pn==w)
		{cout<<"\n status : "<<status;
			cout<<"\n workorder number : "<<w;
			cout<<"\n name of component : "<<namec;
			cout<<"\n part number of component : "<<p;
			cout<<"\n M/R number of component request : "<<mno;
			cout<<"\n date on which request for component was made : "<<kreq.d<<"/"<<kreq.m<<"/"<<kreq.y<<"\n\n\n\n";

		}


	}


};


void mainmenu()
{
	clrscr() ;
	char ch ;   anew n;
	while (1)
	{
		clrscr() ;
		gotoxy(10,3) ;
		cout <<"*************************************************************" ;
		gotoxy(10,23) ;
		cout <<"*************************************************************" ;
		gotoxy(23,6) ;
		cout <<"AIR INDIA : RADIO SHOP INVENTORY MANAGEMENT" ;
		gotoxy(23,7) ;
		cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" ;
		gotoxy(30,9) ;
		cout <<"1: NEW PART FOR REPAIR" ;
		gotoxy(30,11) ;
		cout <<"2: RELEASE PART" ;
		gotoxy(30,13) ;
		cout <<"3: TO VENDOR" ;
		gotoxy(30,15) ;
		cout <<"4: TO SCRAP" ;
		gotoxy(30,17) ;
		cout <<"5: ENTRY INTO AWAITING" ;
		gotoxy(30,19) ;
		cout <<"6: DISPLAY" ;
		gotoxy(30,21) ;
		cout <<"0: QUIT" ;
		gotoxy(30,22) ;
		cout <<"Enter Your Choice : " ;
		ch = getche() ;
		if (ch == 27)
			return ;
		else
		if (ch == '1')
		{
			clrscr(); char c;
			do
			{      clrscr(); anew n;
				n.entry();
				fstream f;
				f.open("new.DAT", ios::out|ios::app|ios::binary);
				f.write((char *)&n,sizeof(n));
				f.close();
				cout<<"\n\n\n want to enter more? (y/n)\n";
				cin>>c;
			}while(c=='y');
			//mainmenu();

		}


		else
		if (ch == '2')
		{
			clrscr(); char c;
			do
			{
				clrscr();long w;
				cout<<"\n enter workorder number to be released\n";
				cin>>w;
				anew n;

				fstream f1,f2;
				f1.open("new.DAT", ios::in|ios::binary);
				f2.open("new.DAT", ios::out|ios::app|ios::binary);
				while(f1.read((char *)&n,sizeof(n)))
				{	if(w==n.wno)
					{	n.disp();
						n.release();
						f2.seekp(-1*sizeof(n),ios::cur);
						f2.write((char *)&n,sizeof(n)); break;
					}
				}
				f1.close();
				f2.close();

				awaiting a;

				f1.open("awaiting.DAT",ios::in|ios::binary);
				f2.open("m.DAT",ios::out|ios::binary);
				while(f1.read((char *)&a,sizeof(a)))
				{	if(a.w!=w)
						f2.write((char *)&a,sizeof(a));
					}
				f1.close();
				f2.close();
				remove( "awaiting.DAT");
				rename ("m.DAT","awaiting.DAT");
				cout<<"\n\n\n want to enter more? (y/n)\n";
				cin>>c;
			}while(c=='y');
			//mainmenu();
		}


		else
		if (ch == '3')
		{

			clrscr(); char c;
			do
			{
				clrscr();long w;
				cout<<"\n enter workorder number to be sent to vendor\n";
				cin>>w;
				anew n;

				fstream f1,f2;
				f1.open("new.DAT", ios::in|ios::binary);
				f2.open("new.DAT", ios::out|ios::app|ios::binary);
				while(f1.read((char *)&n,sizeof(n)))
				{	if(w==n.wno)
					{	n.disp();
						n.vendor();
						f2.seekp(-1*sizeof(n),ios::cur);
						f2.write((char *)&n,sizeof(n));break;
					}
				}
				f1.close();
				f2.close();

				awaiting a;

				f1.open("awaiting.DAT",ios::in|ios::binary);
				f2.open("m.DAT",ios::out|ios::binary);
				while(f1.read((char *)&a,sizeof(a)))
				{	if(a.w!=w)
						f2.write((char *)&a,sizeof(a));
					}
				f1.close();
				f2.close();
				remove( "awaiting.DAT");
				rename ("m.DAT","awaiting.DAT");

				cout<<"\n\n\n want to enter more? (y/n)\n";
				cin>>c;
			}while(c=='y');
			//mainmenu();
		}


		else
		if (ch == '4')
		{

			clrscr(); char c;
			do
			{
				clrscr();long w;
				cout<<"\n enter workorder number to be scraped\n";
				cin>>w;
				anew n;

				fstream f1,f2;
				f1.open("new.DAT", ios::in|ios::binary);
				f2.open("new.DAT", ios::out|ios::app|ios::binary);
				while(f1.read((char *)&n,sizeof(n)))
				{	if(w==n.wno)
					{	n.disp();
						n.scrap();
						f2.seekp(-1*sizeof(n),ios::cur);
						f2.write((char *)&n,sizeof(n)); break;
					}
				}
				f1.close();
				f2.close();

				awaiting a;

				f1.open("awaiting.DAT",ios::in|ios::binary);
				f2.open("m.DAT",ios::out|ios::binary);
				while(f1.read((char *)&a,sizeof(a)))
				{	if(a.w!=w)
						f2.write((char *)&a,sizeof(a));
					}
				f1.close();
				f2.close();
				remove( "awaiting.DAT");
				rename( "m.DAT","awaiting.DAT");
				cout<<"\n\n\n want to enter more? (y/n)\n";
				cin>>c;
			}while(c=='y');

		}

		else
		if (ch == '5')
		{
			clrscr(); cout<<"\n 1. new entry\n";
			cout<<"\n 2. search using part number of component\n";
			cout<<"\n 3. modify record\n";

			int x;
			cout<<"\n enter choice\n";
			cin>>x;

			switch(x)
			{
				case 1: {	clrscr(); char c;
						do
						{	clrscr();
							awaiting n;
							n.aentry();
							fstream f;
							f.open("awaiting.DAT", ios::out|ios::app|ios::binary);
							f.write((char *)&n,sizeof(n));
							f.close();
							cout<<"\n\n\n want to enter more? (y/n)\n";
							cin>>c;
						}while(c=='y');
						break;
						}

				case 2: {	clrscr(); char w[20];
						cout<<"\n enter part number of component\n";
						gets(w);
						awaiting a;
						cout<<"\n\n";
						fstream f;
						f.open("awaiting.DAT", ios::in|ios::binary);
						while(f.read((char *)&a,sizeof(a)))
						a.dispap(w);
						f.close();
						getch();
						break;
					}


				case 3: {	clrscr(); long pn; awaiting n;
						cout<<"\n enter workorder number to be modified\n";
						cin>>pn;
						char m[20],po[20];
						fstream f1;
						f1.open("awaiting.DAT",ios::in|ios::binary);
						fstream f2;
						f2.open("m.DAT",ios::out|ios::app|ios::binary);

						cout<<"\n enter M/R number of request\n";
						gets(m);
						cout<<"\n enter part number of component\n";
						gets(po);
						
						while(!f1.eof())
						{	
							f1.read((char *)&n,sizeof(n));
							if(f1.eof())
							{break;}
							if(n.w==pn)
							{	if(strcmp(m,n.mno)==0 && strcmp(po,n.p)==0)
								{ }
								else
								f2.write((char *)&n,sizeof(n));
							}	
							else
							f2.write((char *)&n,sizeof(n));
		
		
						}
						f1.close();f2.close();
						remove( "awaiting.DAT");
						rename ("m.DAT","awaiting.DAT");
					}

			} break;
		}

		else
		if (ch == '6')
		{
			clrscr();
			cout<<"\n 1. parts that entered the shop for repair\n";
			cout<<"\n 2. parts that were released after repair\n";
			cout<<"\n 3. parts that were sent to the vendor\n";
			cout<<"\n 4. parts that were sent to scrap\n";
			cout<<"\n 5. parts that are awaiting for components\n";
			cout<<"\n enter choice\n";
			int x;
			cin>>x;
			switch(x)
			{
				case 1:{	clrscr(); cout<<"\n 1. date wise\n";
						cout<<"\n 2. serial number wise\n";
						cout<<"\n 3. part number wise\n";
						cout<<"\n 4. nomenclature wise\n";
						cout<<"\n 5. workorder number wise\n";
						cout<<"\n enter choice\n";

						int y;
						cin>>y;
						switch(y)
						{	case 1: {

									clrscr(); anew temp;

									ifstream f("new.dat",ios::in|ios::binary);

									if(!f)
									{cout<<"\n\n   error";getch();break;}


									date:

									int d1,m1,y1,d2,m2,y2;
									cout<<"\n from date(dd/mm/yyyy) : ";
									cin>>d1; cout<<"/"; cin>>m1; cout<<"/"; cin>>y1;
									cout<<"\n to date(dd/mm/yyyy) : ";
									cin>>d2; cout<<"/"; cin>>m2; cout<<"/"; cin>>y2;
									cout<<"\n\n\n";
								    
								       if(y1>y2 || d1>31 || d2>31 || m1 > 12 || m2 > 12)
								       {
									  cout<<"\n date format incorrect";
									  getch();
									  goto date;
								       }


								       while(!f.eof())
								       {
									   f.read((char*)&temp,sizeof(temp));
									   if(f.eof())
									   {break;}

									   if(temp.kentry.y > y1 && temp.kentry.y < y2)
									   {temp.disp();}

									   else if(temp.kentry.y == y1 && temp.kentry.m > m1)
									   {temp.disp();}

									   else if(temp.kentry.y == y2 && temp.kentry.m < m2)
									   {temp.disp();}

									   else if(temp.kentry.y == y1 && temp.kentry.m == m1 && temp.kentry.d >= d1)
									   {temp.disp();}

									   else if(temp.kentry.y == y2 && temp.kentry.m == m2 && temp.kentry.d <= d2)
									   {temp.disp();}

getch();

									   
								       }
								       f.close();


									getch();break;
								}

							case 2: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter serial number\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);
									while(f.read((char *)&n,sizeof(n)))
									n.disps(s);
									f.close();getch();
									break;
								}

							case 3: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter part number\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);
									while(f.read((char *)&n,sizeof(n)))
									n.dispp(s);
									f.close();getch();
									break;
								}

							case 4: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter nomenclature\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);
									while(f.read((char *)&n,sizeof(n)))
									n.dispna(s);
									f.close();getch();
									break;
								}

							case 5: {	clrscr(); anew n;
									long s;
									cout<<"\n enter workorder number\n";
									cin>>s;
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);
									while(f.read((char *)&n,sizeof(n)))
									n.dispw(s);
									f.close();getch();
									break;
								}

						}break;
					}

				case 2: {	clrscr(); cout<<"\n 1. date wise\n";
						cout<<"\n 2. serial number wise\n";
						cout<<"\n 3. part number wise\n";
						cout<<"\n 4. nomenclature wise\n";
						cout<<"\n 5. workorder number wise\n";
						cout<<"\n enter choice\n";
						int y;
						cin>>y;
						switch(y)
						{	case 1: {	
									clrscr(); anew temp;

									ifstream f("new.dat",ios::in|ios::binary);

									if(!f)
									{cout<<"\n\n   error";getch();break;}


									datee:

									int d1,m1,y1,d2,m2,y2;
									cout<<"\n from date(dd/mm/yyyy) : ";
									cin>>d1; cout<<"/"; cin>>m1; cout<<"/"; cin>>y1;
									cout<<"\n to date(dd/mm/yyyy) : ";
									cin>>d2; cout<<"/"; cin>>m2; cout<<"/"; cin>>y2;
									cout<<"\n\n\n";
								    
								       if(y1>y2 || d1>31 || d2>31 || m1 > 12 || m2 > 12)
								       {
									  cout<<"\n date format incorrect";
									  getch();
									  goto datee;
								       }


								       while(!f.eof())
								       {
									   f.read((char*)&temp,sizeof(temp));
									   if(f.eof() && strcmp(temp.status,"released")!=0)
									   {break;}

									   if(temp.kexit.y > y1 && temp.kexit.y < y2)
									   {temp.dispm();}

									   else if(temp.kexit.y == y1 && temp.kexit.m > m1)
									   {temp.dispm();}

									   else if(temp.kexit.y == y2 && temp.kexit.m < m2)
									   {temp.dispm();}

									   else if(temp.kexit.y == y1 && temp.kexit.m == m1 && temp.kexit.d >= d1)
									   {temp.dispm();}

									   else if(temp.kexit.y == y2 && temp.kexit.m == m2 && temp.kexit.d <= d2)
									   {temp.dispm();}


getch();
									   
								       }
								       f.close();


									getch();break;
								}

							case 2: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter serial number\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"released")==0)
											n.disps(s);}
									f.close();getch();
									break;
								}

							case 3: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter part number\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"released")==0)
											n.dispp(s);}
									f.close();getch();
									break;
								}

							case 4: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter nomenclature\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);
									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"released")==0)
										n.dispna(s);}
									f.close();getch();
									break;
								}

							case 5: {	clrscr(); anew n;
									long s;
									cout<<"\n enter workorder number\n";
									cin>>s;
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"released")==0)
										n.dispw(s);}
									f.close();getch();
									break;
								}

						}break;
					}

				case 3: {	clrscr(); cout<<"\n 1. date wise\n";
						cout<<"\n 2. serial number wise\n";
						cout<<"\n 3. part number wise\n";
						cout<<"\n 4. nomenclature wise\n";
						cout<<"\n 5. workorder number wise\n";
						cout<<"\n enter choice\n";
						int y;cin>>y;
						switch(y)
						{	case 1: {	clrscr(); anew temp;

									ifstream f("new.dat",ios::in|ios::binary);

									if(!f)
									{cout<<"\n\n   error";getch();break;}


									dateee:

									int d1,m1,y1,d2,m2,y2;
									cout<<"\n from date(dd/mm/yyyy) : ";
									cin>>d1; cout<<"/"; cin>>m1; cout<<"/"; cin>>y1;
									cout<<"\n to date(dd/mm/yyyy) : ";
									cin>>d2; cout<<"/"; cin>>m2; cout<<"/"; cin>>y2;
									cout<<"\n\n\n";
								    
								       if(y1>y2 || d1>31 || d2>31 || m1 > 12 || m2 > 12)
								       {
									  cout<<"\n date format incorrect";
									  getch();
									  goto dateee;
								       }


								       while(!f.eof())
								       {
									   f.read((char*)&temp,sizeof(temp));
									   if(f.eof() && strcmp(temp.status,"vendor")!=0)
									   {break;}

									   if(temp.kexit.y > y1 && temp.kexit.y < y2)
									   {temp.dispm();}

									   else if(temp.kexit.y == y1 && temp.kexit.m > m1)
									   {temp.dispm();}

									   else if(temp.kexit.y == y2 && temp.kexit.m < m2)
									   {temp.dispm();}

									   else if(temp.kexit.y == y1 && temp.kexit.m == m1 && temp.kexit.d >= d1)
									   {temp.dispm();}

									   else if(temp.kexit.y == y2 && temp.kexit.m == m2 && temp.kexit.d <= d2)
									   {temp.dispm();}

getch();

									   
								       }
								       f.close();


									getch();break;
								}

							case 2: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter serial number\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"vendor")==0)
											n.disps(s);}
									f.close();getch();
									break;}

							case 3: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter part number\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"vendor")==0)
											n.dispp(s);}
									f.close();getch();
									break;
								}

							case 4: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter nomenclature\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"vendor")==0)
										n.dispna(s);}
									f.close();getch();
									break;
								}

							case 5: {	clrscr(); anew n;
									long s;
									cout<<"\n enter workorder number\n";
									cin>>s;
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"vendor")==0)
										n.dispw(s);}
									f.close();getch();
									break;
								}

						}break;
					}
			case 4: {	clrscr(); cout<<"\n 1. date wise\n";
						cout<<"\n 2. serial number wise\n";
						cout<<"\n 3. part number wise\n";
						cout<<"\n 4. nomenclature wise\n";
						cout<<"\n 5. workorder number wise\n";
						cout<<"\n enter choice\n";
						int y;cin>>y;
						switch(y)
						{	case 1: {	clrscr(); anew temp;

									ifstream f("new.dat",ios::in|ios::binary);

									if(!f)
									{cout<<"\n\n   error";getch();break;}


									dateeee:

									int d1,m1,y1,d2,m2,y2;
									cout<<"\n from date(dd/mm/yyyy) : ";
									cin>>d1; cout<<"/"; cin>>m1; cout<<"/"; cin>>y1;
									cout<<"\n to date(dd/mm/yyyy) : ";
									cin>>d2; cout<<"/"; cin>>m2; cout<<"/"; cin>>y2;
									cout<<"\n\n\n";
								    
								       if(y1>y2 || d1>31 || d2>31 || m1 > 12 || m2 > 12)
								       {
									  cout<<"\n date format incorrect";
									  getch();
									  goto dateeee;
								       }


								       while(!f.eof())
								       {
									   f.read((char*)&temp,sizeof(temp));
									   if(f.eof() && strcmp(temp.status,"scraped")!=0)
									   {break;}

									   if(temp.kexit.y > y1 && temp.kexit.y < y2)
									   {temp.dispm();}

									   else if(temp.kexit.y == y1 && temp.kexit.m > m1)
									   {temp.dispm();}

									   else if(temp.kexit.y == y2 && temp.kexit.m < m2)
									   {temp.dispm();}

									   else if(temp.kexit.y == y1 && temp.kexit.m == m1 && temp.kexit.d >= d1)
									   {temp.dispm();}

									   else if(temp.kexit.y == y2 && temp.kexit.m == m2 && temp.kexit.d <= d2)
									   {temp.dispm();}

getch();

									   
								       }
								       f.close();


									getch();break;
								}

							case 2: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter serial number\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"scraped")==0)
											n.disps(s);}
									f.close();getch();
									break;
								}

							case 3: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter part number\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"scraped")==0)
											n.dispp(s);}
									f.close();getch();
									break;
								}

							case 4: {	clrscr(); anew n;
									char s[20];
									cout<<"\n enter nomenclature\n";
									gets(s);
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"scraped")==0)
										n.dispna(s);}
									f.close();getch();
									break;
								}

							case 5: {	clrscr(); anew n;
									long s;
									cout<<"\n enter workorder number\n";
									cin>>s;
									cout<<"\n\n\n";
									fstream f;
									f.open("new.DAT", ios::in|ios::binary);

									while(f.read((char *)&n,sizeof(n)))
									{	if(strcmp(n.status,"scraped")==0)
										n.dispw(s);}
									f.close();getch();
									break;
								}

						}break;
					}

			case 5 :{	clrscr(); cout<<"\n 1. date wise\n";
					cout<<"\n 2. workoder number wise\n";
					cout<<"\n enter choice\n";
					int c;cin>>c;
			
					if(c==1)
					{	clrscr(); awaiting temp;

									ifstream f("awaiting.dat",ios::in|ios::binary);

									if(!f)
									{cout<<"\n\n   error";getch();break;}


									dateeeee:

									int d1,m1,y1,d2,m2,y2;
									cout<<"\n from date(dd/mm/yyyy) : ";
									cin>>d1; cout<<"/"; cin>>m1; cout<<"/"; cin>>y1;
									cout<<"\n to date(dd/mm/yyyy) : ";
									cin>>d2; cout<<"/"; cin>>m2; cout<<"/"; cin>>y2;
									cout<<"\n\n\n";
								    
								       if(y1>y2 || d1>31 || d2>31 || m1 > 12 || m2 > 12)
								       {
									  cout<<"\n date format incorrect";
									  getch();
									  goto dateeeee;
								       }


								       while(!f.eof())
								       {
									   f.read((char*)&temp,sizeof(temp));
									   if(f.eof())
									   {break;}

									   if(temp.kreq.y > y1 && temp.kreq.y < y2)
									   {temp.dispad();}

									   else if(temp.kreq.y == y1 && temp.kreq.m > m1)
									   {temp.dispad();}

									   else if(temp.kreq.y == y2 && temp.kreq.m < m2)
									   {temp.dispad();}

									   else if(temp.kreq.y == y1 && temp.kreq.m == m1 && temp.kreq.d >= d1)
									   {temp.dispad();}

									   else if(temp.kreq.y == y2 && temp.kreq.m == m2 && temp.kreq.d <= d2)
									   {temp.dispad();}

getch();

									   
								       }
								       f.close();


									getch();break;
					}
			
					else if(c==2)
					{	clrscr();
						cout<<"\n enter workorder number\n";
						long w;
						cin>>w;
						awaiting n;
						fstream f;
						f.open("awaiting.DAT", ios::in|ios::binary);
						while(f.read((char *)&n,sizeof(n)))
						n.dispaw(w);
						f.close();getch();
						break;
					}
					
				} 
		
						
	}break;
}


		else
		if (ch == '0')
			exit(0);
	}
}



void main()
{	clrscr();
       while(1)
      mainmenu();
}	