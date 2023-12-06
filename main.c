#include "main.h"

int main(void) {
    for(;;){

        ClearWindow();

        DrawStart();

        click1();

        click2();

        ActGame(i);

        click3();

        if(EndSet == score1 || EndSet == score2){
            if (score1 > score2) {
                Draw1pWin(); 
            }
            else {
                Draw2pWin();
            }
        }

        ShowWindow();

    }

    return 0;
}
