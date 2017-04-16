ORG 00H /* Setting origin to 00H */
MOV A, #55H /* Set A as 0x55 */
MOV R6, #70H /* Set R6 as 0x70 */

/* We need to complement A, R6 Times */
/* The loop named 'myLoop' will run 70 times and each time, it will set A as complement of A */
/* DJNZ will decrease the value of R7 by 1, and it will contine the loop while R7 is NOT zero */
myLoop: 
		CPL A
		DJNZ R6, myLoop
		
/* Finally storing the value of A in R5 */
MOV R5,A
END /* Terminating the Program */
