   AREA ShellSort, CODE, READONLY

destinationArray EQU 0x40000000

    ENTRY

    LDR    r1,=sourceArray
    LDR    r0,=destinationArray
    MOV     r2, #0              ; pointer to the original
    MOV     r3, #0              ; pointer to the destination array
    MOV     r4, #19             ; loop counter (20 elemenets so 0-19 counts as 18)
    MOV     r5, #1              ; size of copyArray

    LDR     r3, [r1], #1        ; copy element
    STR     r3, [r0]    

    BL     copyArray
    LDR    r0,=sourceArray
    MOV    r1,#arraySize
    BL     shellSort

stop    B         stop


val
    SUB    r3,#1              ;Address of source array passed in R0
    LDR    r3, [r0], #1       ;Address of destination array passed in R1
    LDR    r0, =destinationArray                      ;Number of array elements pass



copyArray

    STR r3, [r0]
    ADD     r5, #1
    MOV     r6, r5
    CMP     r4, #0
    BNE     val
    MOV PC,LR    ;Return to calling subroutine      

shellSort

    MOV PC,LR  ;Return to calling subroutine


arraySize       EQU 20
sourceArray     DCD -9,23,-100,675,2,98,13,-4,1000,23,5,234,45,67,12,-2,54,2,17,99

    END                                                                 
