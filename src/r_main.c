/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIESREGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2011, 2015 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : r_main.c
* Version      : CodeGenerator for RL78/G12 V2.03.02.01 [15 May 2015]
* Device(s)    : R5F1026A
* Tool-Chain   : CCRL
* Description  : This file implements main function.
* Creation Date: 2016/04/06
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_cgc.h"
#include "r_cg_port.h"
#include "r_cg_serial.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
uint8_t g_uart0_rx_buffer = 0U;            /* UART0 receive buffer */
uint8_t g_uart0_rx_error = 0U;            /* UART0 receive error status */
MD_STATUS g_uart0_tx_end = 0U;  /* UART0 transmission end */

static const uint8_t g_messageOK[4] = {"OK\r\n"};    /* Message for "T" */
static const uint8_t g_messageok[4] = {"ok\r\n"};    /* Message for "t" */
static const uint8_t g_messageUC[4] = {"UC\r\n"};    /* Message for other */
static const uint8_t g_messageFE[4] = {"FE\r\n"};    /* Framing error message */
static const uint8_t g_messagePE[4] = {"PE\r\n"};    /* Parity error message */
static const uint8_t g_messageOE[4] = {"OE\r\n"};    /* Overrun error message */
/* End user code. Do not edit comment generated here */
void R_MAIN_UserInit(void);

/***********************************************************************************************************************
* Function Name: main
* Description  : This function implements main function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void main(void)
{
    R_MAIN_UserInit();
    /* Start user code. Do not edit comment generated here */
    {
        volatile MD_STATUS    status = 0U;                                      /* UART Status */

        /* UART0 receive buffer setting */
        status = R_UART0_Receive(&g_uart0_rx_buffer, 1U);

        /* Start the UART0 Tx/Rx operation */
        R_UART0_Start();

        /* Main loop */
        while (1U)
        {
            HALT();                                                             /* Wait for UART Rx interrupt */

            /* Finish Reception and check result */
            SRMK0 = 1U;                                                         /* Disable Reception Interrupt */
            SREMK0 = 1U;                                                        /* Disable Reception error Interrupt */

            if (g_uart0_rx_error)                                               /* Check reception error */
            {    /* Reception error */
                if (g_uart0_rx_error & 0x04U)                                   /* Framing error */
                {    /* Transmit "Framing error" */
                    g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messageFE, 4U);
                    while (0U == g_uart0_tx_end)
                    {
                        NOP();                                                  /* Wait for final transmit */
                    }
                }
                else
                {
                    ;
                }

                if (g_uart0_rx_error & 0x02U)                                   /* Parity error */
                {    /* Transmit "Parity error" */
                    g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messagePE, 4U);
                    while (0U == g_uart0_tx_end)
                    {
                        NOP();                                                  /* Wait for final transmit */
                    }
                }
                else
                {
                    ;
                }

                if (g_uart0_rx_error & 0x01U)                                   /* Overrun error */
                {    /* Transmit "Overrun error" */
                    g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messageOE, 4U);
                    while (0U == g_uart0_tx_end)
                    {
                        NOP();                                                  /* Wait for final transmit */
                    }
                }
                else
                {
                    ;
                }

            }
            else                                                                    /* Normal reception */
            {
                switch (g_uart0_rx_buffer)                                          /* Check Reception data */
                {
                    case '0':                                                       /* Reception data is '0' */
                        g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messageOK, 4U);  /* Stop transmit */
                        break;

                    case '1':                                                       /* Reception data is '1' */
                        g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messageok, 4U);  /* Start transmit */
                        break;

                    case '2':                                                       /* Reception data is '2' */
                        g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messageok, 4U);  /* Restart */
                        break;


                    case '3':                                                       /* Reception data is '3' */
                        g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messageok, 4U);  /* Gain 1 */
                        break;

                    case '4':                                                       /* Reception data is '4' */
                        g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messageok, 4U);  /* Gain 2 */
                        break;

                    case '5':                                                       /* Reception data is '5' */
                        g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messageok, 4U);  /* Gain 3 */
                        break;

                    case '6':                                                       /* Reception data is '6' */
                        g_uart0_tx_end = R_UART0_Send((uint8_t *)g_messageok, 4U);  /* Gain 4 */
                        break;

                }
                while (0U == g_uart0_tx_end)
                {
                    NOP();                                                          /* Wait for final transmit */
                }
            }

            /* For next reception */

            /* Set reception buffer pointer */
            status = R_UART0_Receive(&g_uart0_rx_buffer, 1U);

            SRMK0 = 0U;                                                         /* Enable Reception Interrupt */
            SREMK0 = 0U;                                                        /* Enable Reception error Interrupt */
        }
    }
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: R_MAIN_UserInit
* Description  : This function adds user code before implementing main function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_MAIN_UserInit(void)
{
    /* Start user code. Do not edit comment generated here */
    EI();
    /* End user code. Do not edit comment generated here */
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
