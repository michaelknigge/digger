/* Digger Remastered
   Copyright (c) Andrew Jenner 1998-2004 */

int16_t getlevch(int16_t bp6,int16_t bp8,int16_t bpa);
void incpenalty(void);
int16_t levplan(void);
int16_t levof10(void);
void setdead(bool df);
void cleartopline(void);
void finish(void);
int16_t randno(int16_t n);
void game(void);
void maininit(void);
int mainprog(void);
void testpause(void);

extern int16_t nplayers,diggers,curplayer,startlev;
extern bool levfflag;
extern char levfname[];
extern char pldispbuf[];
extern int32_t randv;
extern int8_t leveldat[8][10][15];
extern int gtime;
extern bool gauntlet,timeout,synchvid,unlimlives;
