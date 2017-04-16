MOV A, #55H /* Set A as 0x55 */
MOV R1, #40H /* Set R1 as 0x44 */
MOV R6, #05H /* Set R6 as 0x05 */

/* TODO: Copy value of A to Adderess form #44 to #45 */
/* myLoop will run for 5 times, as after fifth time R6 will be zero, and PC will exit the loop */
/* Each time when loop runs, value of A is copied to address pointed by R1, and then the value of R1 is increment by 1 */

myLoop: 
	MOV @R1,A
	INC R1
	DJNZ R6, myLoop
	
END /* Finally the program is terminated */
	
	
