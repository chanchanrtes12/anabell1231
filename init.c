#include "init.h"

void InitSDL(void) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("[ERROR] in InitSDL(): %s", SDL_GetError());
        exit(1);
    }

    application.window = SDL_CreateWindow("Head_soccer", SDL_WINDOWPOS_UNDEFINED,
                                  SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                                  SCREEN_HEIGHT, 0);
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
    application.renderer = SDL_CreateRenderer(application.window, -1, SDL_RENDERER_ACCELERATED);
    //IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);  조교님꺼 참고하느라 어케해야할지..

    return;
}

void InitTTF(void) {
    if (TTF_Init() < 0) {
        printf("[ERROR] in InitTTF(): %s", SDL_GetError());
        exit(1);
    }

    application.font = TTF_OpenFont("./ttf/LiberationSans-Regular.ttf", 20);

    return;
}

void QuitSDL(int flag) {
    SDL_FreeSurface(score_board1.surface);
    SDL_FreeSurface(score_board2.surface);
    SDL_DestroyTexture(game_over.texture);
    SDL_DestroyTexture(score_board1.texture);
    SDL_DestroyTexture(score_board2.texture);
    
    SDL_DestroyRenderer(application.renderer);
    SDL_DestroyWindow(application.window);
    SDL_CloseAudio();

    QuitTTF();
    IMG_Quit();
    SDL_Quit();
    exit(flag);

    return;
}

void QuitTTF(void) {
    TTF_CloseFont(application.font);
    TTF_Quit();

    return;
}

void InitMemorySet(void) {
    memset(&application, 0, sizeof(Application));
    memset(&game_over, 0, sizeof(Entity));
    memset(&player, 0, BUFSIZE*sizeof(Entity));
    memset(&BALL, 0, sizeof(Entity));
    memset(&field, 0, sizeof(Entity));
    memset(&LGoalnet, 0, sizeof(Entity));
    memset(&RGoalnet, 0, sizeof(Entity));
    memset(&score_board1, 0, sizeof(Text));
    memset(&score_board2, 0, sizeof(Text));
    memset(&BALL, 0, 2*sizeof(Item));   
    return;
}

void InitScoreBoard(void) {
    score1 = 0;
    /* Black */
    score_board1.color.r = 0;
    score_board1.color.g = 0;
    score_board1.color.b = 0;
    score_board1.color.a = 255;

    score_board1.pos.x = 420;
    score_board1.pos.y = 40;

    score2 = 0;
    /* Black */
    score_board2.color.r = 0;
    score_board2.color.g = 0;
    score_board2.color.b = 0;
    score_board2.color.a = 255;

    score_board2.pos.x = 240;
    score_board2.pos.y = 40;

    return;
}
void Initfield(void) {
    field.texture = IMG_LoadTexture(application.renderer, "./gfx/field.png");
    field.pos.x = 0;
    field.pos.y = 0;
    SDL_QueryTexture(field.texture, NULL, NULL, &(field.pos.w),
                     &(field.pos.h));

    return;
}
void InitPlayer1(void) {
//플레이어1이 캐릭터1 골랐을때
    player[0].texture = IMG_LoadTexture(application.renderer, "./gfx/ch1.png");
    player[0].pos.x = 125;
    player[0].pos.y = 480;
    SDL_QueryTexture(player[0].texture, NULL, NULL, &(player[0].pos.w),
                     &(player[0].pos.h));

    return;}
void InitPlayer1_1(void) {
//플레이어2가 캐릭터1 골랐을때
    player[0].texture = IMG_LoadTexture(application.renderer, "./gfx/ch1-1.png");
    player[0].pos.x = 515;
    player[0].pos.y = 480;
    SDL_QueryTexture(player[0].texture, NULL, NULL, &(player[0].pos.w),
                     &(player[0].pos.h));

    return;}
void InitPlayer2(void) {
    player[1].texture = IMG_LoadTexture(application.renderer, "./gfx/ch2.png");
    player[1].pos.x = 125;
    player[1].pos.y = 480;
    SDL_QueryTexture(player[1].texture, NULL, NULL, &(player[1].pos.w),
                     &(player[1].pos.h));

    return;
}
void InitPlayer2_1(void) {
    player[1].texture = IMG_LoadTexture(application.renderer, "./gfx/ch2-1.png");
    player[1].pos.x = 515;
    player[1].pos.y = 480;
    SDL_QueryTexture(player[1].texture, NULL, NULL, &(player[1].pos.w),
                     &(player[1].pos.h));

    return;
}
void InitPlayer3(void) {
    player[2].texture = IMG_LoadTexture(application.renderer, "./gfx/ch3.png");
    player[2].pos.x = 125;
    player[2].pos.y = 480;
    SDL_QueryTexture(player[2].texture, NULL, NULL, &(player[2].pos.w),
                     &(player[2].pos.h));

    return;
}
void InitPlayer3_1(void) {
    player[2].texture = IMG_LoadTexture(application.renderer, "./gfx/ch3-1.png");
    player[2].pos.x = 515;
    player[2].pos.y = 480;
    SDL_QueryTexture(player[2].texture, NULL, NULL, &(player[2].pos.w),
                     &(player[2].pos.h));

    return;
}
void InitLgoalnet(void) {
    LGoalnet.texture = IMG_LoadTexture(application.renderer, "./gfx/21.png");
    LGoalnet.pos.x=5;
    LGoalnet.pos.y=480;
    SDL_QueryTexture(LGoalnet.texture, NULL, NULL, &(LGoalnet.pos.w),
                     &(LGoalnet.pos.h));

    return;
}
void InitRgoalnet(void) {
    RGoalnet.texture = IMG_LoadTexture(application.renderer, "./gfx/20.png");
    RGoalnet.pos.x=515;
    RGoalnet.pos.y=480;
    SDL_QueryTexture(RGoalnet.texture, NULL, NULL, &(RGoalnet.pos.w),
                     &(RGoalnet.pos.h));

    return;
}
void InitBall(void){
    game_over.texture = IMG_LoadTexture(application.renderer, "./gfx/BALL.png");
    SDL_QueryTexture(game_over.texture, NULL, NULL, &(game_over.pos.w),
                     &(game_over.pos.h));
    BALL.pos.x = 320;
    BALL.pos.y = 70;
}
void InitGameOver(void) {
    game_over.texture = IMG_LoadTexture(application.renderer, "./gfx/pic30.png");
    SDL_QueryTexture(game_over.texture, NULL, NULL, &(game_over.pos.w),
                     &(game_over.pos.h));
    game_over.pos.x = 0;
    game_over.pos.y = 0;
}
void initial_value(void){
BALL.pos.w = BALL_width;
BALL.pos.h=BALL_height;
LGoalnet.pos.w=Goal_net_width ;
LGoalnet.pos.h=Goal_net_height;
RGoalnet.pos.w=Goal_net_width ;
RGoalnet.pos.h=Goal_net_height;
player[0].pos.w=player1_width;
player[0].pos.h=player1_height;
player[1].pos.w=player2_width ;
player[1].pos.h=player2_height;
player[2].pos.w=player1_width;
player[2].pos.h=player1_height;
items[0].pos.w=ITEM_WIDTH;
items[0].pos.h=ITEM_HEIGHT;
items[1].pos.w=ITEM_WIDTH;
items[1].pos.h=ITEM_HEIGHT;
items[2].pos.w=ITEM_WIDTH;
items[2].pos.h=ITEM_HEIGHT;
}
