#include "action.h"
#include "main.h"
#include "gravity.h"
#include "draw.h"
#include "item.h"

void ActGame(int i) {
    ActPlayer1(i);
    ActPlayer2(i);
    if(checkitemFunctionThree()>2)
    gravity(i);
    Act();
    //itemtotal();

    return;
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
    return;
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
    return;
}

void ActPlayer1(int j) {
        if (application.key_up) {
            if( j==1 || j==2){
             Character[0].player[j].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&player[i])) {
                Character[0].player[j].pos.y += PLAYER_SPEED;
            }
            }
            else if(j==0){
                Character[0].player[j].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&player[i])) {
                 Character[0].player[j].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_down) {
            if( j==1 || j==2){
             Character[0].player[j].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&player[i])) {
                Character[0].player[j].pos.y += PLAYER_SPEED;
            }
            }
            else if(j==0){
                Character[0].player[j].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&player[i])) {
                 Character[0].player[j].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_left) {
            if( j==1 || j==2){
             Character[0].player[j].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&player[i])) {
                Character[0].player[j].pos.y += PLAYER_SPEED;
            }
            }
            else if(j==0){
                Character[0].player[j].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&player[i])) {
                 Character[0].player[j].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_right) {
            if( j==1 || j==2){
             Character[0].player[j].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&player[i])) {
                Character[0].player[j].pos.y += PLAYER_SPEED;
            }
            }
            else if(j==0){
                Character[0].player[j].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&player[i])) {
                 Character[0].player[j].pos.y += PLAYER_SPEED2;
            }
            }
        }
        

    return;
}

void ActPlayer2(int j) {
        if (application.key_up) {
            if( j==1 || j==2){ //j는 charar
             Character[1].player[j].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&player[i])) {
                Character[1].player[j].pos.y += PLAYER_SPEED;
            }
            }
            else if(j==0){
                Character[1].player[j].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&player[i])) {
                 Character[1].player[j].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_down) {
            if( j==1 || j==2){
             Character[1].player[j].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&player[i])) {
                Character[1].player[j].pos.y += PLAYER_SPEED;
            }
            }
            else if(j==0){
                Character[1].player[j].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&player[i])) {
                 Character[1].player[j].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_left) {
            if( j==1 || j==2){
             Character[1].player[j].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&player[i])) {
                Character[1].player[j].pos.y += PLAYER_SPEED;
            }
            }
            else if(j==0){
                Character[1].player[j].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&player[i])) {
                 Character[1].player[j].pos.y += PLAYER_SPEED2;
            }
            }
        }
        if (application.key_right) {
            if( j==1 || j==2){
             Character[1].player[j].pos.y -= PLAYER_SPEED;
            if (CheckCollisionWall(&player[i])) {
                Character[1].player[j].pos.y += PLAYER_SPEED;
            }
            }
            else if(j==0){
                Character[1].player[j].pos.y -= PLAYER_SPEED2;
            if (CheckCollisionWall(&player[i])) {
                 Character[1].player[j].pos.y += PLAYER_SPEED2;
            }
            }
        }
        

    return;
}
