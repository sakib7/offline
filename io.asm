.MODEL SMALL
.STACK 100
.CODE

MAIN PROC
    
    
    MOV AH,1
    INT 21H
    MOV BL,AL       ;INPUT
    
    MOV AH,2
    MOV DL,0AH  
    INT 21H         
    MOV DL,0DH
    INT 21H         ;NEWL & CRET
    
    MOV AH,2
    MOV DL,BL
    INT 21H         ;OUTPUT
    
    EXIT:
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN