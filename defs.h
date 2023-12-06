#pragma once

#include <ctype.h>
#include <math.h>
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_mixer.h"
#define num0 0
#define num1 1
#define num2 2
#define FPS 60         
#define BUFSIZE 1024
#define BUFSIZE2 3
#define field_height 410
#define field_width 640
#define player1_width 85
#define player1_height 90
#define player2_width 100
#define player2_height 105
#define SCREEN_WIDTH 640  
#define SCREEN_HEIGHT 480 
#define Goal_net_width 120
#define Goal_net_height 180
#define ITEM_WIDTH 20
#define ITEM_HEIGHT 20
#define PLAYER_SPEED 3     
#define PLAYER_SPEED2 5
#define BALL_width 10
#define BALL_height 10
#define BALL_SPEED 6    
#define PLAYER_BALL 2  
#define FONTSIZE 20       
#define LEFT_WALL 1     
#define RIGHT_WALL 2     
#define TOP_WALL 3        
#define BOTTOM_WALL 4   
#define ITEM_COUNT 3  

typedef struct Application{
    SDL_Renderer *renderer; 
    SDL_Window *window; 
    TTF_Font *font;     
    int key_up;          
    int key_down;       
    int key_left;       
    int key_right;        
    int key_r;
    int key_w;
    int key_a;
    int key_d;      
    int key_s;      
} Application;
typedef struct Vector2D{
    float x;
    float y;
} Vector2D;

typedef struct Object{
    float mass;
    Vector2D velocity;
} Object;

typedef struct Item{ 
   void (*itemFunc)();
   SDL_Rect pos;
   Uint32 startTime;
   SDL_bool isActive;
}Item ;


typedef struct Entity{
    SDL_Rect pos;           
    float mass;
    unsigned startTime;   
    double theta;       
    double v_x;           
    double v_y;        
    SDL_Texture *texture;   
} Entity;


typedef struct Text{
    SDL_Rect pos;  
    SDL_Color color;     
    SDL_Surface *surface;  
    SDL_Texture *texture; 
} Text;

Application application;

Text score_board1;//플레이어 1의 점수판
Text score_board2;
int score1; //플레이어1의 점수
int score2;
Item items[ITEM_COUNT];
Entity player[BUFSIZE2];//캐릭터의 개수
typedef struct charac{
    struct Entity player[BUFSIZE2];
}charac; 
charac Character[2]; //실제 플레이어1 과 플레이어2(이게임은 2인 플레이여서)
Entity BALL;
Entity field;
Entity LGoalnet;
Entity RGoalnet;
Entity game_over;
int a[2]; //input.c에서 145번째 줄에서 받아옴
