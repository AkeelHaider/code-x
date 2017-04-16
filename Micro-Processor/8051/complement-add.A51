org 000h /* Set Origin Address as 00 */
MOV A,#35H /* Set A as 0x35 */
CPL A  /* Set A as Complement of A => 0x(F-3)(F-5) => 0xCA */
ADD A, #01H /* Add A with 0x45 => 0xCA + 0x01 => 0xCB */
END /* Terminate the Program */
