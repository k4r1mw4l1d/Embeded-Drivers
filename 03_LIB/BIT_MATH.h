/**
 *  ====================== LIB_BIT_MATH.h ======================
 * 
 *      Author: KARIM WALID
 *      Date  : 5 / 13 / 2026
 */

#ifndef  _LIB_BIT_MATH_H
#define _LIB_BIT_MATH_H

#define SET_BIT(REG, BIT_NUM)       (REG |= (1 << BIT_NUM))
#define CLEAR_BIT(REG, BIT_NUM)     (REG &= ~(1 << BIT_NUM))
#define TOGGLE_BIT(REG, BIT_NUM)    (REG ^= (1 << BIT_NUM))
#define GET_BIT(REG, BIT_NUM)       ((REG >> BIT_NUM) & 1)

#endif