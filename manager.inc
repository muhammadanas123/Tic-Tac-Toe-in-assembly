manager proc

call draw

.while al!='n'

call input




xor edx,edx
mov dl,32
mov dh,16
call gotoXY

    xor edx,edx
    mov ah,40h
	mov bx,1
	mov cx,SIZEOF ask
	mov dx,OFFSET ask
	int 21h
.if al!='n'
mov player,'X'
mov esi,0
mov matrix[esi],"-"
mov esi,4
mov matrix[esi],"-"
mov esi,8
mov matrix[esi],"-"
mov esi,9
mov matrix[esi],"-"
mov esi,13
mov matrix[esi],"-"
mov esi,17
mov matrix[esi],"-"
mov esi,18
mov matrix[esi],"-"
mov esi,22
mov matrix[esi],"-"
mov esi,26
mov matrix[esi],"-"
.endif

mov ah,1
int 21h

.endw


ret
manager endp