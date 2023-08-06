#ifndef __STM32F103_H
#define __STM32F103_H

#include <stdio.h>
#include <stdint.h>

#define vol volatile
typedef struct
{
    vol uint32_t CRL;
    vol uint32_t CRH;
    vol uint32_t IDR;
    vol uint32_t ODR;
    vol uint32_t BSRR;
    vol uint32_t BRR;
    vol uint32_t LCKR;
} GPIO_TypeDef;

typedef struct
{
    vol uint32_t CR;
    vol uint32_t CFGR;
    vol uint32_t CIR;
    vol uint32_t APB2RSTR;
    vol uint32_t APB1RSTR;
    vol uint32_t AHBENR;
    vol uint32_t APB2ENR;
    vol uint32_t APB1ENR;
    vol uint32_t BDCR;
    vol uint32_t CSR;
    vol uint32_t AHBRSTR;
    vol uint32_t CFGR2;
} RCC_TypeDef;

typedef struct
{
    vol uint32_t CR1;
    vol uint32_t CR2;
    vol uint32_t OAR1;
    vol uint32_t OAR2;
    vol uint32_t DR;
    vol uint32_t SR1;
    vol uint32_t SR2;
    vol uint32_t CCR;
    vol uint32_t TRISE;
} I2C_TypeDef;

typedef struct
{
    vol uint32_t CTRL;
    vol uint32_t LOAD;
    vol uint32_t VAL;
    vol uint32_t CALIB;
} SysTick_TypeDef;

typedef struct
{
  vol uint32_t ISER[8U];               /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
        uint32_t RESERVED0[24U];
  vol uint32_t ICER[8U];               /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
        uint32_t RSERVED1[24U];
  vol uint32_t ISPR[8U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
        uint32_t RESERVED2[24U];
  vol uint32_t ICPR[8U];               /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
        uint32_t RESERVED3[24U];
  vol uint32_t IABR[8U];               /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register */
        uint32_t RESERVED4[56U];
  vol uint8_t  IP[240U];               /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
        uint32_t RESERVED5[644U];
  vol uint32_t STIR;                   /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register */
}  NVIC_TypeDef;

// RCC base
#define RCC_BASE    (vol uint32_t)0x40021000 // reset and clock control

// GPIO bases
#define GPIOA_BASE  (vol uint32_t)0x40010800
#define GPIOB_BASE  (vol uint32_t)0x40010C00
#define GPIOC_BASE  (vol uint32_t)0x40011000

// I2C bases
#define I2C1_BASE   (vol uint32_t)0x40005400
#define I2C2_BASE   (vol uint32_t)0x40005800

// SysTick base
#define SCS_BASE    (vol uint32_t)0xE000E000
#define STK_BASE    (SCS_BASE + 0x0010UL)
#define NVIC_BASE   (SCS_BASE +  0x0100UL)

// declare typedefs
#define RCC         ((RCC_TypeDef *) RCC_BASE)
#define GPIOA       ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB       ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC       ((GPIO_TypeDef *) GPIOC_BASE)
#define I2C1        ((I2C_TypeDef *) I2C1_BASE)
#define I2C2        ((I2C_TypeDef *) I2C2_BASE)
#define SysTick     ((SysTick_TypeDef *) STK_BASE)
#define NVIC        ((NVIC_TypeDef *) NVIC_BASE)

// void __disable_irq(void);
// void __enable_irq(void);

#endif // __STM32F103_H

