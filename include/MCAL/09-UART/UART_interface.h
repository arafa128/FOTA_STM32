/**************************************************************************************************************************************
* LOG:                                                                   							   								  *
* VERSION					AUTHORS           					DATE 						DESCRIPTION 		   					  *
* 1.2.1 					Abdelrhman Arafa                                                                                          * 
*							Karem Hassan                                                                                              *
*							Ahmed Emad						09 MAR,2022						-UART_intrface.h     				      *
**************************************************************************************************************************************/
/**************************************************************************************************************************************
* ! Title      	: UART Driver                                                        							                      *                     
* ! File Name	: UART_intrface.h                                                     							                      *
* ! Description : This file has the Definitions needed		         		        							                      *
* ! Compiler  	: GNU ARM cross Compiler                                            							                      *
* ! Target 	  	: STM32F103 Micro-Controller                                         							                      *
* ! Layer 	  	: MCAL                  						                                         							  *
**************************************************************************************************************************************/

#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H



/*************************************************************************************************************************************/
/***************************************************** Functions Prototypes **********************************************************/
/*************************************************************************************************************************************/
/**************************************************************************************************************************************
* Function Name		: MUART_voidInit																			                      *
* Parameters (in)	: None																							                  *
* Parameters (out)	: None																						                      *
* Return value		: None							  															    	              *
* Description		: Function To Iniit UART Configrations	 					          					  						  *
**************************************************************************************************************************************/
void MUART_voidInit();
/**************************************************************************************************************************************
* Function Name		: MUART_voidSendByte																		                      *
* Parameters (in)	: uint8 Copy_uint8Data																			                  *
* Parameters (out)	: None																						                      *
* Return value		: None							  															    	              *
* Description		: Function To Send a Byte	 								          					  						  *
**************************************************************************************************************************************/
void MUART_voidSendByte(uint8 Copy_uint8Data);
/**************************************************************************************************************************************
* Function Name		: MUART_voidReceiveByte																		                      *
* Parameters (in)	: None																							                  *
* Parameters (out)	: None																						                      *
* Return value		: uint8							  															    	              *
* Description		: Function To Receive a Byte	 							          					  						  *
**************************************************************************************************************************************/
uint8 MUART_voidReceiveByte();
/**************************************************************************************************************************************
* Function Name		: MUART_voidSendString																		                      *
* Parameters (in)	: char str[]																					                  *
* Parameters (out)	: None																						                      *
* Return value		: None							  															    	              *
* Description		: Function To Send a string				 					          					  						  *
**************************************************************************************************************************************/
void MUART_voidSendString(char str[]);
/**************************************************************************************************************************************
* Function Name		: MUART_voidSendString																		                      *
* Parameters (in)	: char str[]																					                  *
* Parameters (out)	: None																						                      *
* Return value		: None							  															    	              *
* Description		: Function To Receive a string				 				          					  						  *
**************************************************************************************************************************************/
void MUART_voidReceiveString(char str[]);
/**************************************************************************************************************************************
* Function Name		: MUART_voidSendString																		                      *
* Parameters (in)	: char str[]																					                  *
* Parameters (out)	: None																						                      *
* Return value		: None							  															    	              *
* Description		: Function To Receive a string				 				          					  						  *
**************************************************************************************************************************************/
uint8 MUART_voidReceiveByteAsync();


#endif /*UART_INTERFACE_H*/
