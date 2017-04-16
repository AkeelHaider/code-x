/* Add N1, N2 in data segment */
DATA SEGMENT
    N1 DW 1234H
    N2 DW 1234H
DATA ENDS

/* Start Code Segement */
CODE SEGMENT   
ASSUME CS:CODE, DS:DATA
START:
  /* Include data segemnt in code segement */
    MOV AX,DATA
    MOV DS, AX       
    /* Set value of N1 in AX */
    MOV AX, N1
    /* Set value of N2 in BX */
    MOV BX, N2
    /* Add AX with BX and store the result in AX */
    ADD AX,BX  
CODE ENDS
END START
