/*
 * global.h
 *
 *  Created on: Nov 1, 2022
 *      Author: A.Tuan
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

extern int green_time_global;
extern int yellow_time_global;
extern int red_time_global;

extern int green_time[2];
extern int yellow_time[2];
extern int red_time[2];

extern int status;

void update_global_time();


#endif /* INC_GLOBAL_H_ */
