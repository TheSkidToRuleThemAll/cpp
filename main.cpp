#include <iostream>
#include <windows.h>
#include <conio.h>
#include <chrono>
using namespace std;
int main()
{

int score=0;
cout<<"Test your reflexes! Press CTRL as fast as you can once the game starts! \nPress any key to start";
getch();
bool isGameRunning=true;
 cout<<"\n\nReady...\n";
  Sleep(700);

    cout<<"Set...\n";
     Sleep(500);

      cout<<"GO!\n";
        Sleep(70);
const clock_t begin_time = clock();
score=100;
while(score>0)
{
    if(GetAsyncKeyState(VK_CONTROL))
    {
      //confirm key has been pressed
    isGameRunning=false;

switch (score) {
        case 0 ... 10:  
            cout << "Pfft! LOSER! Git gud lil bro,try harder" << endl;
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

   //display stats -------------------------------------------------------------------
    cout<<"\nTime elapsed:" << float( clock () - begin_time ) / CLOCKS_PER_SEC<<"s";
    cout<<"\nScore:"<<score<<"/100"<<endl;
   //display stats -------------------------------------------------------------------

       //end game
        score=0;
    }
    score--;
    Sleep(10);

    //message shown if time runs out and key has not been pressed
    if(score==0&&isGameRunning==1)
    {
    cout<<"You're so bad at this\n";
    cout<<"\nTime elapsed:" << float( clock () - begin_time ) / CLOCKS_PER_SEC<<"s";
    cout<<"\nScore:"<<score<<"/100"<<endl;
    }
}
return 0;
}
