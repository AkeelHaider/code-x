org 00H /* Set origin to 000H */
	MOV A,#55H /* Set A as 0x55 */
	ANL A, #05H /* Set A as A AND 0x05 => 0x55 AND 0x05 => 0x05 */
	MOV R7,A /* Copy value of A to R7 */
	ORL A, #44H /* Set A as A AND 0x44 => 0x05 OR 0x44 => 0x45 */
	MOV R6, A /* Copy Value of A to R6 */
	END /* Terminate the code */
	
	
