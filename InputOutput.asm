
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_templat

.MODEL SMALL
.STACK 100H
.CODE

MAIN PROC      ; we can imagine as main function
    
    MOV AH,1   ;            (MOV AH,1) for input and (MOV AH,2) for output
    INT 21H    ;   INPUT    INT -> interupt will Exeute nearest upper Line/function
    MOV BL,AL  ;            Put AL in BL
    
    MOV AH,2
    MOV DL,BL  ;   OUTPUT
    INT 21H    
    
    
    
    
    MOV AH,4CH
    INT 21H    ;  EXIT FUNCTION
    MAIN ENDP
END MAIN