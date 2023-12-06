
#include "utils.h"
#include "gravity.h"
#include "collision.h"
#include "item.h"
#include "player.h"
#include "main.h"
#include "gravity.h"
#include "draw.h"
#include "item.h"
extern char score_text[BUFSIZE];
extern int score;
void ActGame();
void ActGameOver(void);
void ActCheckgoal1(void);
void ActCheckgoal2(void);
void ActPlayer1(void);
void ActPlayer2(void);
void ActScoreBoard(void);
void ActFinalScoreBoard(void);
void ActGameOverScreen(void);
void itemtotal(void);
