# 8051 Microcontroller
<img src="https://www.elprocus.com/wp-content/uploads/2013/02/12.jpg" width="250">

## About Intel 8051 Microcontroller
1. 8051 is based on Harvard Architecture.
1. It has an 32-Bit digital I/O, Serial I/O circuit and 16-Bit Timer Circuit.
1. It is an 8-bit CPU
1. It has 16-Bit Program Counter
1. It has 8-Bit Stack Pointer
1. RAM is limited to 128 Bytes.
1. 1 Instruction Cycle (Machine Cycle) of 8051 consists of 12 Clock Cycle.


## Addressing Modes in 8051 Microcontroller
1. Immediate Addressing Mode (ADD A,#77)
1. Register Addressing Mode (ADD A,R0)
1. Direct Addressing Mode (MOV A,088H)
1. Register Indirect Addressing Mode (MOV A,@R0)


## JUMPS in 8051 Microcontroller
1. ##### Relative Jump
    
    Jump which replaces PC with the new address greater or less than 128-Bytes.
1. ##### Short Absolute Jump
    
    Here only 11-Bits of the absolute address is needed
1. ##### Long Absolute Jump
    
    Complete memory address is required to access program memory


## Instruction Set in 8051 Microcontroller
```diff
+ About 111 instruction are present in 8051
```
### Nomenclature
1. A -> Accumulator
1. B -> B Register
1. C -> Carry Bit
1. Rn -> N-th Register
1. @Rn -> Internal or External RAM Address (Used in Indirect Addressing Mode)
1. #data8 -> Immediate 8-bit data
1. #data16 -> Immediate 16-Bit data
1. Addr11 -> 11-Bit address for JUMP instructions
1. Addr16 -> 16-Bit address for LONG JUMP

### Arithmetic Instructions
1. ADD A,B  -> Store SUM of A and B into A [Add]
```diff
- NOTE: There is no direct Instruction for subtraction, i.e SUB A,B
```
1. DIV AB -> Divide A by B, store quotient in A and remainder in B [Divide]
1. MUL AB -> Multiply A and B, store low bit in A and high bit in B [Multiply]
1. DEC A -> set A as A-1 [Decriment]
1. INC A -> set A as A+1 [Incriment]
1. ADDC A,B -> Store sum of A , B and C (Carry Bit) in A [Add with Carry]
1. SUBB A,B -> Store value of A-B-C (Carry Bit) in A [Subtraction in borrow]

### Logical Instructions
1. ANL A,B -> Store value of A AND B in A
1. CLR A -> Set A as 00H
1. ORL -> Store value of A OR B in A
1. RL A-> Rotate A left (without carry)
1. RLC A-> Rotate A left (with carry)
1. RR A-> Rotate A right (without carry)
1. RRC A-> Rotate A right (with carry) 
1. XRL A, B -> Store value of A XOR B in A

### Data Transfer Instruction
1. MOV A, B -> COPY value of B in A
1. PUSH `direct` -> PUSH the `direct` address in SP (Stack Pointer)
1. POP `direct` -> Store poped address from stack and store it in `direct` address
1. XCH B -> Exchange data of B with A (Accumulator)


### Program Branching Instructions
1. ACALL addr11 -> Execute program starting at addr11, after that continue execution of this program
1. AJUMP addr11 -> Stop current program, and start prorgram from available at addr11
1. CJNE A,B, rel -> JUMP of PC + rel, if A and B are NOT equal
1. DJNZ A,rel -> Decrement A by 1, now JUMP if A is NOT equal to zero
1. JC rel -> if C is set, JUMP to PC + rel
1. JNC rel -> if C is NOT set, JUMP to PC + rel
1. JC bit,rel (or) JBC bit, rel-> if bit is set, JUMP to PC + rel
1. JNC bit,rel -> if bit is NOT set, JUMP to PC + rel
1. JMP @A -> set PC to @A
1. JZ rel -> if A is 0, JUMP to PC + rel
1. JNZ rel -> if A is NOT 0, JUMP to PC + rel



