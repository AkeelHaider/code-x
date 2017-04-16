ORG 00H /* Set Origin to 00H */
MOV A, #0H /* Set A to Zero => Here we will store the sum */
MOV R6, #03H /* Set R7 to 0x3 */
MOV R7, #10H /* Set R6 to 0x10 */

/* We need to calculate R7 * R6 */

/* Defining a loop named myLoop => It will add the value of R6 to A */
/* Then DJNZ will decrement R7 by 1, if R7 will NOT be zero, it will go back to loop again */
/* This allows us to add R6, R7 ie 0x10 times */
myLoop: 
		ADD A,R6
		DJNZ R7, myLoop
		
    
/* After the R7 is zero, A will have the result of R6 added R7 time (i.e R6*R7) */
MOV R5,A /* Storing the final answer to R5 */
END
