    
     
DATA SEGMENT
    D1 DB "Hello World$"
DATA ENDS  
     
CODE SEGMENT
START:
    ASSUME CS: CODE, DS:DATA             
        
    MOV AX,DATA
    MOV DS,AX
    
    LEA DX,D1 ;Print Hello World
    MOV AH,09H
    INT 21H  
    
    
    MOV AX,4CH   ;Close the Console
    INT 21H
    
CODE ENDS
END START
