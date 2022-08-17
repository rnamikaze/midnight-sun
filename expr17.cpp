#include <iostream>
#include <unistd.h> // for sleep()
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void clear() {
    system("cls");
}
void red() {
    system("color 04");
}
void myColor() {
    // 7 default
    // 4 red
    // 15 white
    // 79 white on red
    // 124 red on white
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    // you can loop k higher to see more color choices
    for(int k = 1; k < 255; k++)
    {
        // pick the colorattribute k you want
        SetConsoleTextAttribute(hConsole, k);
        cout << k << " I want to be nice today!" << endl;
    }
}
void setc(int pnt = 15) {
    SetConsoleTextAttribute(hConsole, pnt);
}
void sleepcp(int milli) {
   // Cross-platform sleep function
   clock_t end_time;
   end_time = clock() + milli * CLOCKS_PER_SEC/1000;
   while (clock() < end_time) {
      //blank loop for waiting
   }
}

// ==================================================

int main()
{
    setc(7);
    for(int i = 1; i <= 14; i++){
        
        for(int j = 1; j <= 6; j++){
            if(j<=5){
                setc(7);
                cout << " ";
            }else{
                if(i >=4 && i<=11){
                    if(i <= 7){
                        setc(79);
                    }else{
                        setc(124);
                    }
                }else{
                    setc(7);
                }

                cout << "HAPPY 77TH INDONESIA INDEPENDENCE DAY" << endl;
            }
        }
        sleepcp(100);
    }
    sleepcp(1000);
    clear();
    setc(7);

    for(int i = 1; i <= 14; i++){
        
        for(int j = 1; j <= 6; j++){
            if(j<=5){
                setc(7);
                cout << " ";
            }else{
                if(i >=4 && i<=11){
                    if(i <= 7){
                        setc(79);
                    }else{
                        setc(124);
                    }
                }else{
                    setc(7);
                }
                cout << "SELAMAT HUT REPUBLIK INDONESIA KE 77" << endl;
            }
        }
        sleepcp(100);
    }
    sleepcp(1000);
    clear();

    setc(79);
    cout << "====HAPPY 77TH INDONESIA INDEPENDENCE DAY====" << endl;
    sleepcp(200);
    setc(124);
    cout << "====SELAMAT HUT REPUBLIK INDONESIA KE 77=====" << endl;
    sleepcp(200);
    cout << endl;

    setc(7);

    for(int i = 1; i <= 14; i++){
        for(int j = 1; j <=40; j++){
            if(i<=7){
                if(j<=5){
                    setc(7);
                    cout << " ";
                }else{
                    setc(79);
                    cout << " ";
                }
            }else{
                if(j<=5){
                    setc(7);
                    cout << " ";
                }else{
                    setc(124);
                    cout << " ";
                }
            }
            
        }
        cout << endl;
        sleepcp(100);
    }
    setc(7);
    cout << endl; sleepcp(200);
    cout << "      ";
    sleepcp(200);
    setc(79);
    cout << "17 AGUSTUS 1945";
    sleepcp(200);
    setc(7);
    cout << " - ";
    sleepcp(200);
    setc(124);
    cout << "17 AGUSTUS 2022";
    sleepcp(200);
    setc(7);
    cout << "      " << endl;
    cout << endl;
    sleepcp(200);
    setc(79);
    cout << "====HAPPY 77TH INDONESIA INDEPENDENCE DAY====" << endl;
    setc(124);
    cout << "====SELAMAT HUT REPUBLIK INDONESIA KE 77=====" << endl;
    setc(7);
    //myColor();
    //clear();
    char myname[] = {'R', 'Y', 'U', 'Z', 'E', 'N', ' ', 'N', 'A', 'M', 'I', 'K', 'A', 'Z', 'E'};
    char greet[] = {'U',  'S',  'I',  'N',  'G', ' ', 'C', '+', '+'};
    sleepcp(300);
    cout << endl;
    cout << "            ~ Simple Script by ~" << endl;
    cout << "            ";
    for(int i = 0; i <= 14; i++){
        cout << myname[i];
        sleepcp(150);
    }
    cout << endl;
    cout << "            ";
    for(int i = 0; i <= 8; i++){
        cout << greet[i];
        sleepcp(200);
    }
}
// ===================================================

/* std::cout << '-' << std::flush;
    for (;;) {
        sleep(1);
        std::cout << "\b\\" << std::flush;
        sleep(1);
        std::cout << "\b|" << std::flush;
        sleep(1);
        std::cout << "\b/" << std::flush;
        sleep(1);
        std::cout << "\b-" << std::flush;
    } */