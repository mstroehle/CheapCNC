/*
 * Position.h
 *
 *  Created on: 19 ����. 2018 �.
 *      Author: Sales
 */

#ifndef MC_POSITION_H_
#define MC_POSITION_H_

/*
 *  �-�������� ��� ���������� ������� X � Y
 *
 *
 * */

int64_t GetPositionX();
int64_t GetPositionY();
void SetPositionX(int64_t x);
void SetPositionY(int64_t y);

//
void shiftPositionX();
void resetPositions();

#endif /* MC_POSITION_H_ */
