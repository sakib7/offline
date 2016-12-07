
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt


.MODEL SMALL
.STACK 100H
.DATA

MSG1 DB 'MY NAME IS: $'
MSG2 DB 'MD. SAYED HASSAN SOURAV $'

.CODE

MAIN PROC
    MOV AX,@DATA ; INITIALISATION OF DATA SEGMENT
    MOV DS,AX
    

    LEA DX,MSG1  ; LOAD EFFECTIVE ADDESS
    MOV AH,9     ; STRING PRINTING SO (AH,9)
    INT 21H
    

    MOV AH,2
    MOV DL,0DH
    INT 21H
    MOV DL,0AH
    INT 21H
    
    LEA DX,MSG2  ; LOAD EFFECTIVE ADDESS
    MOV AH,9     ; STRING PRINTING SO (AH,9)
    INT 21H 
    
    MOV AH,4CH
    INT 21H
    MAIN ENDP
END MAIN