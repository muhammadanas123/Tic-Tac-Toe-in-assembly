INCLUDE Irvine16.inc

.data

a= 10000110b
color BYTE (black SHL 4) OR blue

matrix byte "-"," ","|"," ","-"," ","|"," ","-"
       byte "-"," ","|"," ","-"," ","|"," ","-"
       byte "-"," ","|"," ","-"," ","|"," ","-"

player byte 'X'
              
Xstr byte "player O turns",0 
Ostr byte "player X turns",0

D1 byte "          DRAW            ",0
X1 byte "          X wins            ",0
O1 byte "          O wins            ",0

count dword 0
count2 dword 0
count1 byte 0

check byte "you put a wrong field or input,enter again",0

start byte "enter the position of field ",0

tic byte ".............................TIC TAC TOE..............................",0

check1 byte "this space is already alocated,please enter any other location",0

ask byte "do you want to paly again (y/n)",0
.code

INCLUDE draw.inc

INCLUDE input.inc

INCLUDE toogle.inc

INCLUDE winX.inc

INCLUDE winO.inc

INCLUDE manager.inc

main proc

mov ax,@data
mov ds,ax

call manager

exit 
main endp
end main
