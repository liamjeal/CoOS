/******************************************************************************
* File:    isr.h
* Purpose: Define interrupt service routines referenced by the vector table.
* Note: Only "vectors.c" should include this header file.
******************************************************************************/

#ifndef __ISR_H
#define __ISR_H

void PendSV_Handler(void);
void SysTick_Handler(void);
void ethernetif_isr(void);

#undef  VECTOR_014
#define VECTOR_014 PendSV_Handler

#undef  VECTOR_015
#define VECTOR_015 SysTick_Handler

#undef  VECTOR_092
#define VECTOR_092 ethernetif_isr
  
#undef  VECTOR_093
#define VECTOR_093 ethernetif_isr
  
#undef  VECTOR_094
#define VECTOR_094 ethernetif_isr

#endif  //__ISR_H
