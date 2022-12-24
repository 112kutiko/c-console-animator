#include "draw.h"
drawer draw;

int main()
{
    WindowsSettings settings;
    settings.setConsoleTitle("Animator v2");
    painter myCinema;




    cout << "load pleas wait" << endl;
 myCinema.readFromFile("2frame.txt");
 settings.cleaner();
 while(true){
    myCinema.print();

      if (GetAsyncKeyState(VK_SPACE))
            {
                // Break out of the loop if the space bar has been pressed
                break;
            }
 }
     settings.cleaner();
    cout << "end" << endl;


    return 0;
}
