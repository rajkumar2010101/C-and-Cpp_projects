#include<iostream>
 using namespace std;
 
 void Start(){
 	system("cls");
 	system("color d");
 	int ch,comm;
 	cout<<"                                     ****************************************"<<endl;
 	cout<<"                                           Programming Quiz by Rajkumar Jangid                           "<<endl;
 	cout<<"                                     ****************************************                     "<<endl;
    cout<<"                            ======================================================="<<endl;
 	cout<<"                              Quiz desinged for computer science and engineering students   "<<endl;
 	cout<<"                                     Take this Quiz and check Your Skills         "<<endl;
 	cout<<"                              In this quiz include all subjects and tools knowledge   "<<endl;
 	cout<<"                                             of Engineering  . Thank You                    "<<endl;
 	cout<<"                            ========================================================"<<endl;
 	Question1:
 	cout<<"Q.1 Which aspect of cybersecurity Do Distrubuted Denial of service (DDOS) effects the most?"<<endl;
 	cout<<"1.Confidentliy"<<endl;
 	cout<<"2.Availability"<<endl;
 	cout<<"3.Integrity"<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 2:
 	 		system("color a");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Right Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Next Question! (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question2;
			  }
			  else if(ch==2){
			  	goto Question1;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 1:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*****************************"<<endl;
 	 		cout<<"*****************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question1;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		break;
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Wrong Answer! "<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Repeat Question! (Press 1)"<<endl;
 	 			cout<<"2.Exit (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question1;
				  }
				  else if(ch==2){
				   cout<<"Thanks.."<<endl;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
 	 			
	  }
	  Question2:
	cout<<"Q.2 Who is Founder of Python?"<<endl;
 	cout<<"1.V an der dussun."<<endl;
 	cout<<"2.Guido van Rossum."<<endl;
 	cout<<"3.Gorge Tayler."<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question2;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 2:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question3;
				  }
				  else if(ch==2){
				   goto Question1;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question2;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
 	 			
	  }
	  Question3:
	  	
    cout<<"Q.3 Which type of security assessment requries access to source code?"<<endl;
 	cout<<"1.Dynamic Analysis."<<endl;
 	cout<<"2.Static Analysis."<<endl;
 	cout<<"3.Penetration Testing"<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question3;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 2:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question4;
				  }
				  else if(ch==2){
				   goto Question2;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question3;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
          }
          Question4:
    cout<<"Q.4 What is correct syntax for creating a variable that is bound to a list?"<<endl;
 	cout<<"1.my_list = (2,'apple',3.5)"<<endl;
 	cout<<"2.my_list = to_list(2,'apple',3.5)"<<endl;
 	cout<<"3.my_list = [2,'apple',3.5]"<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question4;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 3:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question5;
				  }
				  else if(ch==2){
				   goto Question4;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 2:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question4;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
          }
          Question5:
    cout<<"Q.5 What does this function return ?"<<endl;
    cout<<"int f1(int a , int b) { return (a > b ? a:b ); }"<<endl;
 	cout<<"1.runtime error . "<<endl;
 	cout<<"2.The greater value of the two passed Parameters . "<<endl;
 	cout<<"3.The smaller value of the two passed Parameters . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question5;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 2:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question6;
				  }
				  else if(ch==2){
				   goto Question5;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question5;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
          }
          Question6:
    cout<<"Q.6 Identify the hardware structure which is not supported by Red Hat?"<<endl;
 	cout<<"1.Alpha . "<<endl;
 	cout<<"2.SPARC . "<<endl;
 	cout<<"3.Macintosh . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question6;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 3:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question7;
				  }
				  else if(ch==2){
				   goto Question6;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 2:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question6;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
          }
          Question7:
    cout<<"Q.7 Which is the core of the operating system?"<<endl;
 	cout<<"1.script . "<<endl;
 	cout<<"2.kernel . "<<endl;
 	cout<<"3.Commands . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question7;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 2:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question8;
				  }
				  else if(ch==2){
				   goto Question7;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question7;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
          }
          Question8:
    cout<<"Q.8 Which of the following operating systems is not owned and licensed by a company?"<<endl;
 	cout<<"1.Linux . "<<endl;
 	cout<<"2.Windows . "<<endl;
 	cout<<"3.Mac . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question8;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 2:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question9;
				  }
				  else if(ch==2){
				   goto Question8;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question8;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
          }
          Question9:
    cout<<"Q.9 Who is the father of Software Engineering?"<<endl;
 	cout<<"1.Watts S. Humphrey . "<<endl;
 	cout<<"2.Boris Beizer . "<<endl;
 	cout<<"3.Margaret Hamilton . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 2:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question9;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 1:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question10;
				  }
				  else if(ch==2){
				   goto Question9;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question9;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
          }
          Question10:
    cout<<"Q.10 Which one of the following can be considered as the class of computer threats?"<<endl;
 	cout<<"1. Both 2 and 3 .  "<<endl;
 	cout<<"2.Phishing . "<<endl;
 	cout<<"3.DOS Attack . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 2:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question10;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 3:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question11;
				  }
				  else if(ch==2){
				   goto Question10;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 1:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question10;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
          }
          Question11:
    cout<<"Q.11 Which of the following refers to stealing one's idea or invention of others and use it for their own benefits?"<<endl;
 	cout<<"1.Intellectual property rights . "<<endl;
 	cout<<"2.All of the . "<<endl;
 	cout<<"3.Plagiarism . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question11;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 2:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question12;
				  }
				  else if(ch==2){
				   goto Question10;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question11;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
          }
          Question12:
    cout<<"Q.12  What is difference between unstructured and structured data ?"<<endl;
 	cout<<"1.Structured data has clearly defined data types . "<<endl;
 	cout<<"2.Unstructured data is much easier to store . "<<endl;
 	cout<<"3.Structured data is much more popular . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 2:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question12;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 1:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question13;
				  }
				  else if(ch==2){
				   goto Question11;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question12;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
        }
        Question13:
    cout<<"Q.13 What is best practice after launching a major change to your home page ?"<<endl;
 	cout<<"1.Create a new filter . "<<endl;
 	cout<<"2.Create an annotation . "<<endl;
 	cout<<"3.Create a new property . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question13;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 2:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question14;
				  }
				  else if(ch==2){
				   goto Question12;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question13;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
        }
        Question14:
    cout<<"Q.14 What command would you use to create a new Git repository ?"<<endl;
 	cout<<"1.git start . "<<endl;
 	cout<<"2.git new . "<<endl;
 	cout<<"3.git init . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question14;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 3:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question15;
				  }
				  else if(ch==2){
				   goto Question13;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 2:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question14;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 				
        }
        Question15:
    cout<<"Q.15 The shell looks at the contents of a particular variable to identify which programs it can run. What is the name of this varible?"<<endl;
 	cout<<"1.$PATHS . "<<endl;
 	cout<<"2.$PROGRAM . "<<endl;
 	cout<<"3.$PATH . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question15;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 3:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question16;
				  }
				  else if(ch==2){
				   goto Question14;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 2:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question15;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 }
 	    Question16:
 	cout<<"Q.16 Which keyword would you add to make this method the entry point of the program?"<<endl;
 	cout<<"public void main(String[] input) {}"<<endl;
 	cout<<"1.static . "<<endl;
 	cout<<"2.args . "<<endl;
 	cout<<"3.String . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 2:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question16;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 1:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question17;
				  }
				  else if(ch==2){
				   goto Question15;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question16;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 }
 	 Question17:
 	cout<<"Q.17 What is the value of variable c at the end of this program?"<<endl;
 	cout<<"main() {"<<endl;
 	cout<<"    int a , b , c; "<<endl;
 	cout<<"    a = 10 , b = 50;"<<endl;
 	cout<<"    c = a * b % a;  "<<endl;
 	cout<<"       }"<<endl;
 	cout<<"1. 5 . "<<endl;
 	cout<<"2. 0 . "<<endl;
 	cout<<"3. 50 . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question17;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 2:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question18;
				  }
				  else if(ch==2){
				   goto Question16;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question17;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 }
 	 Question18:
 	cout<<"Q.18 Linux file access control lists(ACLs) are _ _ _?"<<endl;
 	cout<<"1. Discretionary access control system . "<<endl;
 	cout<<"2. Standard Linux permissions . "<<endl;
 	cout<<"3. A type of firewall for Linux . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 2:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question18;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 1:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question19;
				  }
				  else if(ch==2){
				   goto Question17;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question18;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 }
 	 Question19:
 	cout<<"Q.19 Which of the following is a correct identifier in C++?"<<endl;
 	cout<<"1.7VARNAME . "<<endl;
 	cout<<"2.7var_name . "<<endl;
 	cout<<"3.VAR_1234 . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 1:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question19;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 3:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Next Question (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 goto Question20;
				  }
				  else if(ch==2){
				   goto Question18;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 2:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question19;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 }
 	 Question20:
 	cout<<"Q.20 Who was first developed the computer?"<<endl;
 	cout<<"1.Charls Veves . "<<endl;
 	cout<<"2.Thomas Grhamwell . "<<endl;
 	cout<<"3.CV Raman . "<<endl;
 	cout<<"Enter Choice:";
 	cin>>ch;
 	 switch(ch){
 	 	
 	 	case 2:
 	 		system("color c");
 	 		system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question20;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 		case 1:
 	 			system("color a");
 	 			system("cls");
 	 			cout<<"*****************"<<endl;
 	 			cout<<" Right Answer."<<endl;
 	 			cout<<"*****************"<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"================="<<endl;
 	 			cout<<"1.Add Comment (Press 1)"<<endl;
 	 			cout<<"2.Previous Question (Press 2)"<<endl;
 	 			cin>>ch;
 	 			if(ch==1){
 	 				
 	 			 cout<<"Excellent"<<endl;
 	 			 cout<<"Very Good"<<endl;
 	 			 cout<<"Good"<<endl;
 	 			 cout<<"Your Choice:"<<endl;
 	 			 cin>>comm;
 	 			 cout<<"Your Comment:"<<comm<<endl;
 	 			 cout<<"Thanks For Add Comment"<<endl;
 	 			 cout<<"I Hope This Quiz Is Very Helpful"<<endl;
				  }
				  else if(ch==2){
				   goto Question19;
				  }
				  else{
				  	cout<<"Invaild Input"<<endl;
				  }
 	 			
 	 			
 	 			
 	 			break;
 	 		
 	 		case 3:
 	 			system("color c");
 	 			system("cls");
 	 		cout<<"====================="<<endl;
 	 		cout<<"    Wrong Answer!   "<<endl;
 	 		cout<<"======================"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"*************************"<<endl;
 	 		cout<<"1.Question Repeat (Press 1)"<<endl;
 	 		cout<<"2.Exit (Press 2)"<<endl;
 	 		cout<<"Enter Input:"<<endl;
 	 		cin>>ch;
 	 		if(ch==1){
 	 			goto Question20;
			  }
			  else if(ch==2){
			  	cout<<"Thanks.."<<endl;
			  }
			  else{
			  	cout<<"Invaild Choice";
			  }
 	 		
 	 		break;
 	 			
 	 			default:
 	 				cout<<"Invaild Input..."<<endl;
 	 }
 	 	
 	 	         	
          			   
}
   
 void Exit(){
 	
 }
int main(){
	system("color 9");
	int ch;
	cout<<"                                =================================================              "<<endl;
	cout<<"                                                  Networking Quiz                               "<<endl;
	cout<<"                                =================================================              "<<endl;
	cout<<"1.Play"<<endl;
	cout<<"2.Exit"<<endl;
	cout<<"Enter Input:"<<endl;
	cin>>ch;
	 
	   switch(ch){
	   	
	   	
	    case 1:
	    	Start();
	    	break;
	    		case 2:
	    			Exit();
	    			break;
	    			
	    			
	    			default:
	    				cout<<"Invaild Input"<<endl;
	    				
	   }
	
	
	
}
