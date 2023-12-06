#include "actio.h"


void ActGame() {
    ActPlayer1();
    ActPlayer2();
    if(checkitemFunctionThree()>2)
    gravity();
    Act();
    ActCheckgoal1();
    ActCheckgoal2();
    itemtotal();
}

void ActCheckgoal1(void){

    if((BALL.pos.x<LGoalnet.pos.x+LGoalnet.pos.w)&&(BALL.pos.y<LGoalnet.pos.y && BALL.pos.y>LGoalnet.pos.y-LGoalnet.pos.h)){
        score1++;
        if(EndSet == 3)
            DrawGame3();
        else if(EndSet == 5)
            DrawGame5();
        else if(EndSet == 7)
            DrawGame7();
        else if(EndSet == 9)
            DrawGame9();
    }
}

void ActCheckgoal2(void){

    if((BALL.pos.x>RGoalnet.pos.x-RGoalnet.pos.w)&&(BALL.pos.y<RGoalnet.pos.y && BALL.pos.y>RGoalnet.pos.y-RGoalnet.pos.h)){
        score2++;
        if(EndSet == 3)
            DrawGame3();
        else if(EndSet == 5)
            DrawGame5();
        else if(EndSet == 7)
            DrawGame7();
        else if(EndSet == 9)
            DrawGame9();
    }
}

void ActPlayer1(void) {
        if (application.key_up) {
            if( a[num0]==1 || a[num0]==2){
             Character[0].player[a[num0]].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&Character[0].player[a[num0]])) {
                Character[0].player[a[num0]].pos.y += PLAYER_SPEED;
            }
            }
            else if(a[num0]==0){
                Character[0].player[a[num0]].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&Character[0].player[a[num0]])) {
                 Character[0].player[a[num0]].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_down) {
            if( a[num0]==1 || a[num0]==2){
             Character[0].player[a[num0]].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&Character[0].player[a[num0]])) {
                Character[0].player[a[num0]].pos.y += PLAYER_SPEED;
            }
            }
            else if(a[num0]==0){
                Character[0].player[a[num0]].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&Character[0].player[a[num0]])) {
                 Character[0].player[a[num0]].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_left) {
            if( a[num0]==1 || a[num0]==2){
             Character[0].player[a[num0]].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&Character[0].player[a[num0]])) {
                Character[0].player[a[num0]].pos.y += PLAYER_SPEED;
            }
            }
            else if(a[num0]==0){
                Character[0].player[a[num0]].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&Character[0].player[a[num0]])) {
                 Character[0].player[a[num0]].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_right) {
            if( a[num0]==1 || a[num0]==2){
             Character[0].player[a[num0]].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&Character[0].player[a[num0]])) {
                Character[0].player[a[num0]].pos.y += PLAYER_SPEED;
            }
            }
            else if(a[num0]==0){
                Character[0].player[a[num0]].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&Character[0].player[a[num0]])) {
                 Character[0].player[a[num0]].pos.y += PLAYER_SPEED2;
            }
            }
        }
        
}

void ActPlayer2(void) {
        if (application.key_up) {
            if( a[num1]==1 || a[num1]==2){ //j는 charar
             Character[1].player[a[num1]].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&Character[0].player[a[num1]])) {
                Character[1].player[a[num1]].pos.y += PLAYER_SPEED;
            }
            }
            else if(a[num1]==0){
                Character[1].player[a[num1]].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&Character[0].player[a[num1]])) {
                 Character[1].player[a[num1]].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_down) {
            if( a[num1]==1 || a[num1]==2){
             Character[1].player[a[num1]].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&Character[0].player[a[num1]])) {
                Character[1].player[a[num1]].pos.y += PLAYER_SPEED;
            }
            }
            else if(a[num1]==0){
                Character[1].player[a[num1]].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&Character[0].player[a[num1]])) {
                 Character[1].player[a[num1]].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_left) {
            if( a[num1]==1 || a[num1]==2){
             Character[1].player[a[num1]].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&Character[0].player[a[num1]])) {
                Character[1].player[a[num1]].pos.y += PLAYER_SPEED;
            }
            }
            else if(a[num1]==0){
                Character[1].player[a[num1]].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&Character[0].player[a[num1]])) {
                 Character[1].player[a[num1]].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_right) {
            if( a[num1]==1 || a[num1]==2){
             Character[1].player[a[num1]].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&Character[0].player[a[num1]])) {
                Character[1].player[a[num1]].pos.y += PLAYER_SPEED;
            }
            }
            else if(a[num1]==0){
                Character[1].player[a[num1]].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&Character[0].player[a[num1]])) {
                 Character[1].player[a[num1]].pos.y += PLAYER_SPEED2;
            }
            }
        }
        
}



    return;
}
