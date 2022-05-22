#ifndef __MOTOR_H
#define __MOTOR_H
#include "timer.h"
void DCMotor_Init(void);
void SteerMotor_Init(void);
void PullBulletMotor_Init(void);
void SetAngle(uint16_t angle);
void Motor1_Forward(uint16_t speed);
void Motor1_Reverse(uint16_t speed);
void Motor2_Forward(uint16_t speed);
void Motor2_Reverse(uint16_t speed);
void PullMotor_Forward(uint16_t speed);
void PullMotor_Back(uint16_t speed);
void SetYAngle(uint16_t angle);
void SetXAngle(uint16_t angle);
void SetFrontAngle(uint16_t angle);
void RubMotorInit(void);
void SetLeftSpeed(uint16_t speed);
void SetRightSpeed(uint16_t speed);
#endif

