/*
 * software_timer.h
 *
 *  Created on: Sep 24, 2022
 *      Author: A.Tuan
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;

void setTimer(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void timerRun();
void timerRun2();
void timerRun3();
void timerRun4();



#endif /* INC_SOFTWARE_TIMER_H_ */
