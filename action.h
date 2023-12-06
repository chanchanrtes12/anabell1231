
#include "utils.h"
#include "gravity.h"
#include "collision.h"
#include "item.h"
#include "player.h"
extern char score_text[BUFSIZE];
extern int score;
void ActGame(int i);
void ActGameOver(void);
void ActCheckgoal1(void);
void ActCheckgoal2(void);
void ActPlayer(int i);
void ActPlayer1(int i);
void ActScoreBoard(void);
void ActFinalScoreBoard(void);
void ActGameOverScreen(void);
