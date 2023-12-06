#include "input.h"


void GetInput(void) {
    SDL_Event event;

    /*SDL_PollEvent() 함수는 이벤트 큐에 남아 있는 이벤트를 가져옴*/
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            /*창닫기 버튼을 누른 경우*/
            case SDL_QUIT:
                QuitSDL(0);
                break;
            /*키보드 버튼을 뗐을 경우*/
            case SDL_KEYUP:
                ResponseKeyUp(&event.key);
                break;
            /*키보드 버튼을 눌렀을 경우*/
            case SDL_KEYDOWN:
                ResponseKeyDown(&event.key);
                break;
            default:
                break;
        }
    }

    return;
}

void ResponseKeyUp(SDL_KeyboardEvent *event) {
    if (event->repeat == 0) {
        SDL_Scancode key_input = event->keysym.scancode;
        switch (key_input) {
            case SDL_SCANCODE_UP:
                application.key_up = 0;
                break;
            case SDL_SCANCODE_DOWN:
                application.key_down = 0;
                break;
            case SDL_SCANCODE_LEFT:
                application.key_left = 0;
                break;
            case SDL_SCANCODE_RIGHT:
                application.key_right = 0;
                break;
            case SDL_SCANCODE_R:
                application.key_r = 0;
                break;
            case SDL_SCANCODE_W:
                application.key_w = 0;
                break;
            case SDL_SCANCODE_A:
                application.key_a = 0;
                break;
            case SDL_SCANCODE_D:
                application.key_d = 0;
                break;
            case SDL_SCANCODE_S:
                application.key_s = 0;
                break; 
        }
    }

    return;
}

void ResponseKeyDown(SDL_KeyboardEvent *event) {
    if (event->repeat == 0) {
        SDL_Scancode key_input = event->keysym.scancode;
        switch (key_input) {
            case SDL_SCANCODE_UP:
                application.key_up = 1;
                break;
            case SDL_SCANCODE_DOWN:
                application.key_down = 1;
                break;
            case SDL_SCANCODE_LEFT:
                application.key_left = 1;
                break;
            case SDL_SCANCODE_RIGHT:
                application.key_right = 1;
                break;
            case SDL_SCANCODE_R:
                application.key_r = 1;
                break;
            case SDL_SCANCODE_W:
                application.key_w = 1;
                break;
            case SDL_SCANCODE_A:
                application.key_a = 1;
                break;
            case SDL_SCANCODE_D:
                application.key_d = 1;
                break;
            case SDL_SCANCODE_S:
                application.key_s = 1;
                break;    
        }
    }

    return;
}

void click1(void) {   //main의 Drawstart부터 drawchoice로 넘어감.
    SDL_Event event; 
    int quit = 0;
    while (SDL_PollEvent(&event) != 0) { 
        if (event.type == SDL_QUIT) { 
            quit = 1; 
        } 
        else if (event.type == SDL_MOUSEBUTTONDOWN) { 
            int mouseX = event.button.x;
            int mouseY = event.button.y;

            if(mouseX >= 240 && mouseX <= 240 + 160 && mouseY >= 200 && mouseY <= 200 + 80)
                DrawChoice();
                quit = 1;
            
        } 
    }

    return;
}

void click2(void) {   //캐릭터선택
    SDL_Event event; 
    int quit = 0;
    int i;
    int a[2]={};
    while (SDL_PollEvent(&event) != 0) { 
        if (event.type == SDL_QUIT) { 
            quit = 1; 
        } 
        else if (event.type == SDL_MOUSEBUTTONDOWN) { 
            int mouseX = event.button.x;
            int mouseY = event.button.y;
            int j=-1;
            for(i=0;i<2;++i) {
                if(mouseX >= 0 && mouseX <= 213 && mouseY >= 0 && mouseY <= 480)
                     j=0;
                else if(mouseX >= 213 && mouseX <= 436 && mouseY >= 0 && mouseY <= 480)
                    j =1;
                else
                    j= 2;
                Character[i].player[j];
                a[i]=j;
            }
            DrawGameSetting();
            quit = 1;
        }
    }

    return;
}

void click3(void) {  //게임세팅에서 게임하는 것으로 넘어가는코드
    int i;
    SDL_Event event; 
    int quit = 0;
    while (SDL_PollEvent(&event) != 0) { 
        if (event.type == SDL_QUIT) { 
            quit = 1; 
        } 
        else if (event.type == SDL_MOUSEBUTTONDOWN) { 
            int mouseX = event.button.x;
            int mouseY = event.button.y;

                if(mouseX >= 0 && mouseX <= 160 && mouseY >= 0 && mouseY <= 480)
                    EndSet = 3;
                else if(mouseX >= 160 && mouseX <= 320 && mouseY >= 0 && mouseY <= 480)
                    EndSet = 5;
                else if(mouseX >= 320 && mouseX <= 480 && mouseY >= 0 && mouseY <= 480)
                    EndSet = 7;
                else
                    EndSet = 9;
        }

        if(EndSet == 3){
            DrawGame3();
            quit = 1;
        }
        else if(EndSet == 5){
            DrawGame5();
            quit = 1;
        }
        else if(EndSet == 7){
            DrawGame7();
            quit = 1;
        }
        else if(EndSet == 9){
            DrawGame9();
            quit = 1;
        }

    }

    return;
}

