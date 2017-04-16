DATA SEGMENT
   VAL DB 91H,93H,56H,87H
   LEN DW 4
DATA ENDS


CODE SEGMENT
START:
    ASSUME CS:CODE, DS:DATA
    
    MOV AX,DATA
    MOV DS,AX
    
    
    MOV CX,LEN 
    
    LEA SI,VAL
    OUTER:
        LEA DI, VAL
        INC DI
        
        MOV BX,LEN
        DEC BX
        INNER:    
            MOV AL,[DI]
            CMP AL,[SI]
            JGE SWAP
            
            INC DI
            DEC BX
            JNZ INNER  
            JZ XOUTER
            
            SWAP:             
                XCHG AL,[SI]
                XCHG AL,[DI]
                
                        
            INC DI
            DEC BX 
            
            XOUTER:
        JNZ INNER
        
        
        INC SI
        DEC CX
    JNZ OUTER   
   
           
    
    
CODE ENDS
END START
