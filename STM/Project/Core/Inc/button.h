/*
 * button.h
 *
 *  Created on: Sep 24, 2022
 *      Author: A.Tuan
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"
#include "global.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET


extern int button1_flag;
extern int button2_flag;
extern int button3_flag;
extern int button4_flag;
void getKeyInput();
void getKeyInput2();
void getKeyInput3();
void getKeyInput4();


#endif /* INC_BUTTON_H_ */
