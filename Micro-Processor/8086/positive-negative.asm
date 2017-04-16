DATA SEGMENT 
    MSGP DB "It's a positive number$"
    MSGN DB "It's a negative number$"
    NUM DW 14
DATA ENDS

CODE SEGMENT
START:
    ASSUME CS:CODE, DS:DATA
    
    MOV AX,DATA
    MOV DS,AX
    
    MOV AX,NUM
    RCL AX,1H
    
    JC PRINTN
    
    LEA DX,MSGP
    
    MOV AH,09H
    INT 21H
    JMP END
    
    PRINTN: 
        LEA DX,MSGN
        MOV AH,9H
        INT 21H
        
        
    END:
        MOV AX, 4CH
        INT 21H
        
CODE ENDS
END START
