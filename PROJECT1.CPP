#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  
  while(1)
{

  int p;
  fopen("pro.txt","r");
  printf("\t\t\t\tTOP 20 SPORTS GAMES\n\n");
  printf("\t\t\tPRESS NUMBER TO KNOW ABOUT GAME\n\n");
  printf("Cricket-----  1\t\t\t");
  printf("Footboll----- 2\t\t\t");
  printf("Badmantin---- 3\n");
  printf("Hockey ------ 4\t\t\t");
  printf("Kabaddi------ 5\t\t\t");
  printf("Tennis ------ 6\n");
  printf("Wrestling---- 7\t\t\t");
  printf("Boxing------- 8\t\t\t");
  printf("Table Tennis- 9\n");
  printf("Motorsport--- 10\t\t");
  printf("Archery------ 11\t\t");
  printf("Gymnastic---- 12");
  printf("Athletics---- 13\t\t");
  printf("Swimming----- 14\t\t");
  printf("Kho Kho------ 15");
  printf("Chess-------- 16\t\t");
  printf("Weightlifting- 17\t\t");
  printf("Shooting----- 18");
  printf("Body Building- 19\t\t");
  printf("Basketball---- 20\t\t");
  printf("Exit---------- 0\n");
  printf("Press Your Choice :");
  scanf("%d",&p);

  switch(p)
  {
    case 1:
    printf("->A Match is Played between 2 Sides.\n\n->Each of 11 Players.\n\n->One of whom shall be Caption.\n\n->Equipment - Cricket Bat,Cricket Ball,Cricket Stumps.\n\n ");
    break;
    case 2:
    printf(" ->Team Members - 11 per side(Including Goal Keeper)\n\n->Mixed Gender - No,Separate Cometitions\n\n->Equipment - Football(or soccer ball)\n\n ");
    break;
    case 3:
    printf(" ->You Can Have Either '2' or '4' Players on a Badminton Court.\n\n->'1' Player on Each Side OR A Team of '2'Playerd on Each Side.\n\n->1-Against-1 is called Singles.\n\n->2-Against-2 is called Doubles.\n\n->Eqipment - Badminton Racket,Suttle,Net.\n\n ");
    break;
    case 4:
    printf(" ->Only 2 Teams of '11' palyers Each are Allowed on the field at once.\n\n->10 Field Players and 1 Goalie.\n\n->Equipment - Hockey stick.\n\n");
    break;
    case 5:
    printf("->In The International Team Version of Kabaddi , 2 Teams and Each Team\n has '7'Players.\n\n->Each has '5' supplementary Players held in Reserve for Substitution.\n\n->Equipment - Players-Self,Court(33 ft * 43ft).\n\n ");
    break;
    case 6:
    printf("->It is either Played with '2'(singles match).\n\n->OR '4' Players(Doubles match).\n\n->Players Stand on Opposite of the Net.\n\n->Playerd Hit the Tennis Ball Back and Forth to Each Other.\n\n->Equipment - Tennis Racket,A Rectanglar Shaped Court.\n\n");
    break;
    case 7:
    printf("->A Wrestling is a Physical Competition between '2'(Occasionally more).\n\n->OR Sparring partners,who attempt to gain and maintain a Superior Position.\n\n->There are wide range of Styles  with varying Rules.\n\n->Equipement - Wrestlers,Wrestling Court.\n\n");
    break;
    case 8:
    printf("->The Boxing is a 1-Against-1 Game.\n\n->In this Game, The Energy Level of Boxers should be High.\n\n->Equipment - Boxing Ring,Head Protector.\n\n");
    break;
    case 9:
    printf("->Each Team consists of '3' Players\n\n->Matches End when a Team has won Three Individual Games.\n\n->Players Take Turns To Hit the Tennis Ball.\n\n->Equipment - Table Tannis Racket,Table,Table Tannis Ball.\n\n");
    break;
    case 10:
    printf("->According to Internarional Motersport Cahmpianship, More then '20' Racer are\n in single Track.\n\n->Racer are Perform Round Racing Around the Track.\n\n->Equipment - MoterBike,Protecters.\n\n");
    break;
    case 11:
    printf("->The Sport of Extream Archery consists of Teams '4'Players on Opposing sides.\n\n->The Playing Field,Separated by the Natural Zone.\n\n->Teams begin the Game with the same Number of Players on the Field.\n\n->The object of the Game is to score the Most Points during a timed Match.\n\n");
    break;
    case 12:
    printf("->For the 2020 Olmpics,Teams will consists of '4' Gymnasts.\n\n->The Format of Team Qualifications is 4-4-3.\n\n");
    printf("NOTE:- Each Country is Allowed '2' Additional Gymanasts as Substitution.\n");
    break;
    case 13:
    printf("->Athletics is a group of Sporting events that involves competitive 1.Running 2.Jumping 3.Throwing etc.\n\n->The most comman types of Athletics competitive are 'Track and field' ,\n 'Road Running' , 'Cross Country Running and Race Running'\n\n->Mixed Gender - Yes\n\n->Type - Outdoor or Indoor\n\n");
    break;
    case 14:
    printf("->Competitive Swimming is Varied Distance Events in \n1.Butterfly\n\n 2.Backstroke\n\n 3.Breaststroke\n\n 4.Freestyle\n\n 5.Individual\n\n\n->Olympic - 1896.");
    break;
    case 15:
    printf("A Team consists of '12' Players .\n\n->One Coach,One Manager and other Supporting Staff.\n\n->'9' Players will take the field in the beginning to start the Match.\n\n\n->'3' Defenders of Opposite team try to avoid being touched by the chasers.\n\n->It is a High Energy Game that involves Running and chasing.\n\n\n");
    break;
    case 16:
    printf("->Chess is a board Game for '2' Players.\n\n->It is Played in a square board,made of 64 smaller square.\n\n->Each Player start with sixteen pieces:Eight Pawns,Two Knights,Two Bishops,Two Rooks,One Queen and One King.\n\n\n");
    break;
    case 17:
    printf("->Each Country is allowed to have a Team of '10' Men and '9' Woman Athletes.\n\n->But only '8' Man and '7' Woman are allowed to Participate.\n\n->In fact , in Each Catagory only ' SINGLE ' participate is allowed.\n\n\n");
    printf("NOTE : - Tournament are conducted by\n The International Weighlifting Federation(IFW)\n\n");
    break;
    case 18:
    printf("->First Played - Switzerland in the second half of the '15th' century.\n\n->Team Members - yes or No ,Depending upon Compition.\n\n->Higest Governing Body - Several Organizations.\n\n->Mixed Gender - Yes or No ,Depending on Discipline .\n\n\n");
    break;
    case 19:
    printf("->Each Team's SINGLE bodybuilder show their Musules and body on the Stage.\n\n->Body Building takes a great amount of effort and time to reach the desired\n results.\n\n->Higest Governing body : International Federation of BodyBuilding and Fitness.\n\n->First developed : ENGLAND,late 1800s.\n\n\n");
    break;
    case 20:
    printf("->Basketball Team with '5' Players on the court at any given time.\n\n->'7' Players are allowed as subtitutions.\n\n->The 5 players can be segregated into the following positions:Point Guard:\nUsally players with the best ball-handling skills and vision in the team play as\npoint guard.\n\n\n");
    break;
    case 0:
    exit(0);
    default:
    printf("Invalid Choice\n\n");
  }
  getch();
 }
}