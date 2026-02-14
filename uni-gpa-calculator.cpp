#include<iostream>
using namespace std;

void becholarsP();
int homepage();
void SCS();
void SDAAT();
void DCEE();
void DMSE();
void DECE();
void MME();
void BHS();
void DPS();
void BUSSINESS();
void EML();
void BSSE();
void gpa_cgpa_cal();
void exit_becholars();
int main()
{

	cout<<"                                   ==================================================                      "<<endl;
	cout<<"                                   --------PAK AUSTRIA FACHHOCHSCHULE----------------                      "<<endl;
	cout<<"                                   ==================================================                      "<<endl;
	
    homepage();
	return 0;
}

int homepage()
{
	int choice;
	int get;
	string sure;
	do{
			
	    cout<<"	|===================|"<<endl;
	    cout<<"	|-----Main Menu-----|"<<endl;
	    cout<<"	|===================|"<<endl;
	    cout<<endl;
		cout<<"  [1]Becholars Program"<<endl;
		cout<<"  [2]Exit"<<endl;
		cout<<"---------------------"<<endl;
		cout<<"Enter Your choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 	
		switch(choice)
		{
			case 1:
				{
					becholarsP();
					break;
				}
		
			case 2:
			    {
			    	int sure;
			    	cout<<"Are you sure you want to exit!(1=yes ,0=no)"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		cout<<"Thanks for using "<<endl;
			    		cout<<"Have A Nice Day"<<endl;
			    		exit(0);
					}
					else if(sure==0)
				   {
				   	    homepage();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid "<<endl;
				   	break;
				   }
				  break;
			    
			    	
			    }
			default :
			{
				cout<<"Invalid choice"<<endl;
				cout<<"Select the correct choice"<<endl;
				
			   break;
			    
			}    
		}
}while(choice!=2);
	  return 0;
}

void becholarsP()
{
	int choice;
	
	do{
		cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"                                         BECHOLAR PROGRAM MENU               "<<endl; 
		cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<endl;
		
		cout<<"|----------------------------------------------------------------------------|"<<endl;                 
	    cout<<"|[1]School of Computing Sciences                                             |"<<endl;
	    cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[2]School of Design Art and Architecture Technologies | SDAAT |             |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[3]Department of Chemical & Energy Engineering                              |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[4]Department of Materials Science & Engineering                            |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[5]Department of Electrical and Computer Engineering                        |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[6]Department of Mechanical & Manufacturing Engineering | MME               |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[7]Biological and Health Sciences                                           |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[8]Department of Pharmaceutical Sciences                                    |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[9]School of Business, Entrepreneurship and Professional Development        |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[10]Department of English and Modern Languages                              |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[11] Back To Home Page                                                      |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<"|[12] Exit                                                                   |"<<endl;
		cout<<"|----------------------------------------------------------------------------|"<<endl;
		cout<<endl;
		cout<<"-----------------------------------------------------------------------------"<<endl;
		cout<<"Select Your Choice:";
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		cout<<endl;
		switch(choice)
		{
			case 1:
				{
					SCS();
					break;
				}
			case 2:
				{
					SDAAT();
				    break;
				}
			case 3:
			    {
			    	DCEE();
					break;
				}
			case 4:
			    {
			    	DMSE();
					break;
				}
							
			case 5:
			    {
			    	DECE();
				break;
				}
				
			case 6:
				{
					MME();
				break;
				}
				
			case 7:
				{
				    BHS();
					break;
				}
			case 8:
			    {
			    	DPS();
				break;
				}
				
			case 9:
				{
					BUSSINESS();
				break;
				}
					
			case 10:
			    {
			    	EML();
				break;
				}
				
			case 11:
				{
					homepage();
				break;
				}
					
			case 12:
			    {
			    	int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		cout<<"Thanks for using"<<endl;
			    		cout<<"Have A Nice Day"<<endl;
			    		break;
					}
					else if(sure==0)
				   {
				   	    int choicee;
				   	    cout<<"You want to go:"<<endl;
				   	    cout<<"1)Home Page"<<endl;
				   	    cout<<"2)Becholars Program Menu"<<endl;
				   	    cin>>choicee;
				   	    switch(choicee)
				   	    {
				   	    	case 1:
				   	    		{
				   	    			homepage();
								   }
							case 2:
							{
								becholarsP();
								   }
							default:
							{
								cout<<"Invalid"<<endl;
										  }	   	   
						   }
				   	    
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid "<<endl;
				   	break;
				   }
				break;
				}
				
																
		}
	}while(choice!=12);
	

	
}
void SCS()
{
	int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]Bachelor of Science in Software Engineering"<<endl;
		cout<<"[2]Bachelor of Science in Computer Sciences"<<endl;
		cout<<"[3]Bachelor of Science in Artificial Intelligence"<<endl;
		cout<<"[4]Bachelor of Science in Data Science"<<endl;
		cout<<"[5]Bachelor of Science in Cyber Security"<<endl;
		cout<<"[6]Back To Home Page"<<endl;
		cout<<"[7]Back To Becholars Program Menu"<<endl;
		cout<<"[8]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
		
			case 1:
				{
				   gpa_cgpa_cal();
				break;	
				}
			case 2:
				{
					gpa_cgpa_cal();
						break;
				}
			case 3:
				{
					gpa_cgpa_cal();
					break;
				}	
			case 4:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 5:
				{
					gpa_cgpa_cal();
					break;
				}
			case 6:
				{
					homepage();
					break;
				}	
			case 7:
			   {
			   	    becholarsP();
					break;			
				}	
			case 8:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
					    break;
				   }
				   else
				   {
				   	cout<<"Invalid! "<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=8);
		
}
void SDAAT()
{
		int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]BS Animation Design"<<endl;
		cout<<"[2]B. Architecture"<<endl;
		cout<<"[3]BS Film & TV"<<endl;
		cout<<"[4]BS Game Design"<<endl;
		cout<<"[5]BS Information Design"<<endl;
		cout<<"[6]BS Textile Design"<<endl;
		cout<<"[7]BS Interior Design"<<endl;
		cout<<"[8]Bachelor of Fine Arts (BFA)"<<endl;
		cout<<"[9]Back To Home Page"<<endl;
		cout<<"[10]Back To Becholars Program Menu"<<endl;
		cout<<"[11]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
			case 1:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 2:
				{
					gpa_cgpa_cal();
						break;
				}
			case 3:
				{
				gpa_cgpa_cal();
					break;
				}	
			case 4:
				{
					gpa_cgpa_cal();
					break;
					
				}
			case 5:
				{
					gpa_cgpa_cal();
					break;
				}
				case 6:
				{
					gpa_cgpa_cal();
					break;
				}	
			case 7:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 8:
				{
				gpa_cgpa_cal();
					break;
				}
			case 9:
				{
					homepage();
					break;
				}	
			case 10:
			   {
			   	    becholarsP();
					break;			
				}	
			case 11:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid! "<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=11);
		
}
void DCEE()
{
	int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]BE Chemical Engineering"<<endl;
		cout<<"[2]BS Applied Chemistry"<<endl;
		cout<<"[3]Back To Home Page"<<endl;
		cout<<"[4]Back To Becholars Program Menu"<<endl;
		cout<<"[5]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
			case 1:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 2:
				{
					gpa_cgpa_cal();
						break;
				}
				case 3:
				{
					homepage();
					break;
				}	
			case 4:
			   {
			   	    becholarsP();
					break;			
				}	
			case 5:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid! "<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=5);
}
void DMSE()
{
		int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]BE Materials Engineering"<<endl;
		cout<<"[2]BE Metallurgical Engineering (Upcoming)"<<endl;
		cout<<"[3]Back To Home Page"<<endl;
		cout<<"[4]Back To Becholars Program Menu"<<endl;
		cout<<"[5]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
			case 1:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 2:
				{
					gpa_cgpa_cal();
						break;
				}
				case 3:
				{
					homepage();
					break;
				}	
			case 4:
			   {
			   	    becholarsP();
					break;			
				}	
			case 5:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid! "<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=5);
}
void DECE()
{
		int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]BE Electrical Engineering"<<endl;
		cout<<"[2]BS Computer Engineering"<<endl;
		cout<<"[3]BS Robotics"<<endl;
		cout<<"[4]BS Computer Engineering Technology"<<endl;
		cout<<"[5]Back To Home Page"<<endl;
		cout<<"[6]Back To Becholars Program Menu"<<endl;
		cout<<"[7]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
			case 1:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 2:
				{
					gpa_cgpa_cal();
						break;
				}
			case 3:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 4:
				{
					gpa_cgpa_cal();
						break;
				}
			case 5:
				{
					homepage();
					break;
				}	
			case 6:
			   {
			   	    becholarsP();
					break;			
				}	
			case 7:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid! "<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=7);
}
void MME()
{
		int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]BSc Mechanical Engineering Technology"<<endl;
		cout<<"[2]BSc Biomedical Engineering Technology"<<endl;
		cout<<"[3]BE Manufacturing Engineering (Upcoming)"<<endl;
		cout<<"[4]BE Mechanical Engineering (Upcoming)"<<endl;
		cout<<"[5]BE Clinical Engineering (Upcoming)"<<endl;
		cout<<"[6]Back To Home Page"<<endl;
		cout<<"[7]Back To Becholars Program Menu"<<endl;
		cout<<"[8]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
			case 1:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 2:
				{
					gpa_cgpa_cal();
						break;
				}
				case 3:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 4:
				{
					gpa_cgpa_cal();
						break;
				}
				case 5:
				{
		            gpa_cgpa_cal();
					break;
				}	
				case 6:
				{
					homepage();
					break;
				}	
			case 7:
			   {
			   	    becholarsP();
					break;			
				}	
			case 8:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid! "<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=8);
}
void BHS()
{
		int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]BS Biomedical Sciences"<<endl;
		cout<<"[2]BS Biotechnology"<<endl;
		cout<<"[3]BS Bioinformatics"<<endl;
		cout<<"[4]BS Microbiology"<<endl;
		cout<<"[5]BS Health Informatics and Management System"<<endl;
		cout<<"[6]BS Medical Lab Technology"<<endl;
		cout<<"[7]Back To Home Page"<<endl;
		cout<<"[8]Back To Becholars Program Menu"<<endl;
		cout<<"[9]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
			case 1:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 2:
				{
					gpa_cgpa_cal();
						break;
				}
				case 3:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 4:
				{
					gpa_cgpa_cal();
						break;
				}
				case 5:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 6:
				{
					gpa_cgpa_cal();
						break;
				}
				case 7:
				{
					homepage();
					break;
				}	
			case 8:
			   {
			   	    becholarsP();
					break;			
				}	
			case 9:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid! "<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=9);
}
void DPS()
{
		int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]Doctor of Pharmacy"<<endl;
		cout<<"[2]Doctor of Physiotherapy"<<endl;
		cout<<"[3]BS Applied Psychology"<<endl;
		cout<<"[4]Back To Home Page"<<endl;
		cout<<"[5]Back To Becholars Program Menu"<<endl;
		cout<<"[6]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
			case 1:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 2:
				{
					gpa_cgpa_cal();
						break;
				}
				case 3:
				{
					gpa_cgpa_cal();
						break;
				}
				case 4:
				{
					homepage();
					break;
				}	
			case 5:
			   {
			   	    becholarsP();
					break;			
				}	
			case 6:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid! "<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=6);
}
void BUSSINESS()
{
		int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]Bachelor of Business Administration"<<endl;
		cout<<"[2]BS Business Analytics"<<endl;
		cout<<"[3]BS Accounting & Finance"<<endl;
		cout<<"[4]BS Commerce"<<endl;
		cout<<"[5]BS Entrepreneurship"<<endl;
		cout<<"[6]Back To Home Page"<<endl;
		cout<<"[7]Back To Becholars Program Menu"<<endl;
		cout<<"[8]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
			case 1:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 2:
				{
					gpa_cgpa_cal();
						break;
				}
				case 3:
				{
				gpa_cgpa_cal();
					break;
					
				}
			case 4:
				{
					gpa_cgpa_cal();
						break;
				}
				case 5:
				{
		            gpa_cgpa_cal();
					break;
				}	
				case 6:
				{
					homepage();
					break;
				}	
			case 7:
			   {
			   	    becholarsP();
					break;			
				}	
			case 8:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid! "<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=8);
}
void EML()
{
		int choice;
	do{
		cout<<"                     ===============================Select Your Degree Programs===========================               "<<endl; 
		cout<<"[1]BS English"<<endl;
		cout<<"[2]Back To Home Page"<<endl;
		cout<<"[3]Back To Becholars Program Menu"<<endl;
		cout<<"[4]Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>choice;
		cin.clear();
        cin.ignore(10000, '\n'); 
		switch(choice)
		{
			case 1:
				{
				gpa_cgpa_cal();
					break;
					
				}
			
				case 2:
				{
					homepage();
					break;
				}	
			case 3:
			   {
			   	    becholarsP();
					break;			
				}	
			case 4:
				{
						int sure;
			    	cout<<"---Are you sure you want to exit!(1=yes ,0=no)---"<<endl;
			    	cin>>sure;
			    	if(sure==1)
			    	{
			    		homepage();
			    		break;
					}
					else if(sure==0)
				   {
				   	    exit_becholars();
				   	    break;
				   	  
				   }
				   else
				   {
				   	cout<<"Invalid !"<<endl;
				   	break;
				   }
					break;					
			    }	
			default:
				{
					cout<<"Invalid Choice!"<<endl;
					break;							
				}
		}
	}while(choice!=4);
}
void gpa_cgpa_cal()
{
		int select,semester,subject,CR,option,Creidt;
		double gp,gpa=0,gppa;
	                cout<<" [1] GPA "<<endl;
	                cout<<"[2] CGPA"<<endl;
					cin>>select;
					cin.clear();
                    cin.ignore(10000, '\n'); 
					if(select == 1)
					{
						cout<<" semester  number: ";
						cin>>semester;
						cout<<endl;
						cout<<"Enter Total Number of subject:";
						cin>>subject;
						cout<<"Enter Total Credit Hour:";
						cin>>Creidt;
						cout<<endl;
						for(int i=1;i<=subject;i++)
						{
							cout<<"Enter GP of Subject "<<i<<":";
							cin>>gp;
							cout<<endl;
							cout<<"Enter Cridet Hour Of Subject"<<i<<":";
							cin>>CR;
							cout<<endl;
							gpa=gpa+(gp*CR);
							
						}
						    gppa=gpa/Creidt;
						cout<<"------------------------------------------------------"<<endl;
						cout<<"Your GPA of semester "<<semester<<":"<<gppa<<endl;
						cout<<"-------------------------------------------------------"<<endl;
						do{
						cout<<"[1]Back To Home page"<<endl;
						cout<<"[2]Back To Becholars Program"<<endl;
						cout<<"[3]Back To School of Computing Sciences  Program"<<endl;
						cout<<"[4]Exit"<<endl;
						cout<<"Enter Your option:";
						cin>>option;
						cin.clear();
                        cin.ignore(10000, '\n'); 
						switch(option)
						{
							case 1:
								{
									homepage();
									break;
								}
							case 2:
							{
								becholarsP();
								break;
								}	
							case 3:
							{
								SCS();
								break;
								}	
							case 4:
							{
								homepage();
								break;
								}	
							default:
							{
								cout<<"Invalid! "<<endl;
								break;
								}	
						}
						}while(option!=4);
					
					}
					else if (select == 2)
					{
						double gpaa;
						double total=0,cgpa;
						for(int i=1;i<=8;i++)
						{
							cout<<"Enter GPA of semester "<<i<<":";
							cin>>gpaa;
							total=total+gpaa;
						}
						cgpa=total/8;
						cout<<"---------------------------------------------------"<<endl;
						cout<<"Your CGPA:"<<cgpa<<endl;
						cout<<"---------------------------------------------------"<<endl;
							do{
						cout<<"[1]Back To Home page"<<endl;
						cout<<"[2]Back To Becholars Program"<<endl;
						cout<<"[3]Back To School of Computing Sciences  Program"<<endl;
						cout<<"[4]Exit"<<endl;
						cout<<"Enter Your option:";
						cin>>option;
						cin.clear();
                        cin.ignore(10000, '\n'); 
						switch(option)
						{
							case 1:
								{
									homepage();
									break;
								}
							case 2:
							{
								becholarsP();
								break;
								}	
							case 3:
							{
								SCS();
								break;
								}	
							case 4:
							{
								homepage();
								break;
								}	
							default:
							{
								cout<<"Invalid! "<<endl;
								break;
								}	
						}
						}while(option!=4);
					
					}
					else
					{
						cout<<"Invalid! "<<endl;
					}
					
}
void exit_becholars()
{
	int choicee;
				   	    cout<<"You want to go:"<<endl;
				   	    cout<<"[1]Home Page"<<endl;
				   	    cout<<"[2]Becholars Program Menu"<<endl;
				   	    cout<<"[3]School Of Computing Scince Menu"<<endl;
				   	    cin>>choicee;
				   	    cin.clear();
                        cin.ignore(10000, '\n'); 
				   	    switch(choicee)
				   	    {
				   	    	case 1:
				   	    		{
				   	    			homepage();
								   }
							case 2:
							{
								becholarsP();
								   }
						    case 3:
							{
								SCS();
								break;
									   }		   
							default:
							{
								cout<<"Invalid!"<<endl;
										  }	   	   
						   }
}
