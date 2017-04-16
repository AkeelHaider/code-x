DATA SEGMENT
    STR1 DB "Hello world","$"
    LEN DW $-STR1
    REVSTR DB 20 dup(' ')        
    
DATA ENDS


CODE SEGMENT
    START:                     
    ASSUME CS:CODE, DS:DATA  
    
    MOV AX,DATA
    MOV DS,AX                  

    MOV AX,LEN
    ADD AX,-2
    
    LEA SI,STR1
    ADD SI,AX
    
    LEA DI,REVSTR
    MOV CX,AX
    ADD CX,1
    
    MYLOOP:
        MOV AL,[SI]
        MOV [DI],AL
        INC DI
        DEC SI
        DEC CX
    JNZ MYLOOP 
    
    MOV [DI],'$'
    
    LEA DX,REVSTR
    MOV AH,09H
    INT 21H
    
    
    MOV AX,4CH
    INT 21H    
    
    
CODE ENDS
END START
