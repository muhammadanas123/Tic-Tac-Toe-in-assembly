toggle proc
xor edx,edx
mov dl,32
mov dh,12
call gotoXY
.if player=='X'
	xor eax,eax
    xor edx,edx
	mov al,'O'
	mov player,al
	
	xor edx,edx
    xor eax,eax
    mov ah,40h
	mov bx,1
	mov cx,SIZEOF Xstr
	mov dx,OFFSET Xstr
	int 21h
	
	
	
.else
	xor eax,eax
    xor edx,edx
	mov al,'X'
	mov player,al
	
	xor edx,edx
    xor eax,eax
    mov ah,40h
	mov bx,1
	mov cx,SIZEOF Ostr
	mov dx,OFFSET Ostr
	int 21h
	
	
.endif
ret

toggle endp