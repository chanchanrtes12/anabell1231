/*아이템 정의 1번  속도 아이템 2번 크기커지기 아이템 셋째 한골넣으면 두배*/
#include "item.h"
#include <stdio.h>


int checkitemFunctionOne(){
   for (int j=0;j<3;j++){
   if(CheckCollisionObject(&Character[0].player[j],&items[0])) return 0;
   else if(CheckCollisionObject(&Character[1].player[j],&items[0])) return 1;
   }
}


void itemFunctionOne(){
      for (int j=0;j<3;j++){//checkitemFunctionOne()로부터 
        int playerIndex = checkitemFunctionOne();
        if (playerIndex != -1) {
            Character[playerIndex].player[j].v_x += (PLAYER_SPEED * 2);
            Character[playerIndex].player[j].v_y += (PLAYER_SPEED * 2);
        }
    }
}

int checkitemFunctionTwo(){
   for (int j=0;j<3;j++){
   if(CheckCollisionObject(&Character[0].player[j],&items[0])) return 0;
   else if(CheckCollisionObject(&Character[1].player[j],&items[0])) return 1;
   }
}


void itemFunctionTwo(){
      for (int j=0;j<3;j++){
      int playerIndex = checkitemFunctionOne();
      if(playerIndex!=-1)
      Character[playerIndex].player[j].pos.x+Character[playerIndex].player[j].pos.w*1.2;
      Character[playerIndex].player[j].pos.y+Character[playerIndex].player[j].pos.h*1.2;
      }
}
int checkitemFunctionThree(){
   for (int j=0;j<3;j++){
   if(CheckCollisionObject(&Character[0].player[j],&items[0])) return 0;
   else if(CheckCollisionObject(&Character[1].player[j],&items[0])) return 1;
   }
}


void itemFunctionThree(){
      int playerIndex = checkitemFunctionOne();
      if(playerIndex==1){
      if((BALL.pos.x<LGoalnet.pos.x+LGoalnet.pos.w)&&(BALL.pos.y<LGoalnet.pos.y && BALL.pos.y>LGoalnet.pos.y-LGoalnet.pos.h))
        score1+=2;}
      if(playerIndex==0){
      if((BALL.pos.x>RGoalnet.pos.x-RGoalnet.pos.w)&&(BALL.pos.y<RGoalnet.pos.y && BALL.pos.y>RGoalnet.pos.y-RGoalnet.pos.h))
        score2+=2;}
      
}




void initializeItem(){
   items[0].itemFunc = itemFunctionOne;
   items[1].itemFunc = itemFunctionTwo;
   items[2].itemFunc = itemFunctionTwo;
}


void itemtotal(){
   int i=rand()%640;
   int j=(380+rand()%100);
   void initializeItem();
   int randomItemNumber = rand()%3;
   
   if ( randomItemNumber == 0 ){
   items[0].itemFunc();
   items[0].pos.x=i;
   items[0].pos.y=j;
   }
   else if(randomItemNumber ==1 ){
   items[1].itemFunc();
   items[1].pos.x=i;
   items[1].pos.y=j;
   }
   else {
   items[2].itemFunc();
   items[2].pos.x=i;
   items[2].pos.y=j;
   }
   itemFunctionOne(checkitemFunctionOne());
   itemFunctionTwo(checkitemFunctionTwo());
   itemFunctionThree(checkitemFunctionThree());
      
}

