#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED
#include<windows.h>
#include <iostream>
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
struct seat{
  string name;
  int x=100;
  int y=100;
  int maps[100][100];


};

class drawer{
    seat s[5];
public:
    seat qa[5];
    int check_frame=5;
    void color_select(int sk){
    switch(sk){
        case 1:
            SetConsoleTextAttribute(hConsole,00);///black
            break;
        case 2:
            SetConsoleTextAttribute(hConsole,204);///red
            break;
        case 3:
            SetConsoleTextAttribute(hConsole,68);///red black
            break;
        case 4:
            SetConsoleTextAttribute(hConsole,119);///gray
            break;
        case 5:
            SetConsoleTextAttribute(hConsole,34);///green
            break;
        case 6:
            SetConsoleTextAttribute(hConsole,170);///light green
            break;
        case 7:
            SetConsoleTextAttribute(hConsole,255);///white
            break;
        case 8:
            SetConsoleTextAttribute(hConsole,17);///blue
            break;
        case 9:
            SetConsoleTextAttribute(hConsole,51);///?
            break;
         case 10:
            SetConsoleTextAttribute(hConsole,85);///violetine
            break;
         case 11:
            SetConsoleTextAttribute(hConsole,102);///sand
            break;
         case 12:
            SetConsoleTextAttribute(hConsole,136);///black gray
            break;
         case 13:
            SetConsoleTextAttribute(hConsole,153);///blue vid
            break;
         case 14:
            SetConsoleTextAttribute(hConsole,187);///light blue
            break;
         case 15:
            SetConsoleTextAttribute(hConsole,221);///ro=ine
            break;
         case 16:
            SetConsoleTextAttribute(hConsole,238);///geltona
            break;
    }
    }

    template <typename TwoD>
    void take_and_send(TwoD& maa,int hh,int x,int y){

       for (int i = 0; i != x; i++)
    {
        for (int j = 0; j != y; j++)
        {
        qa[hh].maps[i][j]=maa[i][j];
        qa[hh].x=x;qa[hh].y=y;qa[hh].name="ib";
        qa[hh].maps[x+5][j]=6;
        }
    }

    }


    void frame_test(struct seat sa){

    for(int xi=0;xi!=sa.x;xi++){
        for(int yi=0;yi!=sa.y;yi++)
        {
            color_select(sa.maps[xi][yi]);
           cout<<".";
        }cout<<endl;
    }
    SetConsoleTextAttribute(hConsole,15);
    }

    void ins(struct seat sa[],int aa){
        for(int as=0;as<aa;as++){
        for(int m=0;m!=sa[as].x;m++){
            for(int k=0;k!=sa[as].y;k++){
                sa[as].maps[m][k]=1;
            }
        }     //   cout<<"install "<<sa[as].name<<" done."<<endl;
        }

    }

    void play_a(struct seat sa[0], int frame )
    {    int fps=0;
    int sas=frame;
        for(int c=0;c<sas;c++){
        clear_s();
        if(fps==0){

         frame_test(sa[c]);
        while(fps<95000000){fps++;}

         clear_s();
        }
        if(fps>=95000000){fps=0;}
        if(c==sas-2){c=0;}
    }
    }


    void test_f(){
   check_frame=5;

            for(int h=0;h<check_frame;h++)
    {
        for(int m=0;m!=s[h].x;m++){
            for(int k=0;k!=s[h].y;k++){
                s[h].maps[m][k]=1;
                s[h].x=16;s[h].y=17;s[h].name="ib";
            }
        }
        s[h].name=h+1;
        cout<<"install "<<s[h].name<<" done."<<endl;
    }
       for(int h=0;h<check_frame;h++)
    {
        if(h==0){
        s[h].maps[3][1]=2;
        s[h].maps[2][2]=2;
        s[h].maps[1][3]=2;
        s[h].maps[1][4]=2;//1
        s[h].maps[1][5]=2;//2
        s[h].maps[1][6]=2;//3
        s[h].maps[2][7]=2;//2
        s[h].maps[3][8]=2;
        s[h].maps[2][9]=2;
        s[h].maps[1][10]=2;
        s[h].maps[1][11]=2;
        s[h].maps[1][12]=2;
        s[h].maps[1][13]=2;
        s[h].maps[2][14]=2;
        s[h].maps[3][15]=2;
        s[h].maps[4][15]=2;///1
        s[h].maps[5][15]=2;///2
        s[h].maps[6][15]=2;///3
        s[h].maps[7][15]=2;///4
        s[h].maps[8][15]=2;///5
        s[h].maps[4][1]=2;///11
        s[h].maps[5][1]=2;///12
        s[h].maps[6][1]=2;///13
        s[h].maps[7][1]=2;///14
        s[h].maps[8][1]=2;///15
        s[h].maps[9][2]=2;///1p
        s[h].maps[9][14]=2;///1p
        s[h].maps[10][3]=2;///p
        s[h].maps[10][13]=2;///p
        s[h].maps[11][4]=2;///p
        s[h].maps[11][12]=2;///p
        s[h].maps[12][5]=2;///p
        s[h].maps[12][11]=2;///p
        s[h].maps[13][6]=2;///p
        s[h].maps[13][10]=2;///p
        s[h].maps[14][7]=2;///p
        s[h].maps[14][9]=2;///p
        s[h].maps[14][8]=2;///p
        for(int j=3;j!=8;j++){s[h].maps[2][j]=2;}
        for(int j=10;j!=15;j++){s[h].maps[2][j]=2;}
        for(int j=2;j!=15;j++){s[h].maps[3][j]=2;}
        for(int kj=4;kj!=9;kj++){for(int j=2;j!=15;j++){s[h].maps[kj][j]=2;}}
        for(int j=3;j!=14;j++){s[h].maps[9][j]=2;}
        for(int j=4;j!=13;j++){s[h].maps[10][j]=2;}
        for(int j=5;j!=12;j++){s[h].maps[11][j]=2;}
        for(int j=6;j!=11;j++){s[h].maps[12][j]=2;}
        for(int j=7;j!=10;j++){s[h].maps[13][j]=2;}
        }
        if(h==1){
        for(int sas=5;sas!=7;sas++){s[h].maps[1][sas]=3;}
        s[h].maps[1][7]=2;
        for(int sas=9;sas!=12;sas++){s[h].maps[1][sas]=2;}
        for(int sas=4;sas!=6;sas++){s[h].maps[2][sas]=3;}
        for(int sas=6;sas!=13;sas++){s[h].maps[2][sas]=2;}///2
        for(int sas=3;sas!=6;sas++){s[h].maps[3][sas]=3;}
        s[h].maps[3][6]=4;
        for(int sas=7;sas!=14;sas++){s[h].maps[3][sas]=2;}///3
        for(int sas=3;sas!=5;sas++){s[h].maps[4][sas]=3;}
        s[h].maps[4][6]=4;
        s[h].maps[4][5]=4;
        s[h].maps[4][7]=4;///4
        for(int sas=8;sas!=14;sas++){s[h].maps[4][sas]=2;}///4.1
        for(int sas=3;sas!=5;sas++){s[h].maps[5][sas]=3;}
        s[h].maps[5][6]=4;
        s[h].maps[5][5]=4;
        s[h].maps[5][7]=4;
        for(int sas=8;sas!=14;sas++){s[h].maps[5][sas]=2;}///5
        for(int sas=3;sas!=6;sas++){s[h].maps[6][sas]=3;}
        s[h].maps[6][6]=4;
        for(int sas=7;sas!=14;sas++){s[h].maps[6][sas]=2;}///6
        for(int sas=3;sas!=6;sas++){s[h].maps[7][sas]=3;}
        for(int sas=3;sas!=6;sas++){s[h].maps[8][sas]=3;}
        for(int sas=6;sas!=14;sas++){s[h].maps[7][sas]=2;}
        for(int sas=6;sas!=14;sas++){s[h].maps[8][sas]=2;}///7
        for(int sas=4;sas!=6;sas++){s[h].maps[9][sas]=3;}
        for(int sas=6;sas!=13;sas++){s[h].maps[9][sas]=2;}
        for(int sas=4;sas!=7;sas++){s[h].maps[10][sas]=3;}
        for(int sas=7;sas!=13;sas++){s[h].maps[10][sas]=2;}///8
        for(int sas=5;sas!=7;sas++){s[h].maps[11][sas]=3;}
        for(int sas=5;sas!=7;sas++){s[h].maps[12][sas]=3;}
        for(int sas=7;sas!=12;sas++){s[h].maps[11][sas]=2;}
        for(int sas=7;sas!=12;sas++){s[h].maps[12][sas]=2;}
        for(int sas=6;sas!=8;sas++){s[h].maps[13][sas]=3;}
        for(int sas=8;sas!=11;sas++){s[h].maps[13][sas]=2;}
        s[h].maps[14][7]=3;
        s[h].maps[14][8]=2;
        s[h].maps[14][9]=2;
        }
        if(h==2){
        for(int sas=6;sas!=9;sas++){s[h].maps[1][sas]=3;}///6
        s[h].maps[1][9]=2;
        s[h].maps[1][10]=2;
        for(int xx=2;xx!=7;xx++){for(int sas=5;sas!=8;sas++){s[h].maps[xx][sas]=3;}}
        for(int xx=2;xx!=7;xx++){for(int sas=8;sas!=12;sas++){s[h].maps[xx][sas]=2;}}
        for(int xx=7;xx!=10;xx++){for(int sas=5;sas!=9;sas++){s[h].maps[xx][sas]=3;}}
        for(int xx=7;xx!=10;xx++){for(int sas=9;sas!=12;sas++){s[h].maps[xx][sas]=2;}}
        for(int xx=9;xx!=12;xx++){for(int sas=6;sas!=9;sas++){s[h].maps[xx][sas]=3;}}
        for(int xx=9;xx!=12;xx++){for(int sas=9;sas!=11;sas++){s[h].maps[xx][sas]=2;}}
        for(int xx=12;xx!=14;xx++){for(int sas=7;sas!=9;sas++){s[h].maps[xx][sas]=3;}}
        s[h].maps[12][9]=2;
        s[h].maps[13][9]=2;
        }
        if(h==3){
        for(int sas=6;sas!=8;sas++){s[h].maps[1][sas]=2;}
        for(int sas=8;sas!=11;sas++){s[h].maps[1][sas]=3;}
        for(int xx=2;xx!=10;xx++){for(int sas=5;sas!=10;sas++){s[h].maps[xx][sas]=2;}}
        s[h].maps[4][6]=4;
        for(int xx=2;xx!=7;xx++){for(int sas=9;sas!=13;sas++){s[h].maps[xx][sas]=3;}}
        for(int xx=7;xx!=10;xx++){for(int sas=8;sas!=12;sas++){s[h].maps[xx][sas]=3;}}
        s[h].maps[10][7]=2;
        s[h].maps[10][6]=2;
        s[h].maps[11][7]=2;
        s[h].maps[11][6]=2;
        s[h].maps[12][7]=2;
        s[h].maps[13][7]=2;
        for(int xx=8;xx!=14;xx++){for(int sas=8;sas!=10;sas++){s[h].maps[xx][sas]=3;}}
        s[h].maps[11][10]=3;
        s[h].maps[10][10]=3;
        }
        if(h==4){
            for(int sas=5;sas!=8;sas++){s[h].maps[1][sas]=2;}
            s[h].maps[2][8]=2;
            s[h].maps[1][9]=2;
            s[h].maps[1][10]=3;
            s[h].maps[1][11]=3;
            for(int sas=4;sas!=11;sas++){s[h].maps[2][sas]=2;}
            s[h].maps[2][12]=3;
            s[h].maps[2][11]=3;
            s[h].maps[3][3]=2;
            s[h].maps[3][4]=2;
            s[h].maps[3][5]=4;
            for(int sas=6;sas!=11;sas++){s[h].maps[3][sas]=2;}
            s[h].maps[3][11]=3;
            s[h].maps[3][12]=3;
            s[h].maps[3][13]=3;
            s[h].maps[4][3]=2;
            s[h].maps[5][3]=2;
            s[h].maps[6][3]=2;
            s[h].maps[7][3]=2;
            s[h].maps[8][3]=2;
            for(int xx=4;xx!=6;xx++){for(int sas=4;sas!=7;sas++){s[h].maps[xx][sas]=4;}}
            for(int xx=4;xx!=6;xx++){for(int sas=7;sas!=11;sas++){s[h].maps[xx][sas]=2;}}
            for(int xx=4;xx!=6;xx++){for(int sas=11;sas!=14;sas++){s[h].maps[xx][sas]=3;}}
            s[h].maps[6][4]=2;
            s[h].maps[6][5]=4;
            for(int sas=6;sas!=11;sas++){s[h].maps[6][sas]=2;}
            for(int sas=11;sas!=14;sas++){s[h].maps[6][sas]=3;}
            for(int xx=7;xx!=9;xx++){for(int sas=4;sas!=11;sas++){s[h].maps[xx][sas]=2;}}
            for(int xx=7;xx!=9;xx++){for(int sas=11;sas!=14;sas++){s[h].maps[xx][sas]=3;}}
            for(int xx=9;xx!=11;xx++){for(int sas=4;sas!=12;sas++){s[h].maps[xx][sas]=2;}}
            s[h].maps[9][11]=3;
            s[h].maps[9][12]=3;
            s[h].maps[10][11]=3;
            s[h].maps[10][12]=3;
            s[h].maps[10][10]=3;
            for(int xx=11;xx!=13;xx++){for(int sas=5;sas!=11;sas++){s[h].maps[xx][sas]=2;}}
            s[h].maps[11][11]=3;
            s[h].maps[11][10]=3;
            s[h].maps[12][11]=3;
            s[h].maps[12][10]=3;
            s[h].maps[13][8]=2;
            s[h].maps[13][7]=2;
            s[h].maps[13][9]=3;
            s[h].maps[13][10]=3;
            s[h].maps[13][6]=2;
            s[h].maps[14][7]=2;
            s[h].maps[14][9]=3;
            s[h].maps[14][8]=2;
        }}

           play_a(s,5);
 }

    void  clear_s(){system("cls");}
};
    void gotoxy(int xa, int ya)
    {
        static HANDLE h = NULL;
        if(!h)
            h = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD c = { xa, ya };
        SetConsoleCursorPosition(h,c);
    }
    void ShowConsoleCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}
#endif // DRAW_H_INCLUDED
