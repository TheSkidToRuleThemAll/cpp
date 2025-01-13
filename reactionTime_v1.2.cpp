/*

Dev Note (Nedelcu Denis Cristian,LTCI)
Hi,i'm too lazy to create a separate readme file so i decided to leave a message in here.
What i wanted to say is that i used to play these sorts of games online when i was 11 or so (albeit with a way better looking UI)
and i thought it would be cool to recreate this game,which i was into a while back.
I couldn't find the original site so i made own program from scratch as a fun little experiment :]
I know this isn't the best game in the world as i'm a newbie and the code is more likely than not very painful to read
but then again,i made this project for myself and thought i should,regardless of how terrible i am at programming,
release this project on my page as open-source.
Without further ado,i will link my github below,and to you,my dear reader,i wish happy gaming! :D
https://github.com/TheSkidToRuleThemAll

*/
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <chrono>
using namespace std;
bool cheater=false;
int main()
{
int score=100;
bool isGameRunning=true;
while(isGameRunning==true){
cout<<"Test your reaction time! Press CTRL as fast as you can once the game starts!";Sleep(300);cout<<" \nPress any key to start";
getch();
 cout<<"\n\nReady...\n";
  Sleep(700);
    cout<<"Set...\n";
    if(GetAsyncKeyState(VK_CONTROL))
        {
        //detects if player tried cheating by holding down/pressing the CTRL key before the game started
         score=0;
         cheater=true;
        }
     Sleep(500);



      cout<<"GO!\n"; if(cheater==true) system("cls");
        Sleep(70);
const clock_t begin_time = clock();
while(score>=0) //executes while game is ongoing
{
    if(GetAsyncKeyState(VK_CONTROL)) //executes once game has finished
    {


switch (score) {
        case 0 ... 10:
            cout << "Pfft! what a LOSER!" << endl;
            if(cheater==true)
            {
             //laughs at player if they tried to cheat
             cout<<"You really thought you were slick by just holding the CTRL key down,didn't you?";
             Sleep(1500); //gives cheater time to read the message
             isGameRunning=false; //closes game
            }
                break;
        case 11 ... 30:
            cout << "Trash" << endl;
                break;
        case 31 ... 50:
            cout << "Pretty bad" << endl;
                break;
        case 51 ... 70:
            cout << "Coulda been worse" << endl;
                break;
        case 71 ... 80:
            cout << "Not half bad,but try harder" << endl;
                break;
        case 81 ... 90:
            cout << "Great!" << endl;
                break;
        case 91 ... 100:
            cout << "Perfect!" << endl;
                break;
        default:
            cout << "This was not supposed to happen" << endl;
                }

   //display post-game stats -------------------------------------------------------------------
    cout<<"\nTime elapsed:" << float( clock () - begin_time ) / CLOCKS_PER_SEC<<"s";
    cout<<"\nScore:"<<score<<"/100"<<endl;
   //display post-game stats -------------------------------------------------------------------

       //end game
        score=0;
    }

    else if(score<1){
    //activates if no key has been pressed and time ran out
    cout<<"Pfft LOSER!!!\n";
    cout<<"Time elapsed:" << float( clock () - begin_time ) / CLOCKS_PER_SEC<<"s";
    cout<<"\nScore:"<<score<<"/100"<<endl;
    }

    score--; //removes 1 score per tick- if score is 0 game ends and above elif statement executes
    Sleep(10); // cool-down for score removal so game doesn't end too fast
}

    cout<<"\nPlay again?(y/n) ";
    char answer;
    cin>>answer;
    score=100;
    system("cls"); //clears screen once player decides wether to keep playing so the interface is clean

    if(answer=='n' || answer=='N') //if user exits game
        {
            if(cheater==false) //only greets players who didn't cheat
        cout<<"See ya next time! :D";
        isGameRunning=false;
        }

        else isGameRunning=true; //restarts game,or if player has cheated,shuts down regardless
        Sleep(300); //(not neccesary,the reset pops up too fast for my liking if turned off)
if(cheater==true) {cout<<"out my face,LOSER! Don't even think i forgot you cheated!"; isGameRunning=false;} //fun little easter egg if cheater tries playing again
}


return 0;
}
