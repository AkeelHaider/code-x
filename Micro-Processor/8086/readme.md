# 8086 Microprocessor

## About 8086 Microprocessor
1. Enhanced version of 8051
1. Designed by Intel in 1976
1. 2 Mode of Operation -> Max. Mode and Min. Mode
1. 16-Bit Processor
1. Uses 2 stage of piping
1. Consits of 29,000 transistors and 256 vectored interrupts.

## Flags in 8086 Microprocessor
### Condintional Flags
1. **Carry flag** − This flag indicates an overflow condition for arithmetic operations.
1. **Auxiliary flag** − The processor uses this flag to perform binary to BCD conversion.
1. **Parity flag** − This flag is used to indicate the parity of the result,(when the result contains even number of 1’s, then the Parity Flag is set.)
1. **Zero flag** − This flag is set to 1 when the result of arithmetic or logical operation is zero else it is set to 0.
1. **Sign flag** − This flag holds the sign of the result, i.e. when the result of the operation is negative, then the sign flag is set to 1 else set to 0.
1. **Overflow flag** − This flag represents the result when the system capacity is exceeded.
### Control Flags
1. **Trap flag** − It is used for single step control and allows the user to execute one instruction at a time for debugging.
1. **Interrupt flag** − It is an interrupt enable/disable flag, i.e. used to allow/prohibit the interruption of a program.
1. **Direction flag** − It is used in string operation, it is set when string bytes are accessed from the higher memory address to the lower memory address.


## Registers in 8086 Microprocessor
1. **AX register** − It is also known as accumulator register. It is used to store operands for arithmetic operations.
2. **BX register** − It is used as a base register. It is used to store the starting base address of the memory area within the data segment.
3. **CX register** − It is referred to as counter. It is used in loop instruction to store the loop counter.
4. **DX register** − This register is used to hold I/O port address for I/O instruction.


## Segment in 8086 Microprocessor
1. **Code Segement (CS)** − It is used for addressing a memory location in the code segment of the memory, where the executable program is stored.
2. **Data Segment (DS)** - It consists of data used by the program andis accessed in the data segment by an offset address or the content of other register that holds the offset address.
3. **Stack Segment (SS)** - It handles memory to store data and addresses during execution.
4. **Extra Segment (ES)** - ES is additional data segment, which is used by the string to hold the extra destination data.


## Instruction Set in 8086 Microprocessor
### Arithmetic Instrcution
1. ADD − Used to add the provided byte to byte/word to word.
1. ADC − Used to add with carry.
1. INC − Used to increment the provided byte/word by 1.
1. SUB − Used to subtract the byte from byte/word from word.
1. SBB − Used to perform subtraction with borrow.
1. DEC − Used to decrement the provided byte/word by 1.
1. CMP − Used to compare 2 provided byte/word.
1. MUL − Used to multiply unsigned byte by byte/word by word.
1. IMUL − Used to multiply signed byte by byte/word by word.
1. DIV − Used to divide the unsigned word by byte or unsigned double word by word.
1. IDIV − Used to divide the signed word by byte or signed double word by word.

## Data Transfer Instruction
1. MOV − Used to copy the byte or word from the provided source to the provided destination.
1. PPUSH − Used to put a word at the top of the stack.
1. POP − Used to get a word from the top of the stack to the provided location.
1. XCHG − Used to exchange the data from two locations.
1. IN − Used to read a byte or word from the provided port to the accumulator.
1. OUT − Used to send out a byte or word from the accumulator to the provided port.
1. LEA − Used to load the address of operand into the provided register.

## Bit Manipulation Instruction
1. NOT − Used to invert each bit of a byte or word.
1. AND − Used for adding each bit in a byte/word with the corresponding bit in another byte/word.
1. OR − Used to multiply each bit in a byte/word with the corresponding bit in another byte/word.
1. XOR − Used to perform Exclusive-OR operation over each bit in a byte/word with the corresponding bit in another byte/word.
1. ROL − Used to rotate bits of byte/word towards the left, i.e. MSB to LSB and to Carry Flag [CF].
1. ROR − Used to rotate bits of byte/word towards the right, i.e. LSB to MSB and to Carry Flag [CF].
1. RCR − Used to rotate bits of byte/word towards the right, i.e. LSB to CF and CF to MSB.
1. RCL − Used to rotate bits of byte/word towards the left, i.e. MSB to CF and CF to LSB.

## String Manipulation Instruction
1. MOVS − Used to move the byte/word from one string to another.
1. COMS − Used to compare two string bytes/words.
1. OUTS − Used as an output string/byte/word from the provided memory location to the I/O port.
1. LODS − Used to store the string byte into AL or string word into AX.

## Jump Instructions
1. JMP − Used to jump to the provided address to proceed to the next instruction.
1. JC − Used to jump if carry flag CF = 1
1. JZ − Used to jump if zero flag ZF = 1
1. JNC − Used to jump if no carry flag (CF = 0)
1. JNZ − Used to jump if not zero flag ZF = 0
1. JNO − Used to jump if no overflow flag OF = 0
1. JNS − Used to jump if not sign SF = 0
1. JO − Used to jump if overflow flag OF = 1
1. JS − Used to jump if sign flag SF = 1

## LOOP Instructions
1. LOOP − Used to loop a group of instructions until the condition satisfies, i.e., CX = 0
1. LOOPZ − Used to loop a group of instructions till it satisfies ZF = 1 & CX = 0
1. LOOPNZ − Used to loop a group of instructions till it satisfies ZF = 0 & CX = 0
