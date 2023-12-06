#ifndef INPUT_H
#define INPUT_H


#include "defs.h"
#include "main.h"
#include "init.h"
#include "draw.h"


/* main.h에 정의된 전역 변수 사용 */
extern Application application;
extern Entity BALL;
extern Entity game_over;



void GetInput(void);


void ResponseKeyUp(SDL_KeyboardEvent *event);


void ResponseKeyDown(SDL_KeyboardEvent *event);

void click1();
void click2();
void click3();

#endif
