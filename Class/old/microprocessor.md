#   INSTRUCTION POINTER(8086)
    It acts as program counter.
        It points the address of next instruction to be executed.
##  EXECUTION UNIT
    The EU receives op codes of an instruction from the queue , decodes it and then while execution 
    unit decodes or executes an instruction, then th BIU fetches instruction codes from the memory and 
    store them in que

##  General purpose registers :
    There are four registers (16bits)
        1) AX (Accumulator Register)
        2) BX (Base Register)
        3) CX (Counter Register)
        4) DX (Data Register)

##  Index register 
    Four registers are in pointer & index register .
        i) Stack Pointer(SP)
        ii) Base pointer(BP)
        3) Source Index
        4) Destination Index

#   ALU
        It handels the arithmetic & logical operations such as, ADD, SUB, division, multiplication,and,or,not.

#   Flag Registers
        1) 16 bits register
        2) It behaves like flipflop mean it changes status according to the result
        3) It has 9 flag they are divided into two groups 
            a) Conditional flag
             -It represents the result of last arithmetic or logical instruction executed, They are carry flag, zero flag, overflow flag, sign flag ,pairity flag, axualary flag.
            b) Conterol flag
             -Control operations of execution unit they are trap flag, interupt flag, direction flag.
   

    