#include "draw.h"



void ClearWindow(void){
    SDL_SetRenderDrawColor(application.renderer, 255, 255, 255, 255);
    SDL_RenderClear(application.renderer);

    return;
}

void ShowWindow(void) {
    SDL_RenderPresent(application.renderer);

    return;
}

void RenderScoreBoard(Text *object) {
    SDL_RenderCopy(application.renderer, object->texture, NULL, &(object->pos));

    return;
}

void DrawStart(void) {
    SDL_SetRenderDrawColor(application.renderer, 0,0,0,255);
    SDL_Rect rectangle;
    rectangle.x = 240;
    rectangle.y = 200;
    rectangle.w = 160;
    rectangle.h = 80;
    SDL_RenderFillRect(application.renderer, &rectangle);

    return;
}

void DrawChoice(void) {
    SDL_SetRenderDrawColor(application.renderer, 0,0,0,255);
    SDL_RenderDrawLine(application.renderer, 213,0,213,480);
    SDL_RenderDrawLine(application.renderer, 426,0,426,480);
    
    return;
}

void DrawGameSetting(void) {
    SDL_SetRenderDrawColor(application.renderer, 0,0,0,255);
    SDL_RenderDrawLine(application.renderer, 160,0,160,480);
    SDL_RenderDrawLine(application.renderer, 320,0,320,480);
    SDL_RenderDrawLine(application.renderer, 480,0,480,480);

    return;
}

void DrawGame3(void) {
    if(Character[0].player[0] == 1){ //character는 플레이어라  chararcter[].player[]꼴이어야함
        void InitPlayer1(void);
    }
    if(Character[0] == 2){
        void InitPlayer2(void);
    }
    if(Character[0] == 3){
        void InitPlayer2(void);
    }
    if(Character[1] == 1){
        void InitPlayer1_1(void);
    }
    if(Character[1] == 2){
        void InitPlayer2_1(void);
    }
    if(Character[1] == 3){
        void InitPlayer3_1(void);
    }

    RenderScoreBoard(&score_board1);
    RenderScoreBoard(&score_board2);

    Initfield();

    InitLgoalnet();
    InitRgoalnet();

    InitBall();

    return;
}

void DrawGame5(void) {
    if(Character[0] == 1){
        void InitPlayer1(void);
    }
    if(Character[0] == 2){
        void InitPlayer2(void);
    }
    if(Character[0] == 3){
        void InitPlayer2(void);
    }
    if(Character[1] == 1){
        void InitPlayer1_1(void);
    }
    if(Character[1] == 2){
        void InitPlayer2_1(void);
    }
    if(Character[1] == 3){
        void InitPlayer3_1(void);
    }

    RenderScoreBoard(&score_board1);
    RenderScoreBoard(&score_board2);

    Initfield();

    InitLgoalnet();
    InitRgoalnet();

    InitBall();

    return;
}

void DrawGame7(void) {
    if(Character[0] == 1){
        void InitPlayer1(void);
    }
    if(Character[0] == 2){
        void InitPlayer2(void);
    }
    if(Character[0] == 3){
        void InitPlayer2(void);
    }
    if(Character[1] == 1){
        void InitPlayer1_1(void);
    }
    if(Character[1] == 2){
        void InitPlayer2_1(void);
    }
    if(Character[1] == 3){
        void InitPlayer3_1(void);
    }

    RenderScoreBoard(&score_board1);
    RenderScoreBoard(&score_board2);

    Initfield();

    InitLgoalnet();
    InitRgoalnet();

    InitBall();

    return;
}

void DrawGame9(void) {
    if(Character[0] == 1){
        void InitPlayer1(void);
    }
    if(Character[0] == 2){
        void InitPlayer2(void);
    }
    if(Character[0] == 3){
        void InitPlayer2(void);
    }
    if(Character[1] == 1){
        void InitPlayer1_1(void);
    }
    if(Character[1] == 2){
        void InitPlayer2_1(void);
    }
    if(Character[1] == 3){
        void InitPlayer3_1(void);
    }

    RenderScoreBoard(&score_board1);
    RenderScoreBoard(&score_board2);

    Initfield();

    InitLgoalnet();
    InitRgoalnet();

    InitBall();

    return;
}

void Draw1pWin(void) {
    SDL_SetRenderDrawColor(application.renderer, 0,0,0,255);
    SDL_Rect rectangle1;
    rectangle1.x = 100;
    rectangle1.y = 100;
    rectangle1.w = 400;
    rectangle1.h = 80;
    SDL_RenderFillRect(application.renderer, &rectangle1);

    SDL_Rect rectangle2;
    rectangle2.x = 250;
    rectangle2.y = 200;
    rectangle2.w = 200;
    rectangle2.h = 40;
    SDL_RenderFillRect(application.renderer, &rectangle2);
    
    return;
}

void Draw2pWin(void) {
    SDL_SetRenderDrawColor(application.renderer, 0,0,0,255);
    SDL_Rect rectangle1;
    rectangle1.x = 100;
    rectangle1.y = 100;
    rectangle1.w = 400;
    rectangle1.h = 80;
    SDL_RenderFillRect(application.renderer, &rectangle1);

    SDL_Rect rectangle2;
    rectangle2.x = 250;
    rectangle2.y = 200;
    rectangle2.w = 200;
    rectangle2.h = 40;
    SDL_RenderFillRect(application.renderer, &rectangle2);

    return;
}
