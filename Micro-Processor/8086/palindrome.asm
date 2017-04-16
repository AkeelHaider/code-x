DATA SEGMENT
   STR1 DB "ABAA$"
   LEN DW $-STR1
   STR2 DB 20 DUP(' ')
   
   STRP DB "It's a palindrome$"
   STRN DB "It's not a palindrome$"    
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
    
    LEA DI,STR1
    
    MOV CX,AX
    ADD CX,1
    
    MYLOOP:
        MOV AL,[SI]
        MOV BL,[DI]
        
        CMP AL,BL
        JNZ NOTEQUAL
        
        INC DI
        DEC SI
        DEC CX

    JNZ MYLOOP
    
        
        
    LEA DX,STRP
    MOV AH,9H
    INT 21H
    JMP END
    
    NOTEQUAL: LEA DX,STRN
    MOV AH,9H
    INT 21H
    
    END: MOV AX,4CH
    INT 21H
       
    
    
CODE ENDS
END START
