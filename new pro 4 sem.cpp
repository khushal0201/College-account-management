#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<conio.h>//643
#include<iomanip>
#include<Windows.h>
using namespace std;
struct student
{
	char firstn[100];
	char lastn[100];
	int enrolln;
	int sem;
	char status[100];
	int courif;
	char email[100];
	
};
struct feed
{
	int numba;
	char conte[300];
};


struct emp
{
	char firstn[100];
	char lastn[100];
	int empid;
	int psin;
	int coid;
};
struct course
{
	int coid;
	double fees;
	char courn[100];
};

struct post
{
	int psin;
	double srat;
	char jna[100];
};


int main()
{
	
	struct student s;
	struct emp e;
	struct course q;
	struct post x;
	FILE *po;
	char ch,an;
	int emsize=sizeof(e);
	int recors=sizeof(s);
	po=fopen("new1.txt","r+");
	if(po==NULL)
	{
		po=fopen("new1.txt","wb+");
		if(po==NULL)
		{
			cout<"Sorry! File Can't be opened";
		}
	}
	FILE *dot;
	dot=fopen("new2.txt","r+");
	if(dot==NULL)
	{
		dot=fopen("new2.txt","wb+");
		if(dot==NULL)
		{
			cout<"Sorry! File Can't be opened";
		}
	}
	FILE *ad;
		int sd=sizeof(q);
	ad=fopen("unk.txt","r+");
	if(ad==NULL)
	{
		ad=fopen("unk.txt","wb+");
		fseek(ad,0,SEEK_END);
		q.coid=201;
		q.fees=34000;
		strcpy(q.courn,"MCA");
		fwrite(&q,sd,1,ad);
		fseek(ad,0,SEEK_END);
		q.coid=203;
		q.fees=35600;
		strcpy(q.courn,"MBA");
		fwrite(&q,sd,1,ad);
		fseek(ad,0,SEEK_END);
		q.coid=204;
		q.fees=3400;
		strcpy(q.courn,"B.COM");
		fwrite(&q,sd,1,ad);
		
		if(ad==NULL)
		{
			cout<<"\n\nSorry Cant be opened";
		}
	}
	
	FILE *ns;
	ns=fopen("covid.txt","r+");
	int td=sizeof(x);
	if(ns==NULL)
	{
		ns=fopen("covid.txt","wb+");
		fseek(ns,0,SEEK_END);
		x.psin=110;
		x.srat=.05;
		strcpy(x.jna,"Clerk");
		fwrite(&x,td,1,ns);
		fseek(ns,0,SEEK_END);
		x.psin=111;
		x.srat=0.15;
		strcpy(x.jna,"Assistant Professor");
		fwrite(&x,td,1,ns);
		fseek(ns,0,SEEK_END);
		x.psin=112;
		x.srat=.20;
		strcpy(x.jna,"Associate Professor");
		fwrite(&x,td,1,ns);
		fseek(ns,0,SEEK_END);
		x.psin=113;
		x.srat=.40;
		strcpy(x.jna,"Head Professor");
		fwrite(&x,td,1,ns);
		if(ns==NULL)
		{
			cout<<"Sorry! File cant be opened";
			fclose(ns);
		}
		
	}
/*	cout<<" *******helllloooooo";
	FILE *omin;
	struct feed mez;
	omin=fopen("feedo.txt","wb+");
	int feedos=sizeof(mez);
	cout<<"    Helll";
	if(omin!=NULL)
	{
		omin=fopen("feedo.txt","wb+");
		fseek(omin,0,SEEK_END);
		mez.numba=01;
		cout<<"     "<<mez.numba;
		strcpy(mez.conte,"abc");
		fwrite(&mez,feedos,1,omin);
		if(omin==NULL)
		{
			cout<<"\nSorry! File cant be opened";
			fclose(omin);	
		}
		
	}*/

	int fe=1;
	while(fe==1)
	{
		system("cls");
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),31);
		cout<<"*******************COLLEGGE ACCOUNT MANAGEMENT SYSTEM**********************";
		cout<<"\n\n\n\n\n\n\n";
		cout<<"\t\t\tSELECT CHOICE FROM BELOW \n";
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
		cout<<"\n\n\t\t\t1.)ADMIN LOGIN";
		cout<<"\n\t\t\t2.)STUDENT FEE SUBMISSION PAGE";
		cout<<"\n\t\t\t3.)APPLICATION INFORMATION";
		//cout<<"\n\t\t\t4.)APPLICATION FEEDBBACK";
		//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
		cout<<"\n\t\t\t4.)EXIT.";
		fflush(stdin);
		an=getche();
		switch(an)
		{
		   	case '1':
		   	{	   
		   		int t=5,lc=0;
		   		char ew='1';
		   		while(ew=='1'&&t!=0)
		   		{
				   
		   		char un[100];
		   		char pd[100]=" ";
		   		char ci;
		   		int h=0;
		   		system("cls");
		   		cout<<"*************ADMIN LOGIN PAGE**************************";
		   		cout<<"\n\n\n\t\t\tUSERNAME=";
		   		cin>>un;
		   		int i=0;
		   		cout<<"\n\t\t\tPASSWORD=";
		   		//cout<<pd;
		   		while((ci=getch())!='\r')
		   		{
		   			fflush(stdin);
		   			
		   			pd[i++]=ci;
		   			cout<<"*";
				   }
				   
				   //cout<<"\n"<<un;
				  if((strcmp(un,"ADMIN")==0))
				  {
				  	if(strcmp(pd,"qep0i")==0)
				  	{
				  		fflush(stdin);
				  		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
				  		cout<<"\n\n\t\t\tCORRECT PASSWORD";
				  		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
					  ew='0';
					  lc=0;
					  cout<<"\n";
				  	  break;
				     }
				     else
				     {	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
				     cout<<"\n\n\t\t\tINCORRECT USERNAME OR PASSWORD\n\n";
				  	t--;
				  	lc=1;
				    cout<<"\n"<<t<<" tries left,to retry press 1 otherwise 0\n";
				    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
				    fflush(stdin);
				    ew=getche();
					system("pause");
					 }
				   }
				   else
				   {
				   	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
				     cout<<"\n\n\t\t\tINCORRECT USERNAME OR PASSWORD\n\n";
				  	t--;
				  	lc=1;
				    cout<<"\n"<<t<<" tries left,to retry press 1 otherwise 0\n";
				    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
				    fflush(stdin);
				    ew=getche();
					system("pause");
			       }
			     }
			     if(lc==1)
			     {
				    if(t==0)
				    {
				    	cout<<"\nYOU EXCEEDED PASSWORD ENTERING LIMIT";
					}
			         break;
			     }
			     system("pause");    
		   		system("cls");
		   		int gy=1;
		   		while(gy==1)
		   		{
		   			system("cls");
		   		cout<<"***********ADMIN CONTROLS*****************";
		   		cout<<"\n\n\n\n\n";
		   		cout<<"\t\t\tSelect any one from following choices-";
		   		cout<<"\n\n\t\t\t1.)Manage students' database";
		   		cout<<"\n\n\t\t\t2.)Manage employee database";
		   		cout<<"\n\n\t\t\t3.)View Course database";
		   		cout<<"\n\n\t\t\t4.)View post information";
		   		cout<<"\n\n\t\t\t5.)View Salary distribution";
		   		//cout<<"\n\n\t\t\t5.)VIEW FEEDBACKS' RECORDED";
		   		cout<<"\n\n\t\t\t6..)Return to previous menu";
		   		fflush(stdin);
		   		ch=getche();
		   		
		   		switch(ch)
		   		{
		   			case '1':
		   				{
		   					system("cls");
		   				    cout<<"***********STUDENT DATABASE*********";
							cout<<"\n\n\n\n";
							cout<<"\t\tselect from the following choices:-";
							cout<<"\n\t\t1.)view";
							cout<<"\n\t\t2.)update/insert";
							cout<<"\n\t\t3.)delete";
							//system("pause");
							fflush(stdin);
							char q1=getche();
							switch(q1)
							{
								case '1':
									{
										system("cls");
										fclose(po);
										po=fopen("new1.txt","rb+");
										fclose(ad);
										ad=fopen("unk.txt","r+");
										rewind(ad);
										
										 fseek(po,0,SEEK_SET);
										    cout<<"                            DATA OF STUDENTS\n";
											cout<<"+-------------------------------------------------------------------------------------------------------------------+\n";
											cout<<"| Enroll no | First name| Last name  | Email              | Semester  | course    | fees      |Fee submission status|\n";
											
										while(fread(&s,recors,1,po)==1)
										{
											cout<<"+-------------------------------------------------------------------------------------------------------------------+\n";
											//fflush(stdin);
											cout<<"|"<<left<<setw(11)<<s.enrolln<<"|"<<setw(11)<<s.firstn<<"|"<<setw(11)<<s.lastn<<"|"<<setw(20)<<s.email;
											cout<<"|"<<setw(11)<<s.sem;
											rewind(ad);
											while(fread(&q,sd,1,ad)==1)
											{
											   if(s.courif==q.coid)
											   {
											   	      cout<<"|"<<setw(11)<<q.courn<<"|"<<setw(11)<<q.fees;
											   	      break;
											   }
			                                }
			                                cout<<"|"<<setw(21)<<s.status<<"|\n";
										}
									        cout<<"+-------------------------------------------------------------------------------------------------------------------+\n";
									        system("pause");
									break;
									}
								case '2':
								    {
									    system("cls");
									    fclose(po);
									    po=fopen("new1.txt","rb+");
									     fseek(po,0,SEEK_END);
									    cout<<"\n\n\n\t\tWant to insert(1) or update(2)";
									    char l;
									    fflush(stdin);
									     l=getche();
									    if(l=='1')
									    {
										
									     char ano='Y';
									     while(ano=='Y'||ano=='y')
									     {
									     	system("cls");
									     	fflush(stdin);
									     
									     	cout<<"\t\t\tINSERT STUDENT DATA";
									     	cout<<"\n\n\n";
									     	cout<<"\n\n\tInsert Enrollment no=";
									     	cin>>s.enrolln;
									     	//cin.ignore();
									     	cout<<"\n\n\tInsert First Name=";
									     	cin>>s.firstn;
									     	cout<<"\n\n\tInsert last name=";
									     	cin>>s.lastn;
									     	//cin.ignore();
									     	int e=0;
									     	while(e==0)
									     	{
									     		e=1;
									     		cout<<"\n\n\tInsert Student's Email=";
									     		int cm=0,ldi=0;
									     		char temi[100]=" ";
									     		char rc;
									     		int lod=0,gop=0;
									     		while((rc=getche())!='\r')
									     		{
									     			
									     			fflush(stdin); 
									     			if(rc==127)
									     			  continue;
									     			
									     			if(rc!='@'&&ldi==0)
									     			{
									     			    if((rc >= 65 && rc <= 90)||(rc>=97&&rc<=122)||(rc>= 48 &&rc <= 57))
									     			    e*1;
									     			    else
									     			    e*0;
									     			    gop++;
													 }
													 if(rc=='@'&&ldi==0)
													   ldi=1;
													   else{ if(ldi==1)
													   {
												     	 if((rc >= 65 && rc <= 90)||(rc>=97&&rc<=122))
													   e=e*1;
													 else{
													  if(rc=='.')
													      {
													      	e=e*1;
															}  
													       else 
													         e=e*0;
												        } 
												        lod++;
												    }
												        }
													temi[cm++]=rc;
													        
												 }
												 if((gop==0)||(lod==0))
												   e=e*0;
												   
												 if(e==0)
												 cout<<"\n\tINVALID EMAIL";
												 if(e==1)
												  strcpy(s.email,temi);
									     		
									     	
											 }
											 cout<<"\n\t"<<s.email;
									     	cout<<"\n\n\tInsert course no=";
									     	cin>>s.courif;
									     	cout<<"\n\n\tInsert Semester=";
									     	cin>>s.sem;
									     	rewind(ad);
									     	while(fread(&q,sd,1,ad)==1)
									     	{
									     		if(q.coid==s.courif)
									     		{
									     			cout<<"\n\t\t\t Name of course="<<q.courn;
									     			cout<<"\n\t\t\t Fees of respective sem and course="<<q.fees;
												 }
											 }
									     	//cout<<"\n\t\t\t\tinsert current sem";
									     	//cin>>s.sem;
									     	//cout<<"\t\t\tinsert total session fee=";
									     	//cin>>s.fees;
									    
									     	strcpy(s.status,"NOT PAID");
									     	fwrite(&s,recors,1,po);
									     	cout<<"\n\n\n\t\t\tAdd another record?(Yes=y or Y, No=n)";
									     	fflush(stdin);
									     	//fflush(stdin);
									     	//fflush(stdin);
									     	//fflush(stdin);
									     	ano=getche();
									     	system("pause");
									     
											 }
											 l='0';
										}
										if(l=='2')
									     	{
									     		rewind(po);
									     		 cout<<"****************UPDATATION PAGE********************";
									     		cout<<"\nEnter the enroll for updatation=";
									     		
									     		int tempe,fl=0;
									     		cin>>tempe;
									     		rewind(po);
									     		while(fread(&s,recors,1,po)==1)
									     		{
									     			if(tempe==s.enrolln)
									     			{
									     			    //struct student hef;
									     			   
									     			    cout<<"\n\n";
									     			    cout<<"Enrollment Number="<<s.enrolln;
									     			    cout<<"\nFirst Name="<<s.firstn;
									     			    cout<<"\nLast Name="<<s.lastn;
									     			    cout<<"\nSem="<<s.sem;
									     			    rewind(ad);
									     			    while(fread(&q,sd,1,ad)==1)
									     			    {
									     			    	if(q.coid==s.courif)
									     			    	{
									     			    		cout<<"\nFees="<<q.fees;
															 }
														 }
									     			    cout<<"\nFee Status="<<s.status;
									     			  int k=1;
									     			  while(k==1)
									     			  {
														 system("cls");
														cout<<"\nWhat you want to update enrollno(1)\nfirstname(2)\n lastname(3)\n semester(4)\nFee submission status(5)";
														fflush(stdin);
														char yu;
														yu=getche();
														if(yu=='1')
														{
															cout<<"\nEnter new enrollment number=";
															cin>>s.enrolln;
															break;
														}
														if(yu=='2')
														{
															cout<<"\n Enter first name=";
															cin>>s.firstn;
														break;
															}	
														if(yu=='3')
														{
															cout<<"\nenter last name=";
															cin>>s.lastn;
															break;
														}	
														if(yu=='4')
														{
																cout<<"\nEnter new sem=";
																cin>>s.sem;
															break;
														}
														if(yu=='5')
														{
															system("cls");
															cout<<"\t\t\t\nSelect from following\n";
															cout<<"PAID(1)\nNOT PAID(2)\n";
															char zx=getche();
															if(zx=='1')
															{
																strcpy(s.status,"PAID");
															}
															if(zx=='2')
															{
																strcpy(s.status,"NOT PAID");
															}
															if(zx=='3')
															{
																cin.getline(s.status,100);
															}
														}
														if(!(yu>=1&&yu<=6))
														{
															cout<<"\nInvalid Input";
															system("cls");
														}
												     }
												      fseek(po,-recors,SEEK_CUR);
												      fwrite(&s,recors,1,po);
															fl=1;
															
													 }
												 }
												 if(fl==0)
												 {
												 	cout<<"\nNo such record found";
												 	system("pause");
												 }
											 }
									     	
									     	break;
										 }
								case '3':
								{
									
									system("cls");
									cout<<"\t\t\tDELETION OF RECORDS";
									char ano='Y';
									while(ano=='y'||ano=='Y')
									{
										cout<<"\nenter enroll no=";
										int eno;
										cin>>eno;
										FILE *go;
										po=fopen("new1.txt","rb+");
										go=fopen("era.txt","wb+");
										rewind(po);
										int lo=1;
										
										while(fread(&s,recors,1,po)==1)
										{
											if(eno!=s.enrolln)
											{
												fwrite(&s,recors,1,go);
											}
											if(eno==s.enrolln)
											{
												lo=0;
											}
										}
										if(lo==1)
										{
									    	cout<<"\nwant o deleete another record?(Y/y)";
										  fflush(stdin);
										  ano=getche();
										  system("pause");	
										  continue;
										}
										cout<<"\nDeletion done\n";
										fclose(go);
										fclose(po);
										remove("new1.txt");
										rename("era.txt","new1.txt");
										po=fopen("new1.txt","rb+");
										cout<<"\nwant o deleete another record?(Y/y)";
										fflush(stdin);
										ano=getche();
										system("pause");
										
									}
										 }		 
									}
									break;	
								}	
						
					 case '2':
					   {
					   	system("cls");
					   	cout<<"*********EMPLOYEE DATABASE**********";
					   	cout<<"\n\n\n";
					   	cout<<"\t\tselect from the following choices:-";
					   	cout<<"\n\t\t1.)view";
					   	cout<<"\n\t\t2.)update/insert";
					   	cout<<"\n\t\t3.)Delete";
					   	fflush(stdin);
					   	char qw=getche();
					   	
					   	switch(qw)
					   	{
					   		case'1':
					   			{
					   				system("cls");
					   				fclose(dot);
					   				dot=fopen("new2.txt","r+");
					   				fclose(ns);
					   				ns=fopen("covid.txt","r+");
					   				rewind(dot);
					   				rewind(ns);
					   				cout<<"+---------------------------------------------------------------+\n";
					   				cout<<"|  Employee-ID  |  First Name  |  Last Name  |  Post  | Salary  |\n";
					   				cout<<"+---------------------------------------------------------------+\n";
					   				while(fread(&e,emsize,1,dot)==1)
					   				{
					   					cout<<"+---------------------------------------------------------------+\n";
					   					cout<<"|"<<left<<setw(13)<<e.empid<<"| ";
					   					cout<<setw(13)<<e.firstn<<" |  ";
					   					cout<<setw(13)<<e.lastn<<" |  ";
	/*SALARY_St*/					   	
										   	ns=fopen("covid.txt","r+");
								   		rewind(ns);
								   		int hola;
								   		double toip;
								   		while(fread(&x,td,1,ns)==1)
								   		{
										 if(x.psin==e.psin)  
								   	      {
										    	char *out=NULL;
										    	cout<<setw(8)<<x.jna<<"|";
								   		        out=strstr(x.jna,"Professor");
								   		        
								   		        toip=x.srat;
								   		        if(out)
								   		          hola=1;
								   		        else
												   hola=0;  
												break;   
								   		          
								   	      }
								   	    }
								   	    if(hola==1)
								   	    {
								   	       // cout<<"\nEnter course they teach=";
											//in>>e.coid;
											po=fopen("new1.txt","r+");
											rewind(po);
											int cnouy=0;
											double frer;
											int pumpy=0;
											struct emp zi;
											FILE *bhu;
											bhu=fopen("new2.txt","r+");
											rewind(bhu);
											while(fread(&zi,emsize,1,bhu)==1)
											{
												if(zi.psin==e.psin)
												{
													++pumpy;
												}
											}
											while(fread(&s,recors,1,po)==1)
											{
												if(e.coid==s.courif)
												{
													++cnouy;
												}
											}
											ad=fopen("unk.txt","r+");
											rewind(ad);
											while(fread(&q,sd,1,ad)==1)
											{
												if(q.coid==e.coid)
												{
													frer=q.fees;
													break;
												}
											}
											double salory;
										
											salory=(x.srat*cnouy*frer)/pumpy;
					                       cout<<setw(8)<<salory<<"\n";						
						
										}
										if(hola==0)
										{
											po=fopen("new1.txt","r+");
											rewind(po);
											int cnouy=0;
											double frer=0;
											int pumpy=0;
											struct emp zi;
											FILE *bhu;
											bhu=fopen("new2.txt","r+");
											rewind(bhu);
											while(fread(&zi,emsize,1,bhu)==1)
											{
												if(zi.psin==e.psin)
												{
													++pumpy;
												}
											}
											ad=fopen("unk.txt","r+");
											while(fread(&s,recors,1,po)==1)
											{
													rewind(ad);
										         	while(fread(&q,sd,1,ad)==1)
											        {
												       if(q.coid==s.courif)
												        {
													      frer=frer+q.fees;
													       break;
												        }
											        }
												
											}
											
											double salory;
											salory=(x.srat*frer)/pumpy;
					                       cout<<setw(8)<<salory<<"\n";	
											
			/*SALARY_en*/		}				   					
					   				
					   					
									   }
									 cout<<"+-------------------------------------------------------------+";  
									  cout<<"\n";
									  system("pause"); 
					   				break;
								   }
								   case '2':
								   	{
								   		system("cls");
								   		char t='Y';
								   		dot=fopen("new2.txt","rb+");
								   		while(t=='Y'||t=='y')
								   		{
										  cout<<"\nWant to Insert(1) or Update(2)";
										  char tkl;
										  tkl=getche();
										  if(tkl=='1')
										  {
										    
								   		fseek(dot,0,SEEK_END);
								   		system("cls");
								   		cout<<"\nenter first name=";
								   		cin>>e.firstn;
								   		cout<<"\nenter last name=";
								   		cin>>e.lastn;
								   		cout<<"\neenter empno=";
								   		cin>>e.empid;
								   		cout<<"\nEnter psin=";
								   		cin>>e.psin;
								   		
		/*SALARY_St*/					   	
										   	ns=fopen("covid.txt","r+");
								   		rewind(ns);
								   		int hola;
								   		double toip;
								   		while(fread(&x,td,1,ns)==1)
								   		{
										 if(x.psin==e.psin)  
								   	      {
										    	char *out=NULL;
								   		        out=strstr(x.jna,"Professor");
								   		        cout<<"\nPost="<<x.jna;
								   		        toip=x.srat;
								   		        if(out)
								   		          hola=1;
								   		        else
												   hola=0;  
												break;   
								   		          
								   	      }
								   	    }
								   	    if(hola==1)
								   	    {
								   	        cout<<"\nEnter course they teach=";
											cin>>e.coid;
											po=fopen("new1.txt","r+");
											rewind(po);
											int cnouy=0;
											double frer;
											int pumpy=0;
											struct emp zi;
											rewind(dot);
											while(fread(&zi,emsize,1,dot)==1)
											{
												if(zi.psin==e.psin)
												{
													++pumpy;
												}
											}
											while(fread(&s,recors,1,po)==1)
											{
												if(e.coid==s.courif)
												{
													++cnouy;
												}
											}
											ad=fopen("unk.txt","r+");
											rewind(ad);
											while(fread(&q,sd,1,ad)==1)
											{
												if(q.coid==e.coid)
												{
													frer=q.fees;
													break;
												}
											}
											double salory;
											pumpy++;
											salory=(x.srat*cnouy*frer)/pumpy;
					                       cout<<"\nSalary(Formulated pf)="<<salory;						
						
										}
										if(hola==0)
										{
											po=fopen("new1.txt","r+");
											rewind(po);
											int cnouy=0;
											double frer=0;
										
											int pumpy=0;
											struct emp zi;
											rewind(dot);
											while(fread(&zi,emsize,1,dot)==1)
											{
												if(zi.psin==e.psin)
												{
													++pumpy;
												}
											}
											ad=fopen("unk.txt","r+");
											while(fread(&s,recors,1,po)==1)
											{
													rewind(ad);
										         	while(fread(&q,sd,1,ad)==1)
											        {
												       if(q.coid==s.courif)
												        {
													      frer=frer+q.fees;
													       break;
												        }
											        }
												
											}
											
											double salory;
											pumpy++;
											salory=(x.srat*frer)/pumpy;
					                       cout<<"\nSalary(Formulated cl)="<<salory;	
											
			/*SALARY_en*/		}
								
										fseek(dot,0,SEEK_END);
								   		fwrite(&e,emsize,1,dot);
								   	}
								   	if(tkl=='2')
								   	{
								   		cout<<"\nEnter the empno to update record=";
								   		int emid;
								   		cin>>emid;
								   		rewind(dot);
								   		while(fread(&e,emsize,1,dot)==1)
								   		{
								   			if(emid==e.empid)
								   			{
								   				cout<<"\nWhat you want to update? Empid(1)\n\t\t\tFirstname(2)\nLastname(3)\nPost_id(4)\n";
								   				char qw;
								   				qw=getche();
								   				if(qw=='1')
								   				{
								   					cout<<"\nenter new empid=";
								   					cin>>e.empid;
											    }
											    if(qw=='2')
											    {
											    	cout<<"\nEnter new First name=";
											    	cin>>e.firstn;
												}
												if(qw=='3')
												{
													cout<<"\nEnter new Last name=";
													cin>>e.lastn;
												}
												if(qw=='4')
												{
													cout<<"\nEnter new post id=";
													cin>>e.psin;
												}
												   fseek(dot,-emsize,SEEK_CUR);
												   fwrite(&e,emsize,1,dot);
												   break;
											   }
										   }
								   		
									   }
								   		cout<<"\nWant to Insert/Update another?(Y/y)";
								   		fflush(stdin);
								   		t=getche();
								   	
								   	}
								   		break;
								   		
									   }
									   case '3':
									   	{
									   		system("cls");
									   		cout<<"\t\t\tDELETION OF RECORDS\n\n\n";
									   		char uyt='1';
									   		while(uyt==1)
									   		{
											   
									   		cout<<"\nEnter the employee id to delete record=";
									   		int teemp;
											   cin>>teemp;
											   
											   FILE *gp;
											   gp=fopen("nonum.txt","wb+");
											   dot=fopen("new2.txt","wb+");
											   fseek(dot,0,SEEK_SET);
											   int flug=1;
											   rewind(dot);
											   while(fread(&e,emsize,1,dot)==1)
											   {
											   	if(e.empid!=teemp)
											   	{
                                                  fwrite(&e,emsize,1,gp);											   		
												   }
												   if(e.empid==teemp)
												   {
												   	flug=0;
												   }
											   }
											   if(flug==1)
											   {
											   	cout<<"\nSorry! Desired Record Not found";
											   	
											   }
											   if(flug==0)
											   {
											   	fclose(gp);
											   	fclose(dot);
											   	remove("new2.txt");
											   	rename("nonum.txt","new2.txt");
											   	dot=fopen("new2.txt","rb+");
											   }
											   
											   cout<<"\nWant to delete another record?For Yes Press 1";
											   fflush(stdin);
											   uyt=getche();
											   system("pause");
										   }
						   }
						   break;
					   	
						   }
						   break;
						   
					}
		     	
						   case '3':
						   	   {
						   	   	system("cls");
						   	   	ad=fopen("unk.txt","rb+");
						   	   	rewind(ad);
						   	   	cout<<"\t\t\tVIEW COURSE DETAILS\n";
						   	   	cout<<"+------------------------------+\n";
						   	   	cout<<"| Course id |Course Name | Fees|\n";
						   	   	cout<<"+--------------------------------+\n";
						   	   	while(fread(&q,sd,1,ad)==1)
						   	   	{
						   	   	   cout<<"| "<<q.coid;
						   	       cout<<" |  "<<q.courn;
						   	       cout<<" | "<<q.fees;
						   	       cout<<"|\n";
						   	    cout<<"+------------------------------+\n";
							   }
							   cout<<"+--------------------------------+";
						   	   	system("pause");
						   	   	break;
								}
							case '4':
							  {
							  	system("cls");
							  	cout<<"\t\t\tEMPLOYEE POST DETAILS\n\n";
							  	ns=fopen("covid.txt","rb+");
							  	rewind(ns);
							  	
							  	cout<<"+----------------------------------+\n";
							  	cout<<"| Post id | Post Name | Salaryrate |\n";
							  	cout<<"+----------------------------------+\n";	
							  	
							  	while(fread(&x,td,1,ns)==1)
							  	{
							  		cout<<"| "<<x.psin;
							  		cout<<" | "<<x.jna;
			    		      		cout<<" | "<<x.srat;
							  		cout<<" |\n";
							  	   cout<<"+-------------------------------+\n";
								}
									cout<<"+-------------------------------+";
							  	system("pause");
							  	break;
							  }	
						/*	case '5':
							{
								system("cls");
								cout<<"*************FEEDBACKS FROM USERS*************\n";
								omin=fopen("feedo.txt","r+");
								while(fread(&mez,feedos,1,omin)==1)
								{
									if(mez.numba>1)
									{
										cout<<"\n\n\t\tFEEDBACK NUMBER="<<mez.numba;
										cout<<"\n\nFEEDBACK"<<mez.conte;
										
										
									}
								}
								cout<<"\n";
								system("pause");
								break;
							  }*/
							  case '5':
							  {
							  	system("cls");
							  	cout<<"************* SALARY DISTRIBUTION***********\n\n";
							  	ns=fopen("covid.txt","r+");
							  	while(fread(&x,td,1,ns)==1)
							  	{
							  		cout<<"\n\t\tPost="<<x.jna;
							  		cout<<"\n\t\tSalary Formula="<<x.srat*100<<"%  * (Total students enrolled's fee)\n\n";
								  }
								  cout<<"\n";
								  system("pause");
								  break;
									}	  
						   case '6':
					          gy=0;	
				}
				
			}
				break;
				
		   		
			}
			case '2':
		       {
		       	   system("cls");
		       	  cout<<"*********STUDENT FEE SUBMISSION PAGE***********";
		       	  cout<<"\n\n\n\n";
		       	  cout<<"\t\t\t\tEnter enroll no=";
		       	  int enoo;
		       	  cin>>enoo;
		       	  cout<<"\t\t\t\tEnter semester= ";
		       	  int semo;
		       	  cin>>semo;
		       	  rewind(po);
		       	  int sdfg=0;
		       	  //system("cls");
		       	  int fl2=1;
		       	  while(fread(&s,recors,1,po)==1)
		       	  {	 
		       	  	 if(enoo==s.enrolln&&semo==s.sem)
		       	  	 {
						fl2=0;
						system("cls");
						cout<<"                      FEE SUBMISSION PAGE\n";
		       	      	cout<<"\n\n\t\tFirst name=";
		       	  	    cout<<s.firstn;
		       	  	    cout<<"\n\n\t\tLast name=";
		       	  	    cout<<s.lastn;
		       	  	    //cout<<"\t\t addresss=";
		       	    	//cout<<"\t\t\tclass=";
		       	    	//cout<<"\t\t\trollno=";
		       	    	if(strcmp(s.status,"PAID")==0)
		       	    	{
		       	    		cout<<"\n FEES ALREADY PAID\n";
		       	    		sdfg=1;
						    break;
						   }
		       	    	ad=fopen("unk.txt","r+");
		       	    	rewind(ad);
		       	  	    while(fread(&q,sd,1,ad)==1)
					  {
						     	if(q.coid==s.courif)
		     			    	{			
		     			    	    cout<<"\n\n\t\tStudent's Course="<<q.courn;
							   		cout<<"\n\n\t\tFees="<<q.fees;
								 }
			 	      }
		       	     	cout<<"\t\t\tlate fees=";
		       	     	cout<<"0";
		       	    	cout<<"\n\n\n\n\n\t\t For FEE SUBMISSION press 1";
		       	    	char e=getche();
		       	  	if(e=='1')
		       	  	{
		       	  		system("cls");
		       	  		fflush(stdin);
		       	  		cout<<"\t\t\tCHOOOSE A PAYMENT MODE=\n";
		       	  		cout<<"\t\t1.)gpay";
		       	  		cout<<"\t\t2.)using net banking";
		       	  		cout<<"\t\t\t3.)using debit card";
		       	  		char t=getche();
		       	  		switch(t)
		       	  		{
		       	  			case '1':
		       	  				{
		       	  					system("cls");
		       	  					cout<<"\n\n\t\t\tenter your gpay upi id=";
		       	  					char l[100];
								    cin>>l;
								    cout<<"\n\n\t\t\tenter your upi pin=";
								    int  up;
								    cin>>up;
								    break;
									 }
								case '2':
									{
										system("cls");
										cout<<"\n\n\n\t\t\tenter your net banking user name=";
										char un[100];
										cin>>un;
										cout<<"\n\n\t\t\tenter your password=";
										int fl;
										cin>>fl;
										break;
										
									}
									case '3':
										{
											system("cls");
											cout<<"\n\n\n\t\t\tenter your debit card number=";
											int crd;
											cin>>crd;
											cout<<"\n\nEnter CVV no=";
											int cvv;
											cin>>cvv;
											break;
										}
									 
							 }
							 cout<<"\n\nFEES PAID SUCCESFULLY";
							 strcpy(s.status,"PAID");
							 fseek(po,-recors,SEEK_CUR);
							 fwrite(&s,recors,1,po);
							 system("pause");
							 
					}
					break;
					
		       	  	
				}
			}
			  if(sdfg==1)
			  {
			  	cout<<"\n";
			  	system("pause");
			  	break;
			  }
			//system("pause");
			  if(fl2==1)
			  {
			  	cout<<"\n\t\tNo such record found\n";
			  	system("pause");
			  }
				  break;
				 }
				 case '3':
				 {
				 	system("cls");
				 	cout<<"\t\t\tAPPLICATION INFORMATION\n\n";
				 	cout<<"ABOUT APPLICATION-\n";
				 	cout<<"\nThis Account Management Application is a small type of software that is used in colleges to maintain accounts\n";
				 	cout<<"of students and employees working there.This could also be used as a payment interface for students to pay there fees\n";
		            cout<<"\n\nABOUT DEVELOPERS-";
			        cout<<"\n\n This application is made by 3 students Khushal,Mohit,Narendra studying in 2nd year(session-2019-2020) of IIPS\n";
					cout<<"Department of DAVV University Indore.\n";
				 	system("pause");
				 	break;
				 	
				 }	
		/*		 case '4':
				 {
				 	    system("cls");
				         cout<<"*********************** FEEDBACK PAGE **************" 	;
				         omin=fopen("feedo.txt","r+");
				         rewind(omin);
				         struct feed ftn;
				         while(fread(&ftn,feedos,1,omin)==1)
				         {
				         	cout<<"\nhello="<<ftn.numba;
						 }
				         fseek(omin,0,SEEK_END);
				         mez.numba=ftn.numba+1;
				         cout<<"\nNumba="<<ftn.numba;
				         cout<<"\n\n\tENTER FEEDBACK FOR APPLICATION(IN 50 WORDS)";
				         cin.getline(mez.conte,300);
				         fseek(omin,0,SEEK_END);
				         fwrite(&mez,feedos,1,omin);
				         cout<<"\n\n";
				         system("pause");
				         break;
				 }	*/
				 case '4':
				 {
				 	fe=0;
				 	fclose(po);
				 	cout<<"\n\n\n";
				 	cout<<"\t\t\tTHANK YOU FOR USING THIS APPLICATION\n\n";
                    system("pause");
					  }	 
				 	
		}
		
		
		
	}}
	
	

