DATA SEGMENT
    DATA1 DB 04H
    DATA2 DW 1234H
    DATA3 DB 0H
    DATA4 DW 0H
    DATA5 DW 2345H,7645H,0765H
DATA ENDS


CODE SEGMENT
START:
ASSUME CS: CODE, DS: DATA
    MOV AX,DATA
    MOV DS,AX
    
    MOV AL,25H ;Direct Addressing Mode
    MOV AX, 2345H
    
    MOV BX,AX ;Register Addressing Mode
    MOV BL,AL
    
    MOV AX,DATA2 ;MOV from Data Segement
    MOV AL,DATA1                        
    
    MOV DATA3,AL ;MOV to Data Segement
    MOV DATA4, AX

    MOV BX, OFFSET DATA5 ;Indirect Addressing Mode
    
    MOV AX, [BX] ; Register Indirect Addressing Mode
    
    MOV DI, 02H
    MOV AX, [BX + DI] ;Displacement Addressing Mode      
    
    MOV AX, [BX + 02H] ;Index Addressing Mode
    
    MOV AL, [DI + 02]
    MOV ax, [BX + DI + 02H] ; Base-Index Displacement Addressing Mode
    
                                          
                                      
    
            
    
    
CODE ENDS
END START
