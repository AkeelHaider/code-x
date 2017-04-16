DATA SEGMENT
   NUM1 DW 50H
   NUM2 DW 3H
   
   MSGR DB "There is Remainder$"
   MSGNR DB "There is no Remainder$" 
DATA ENDS

CODE SEGMENT
START:
    ASSUME CS:CODE, DS:DATA
    
    MOV AX,DATA
    MOV DS,AX 
    MOV DX,0
    
    MOV AX,NUM1
    MOV BX,NUM2  
    
    DIV BX
    
    CMP DX,0 
    
    JZ NOREM
    
    LEA DX,MSGR
    MOV AH,9H
    INT 21H
    JMP END
    
    NOREM:
        LEA DX,MSGNR
        MOV AH,09H
        INT 21H
        
   
   END:
            MOV AX,4CH
            INT 21H
    
    
    
         
    
    
CODE ENDS
END START
