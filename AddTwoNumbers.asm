
org 100h

.MODEL SMALL
.STACK 100H
.CODE

MAIN PROC
    MOV AH,1
    INT 21H
    MOV BL,AL
    
    MOV AH,1
    INT 21H
    MOV CL,AL
    
    ADD BL,CL
    
    MOV AH,2
    SUB BL,48
    MOV DL,BL
    INT 21H
    MOV AH,4CH
    MAIN ENDP
END MAIN
    




