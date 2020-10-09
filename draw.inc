draw proc

call clrscr

mov dl,4
mov dh,2
call gotoXY


xor edx,edx
mov ah,40h
mov bx,1
mov cx,SIZEOF tic
mov si,OFFSET tic


	L1:push cx
	mov ah,9
	mov al,[si]
	mov bh,0
	mov bl,color
	or bl,a
	mov cx,1
	int 10h
	mov cx,1
	call AdvanceCursor
	inc color
	inc si
	pop cx
	Loop L1
	call Crlf



;int 21h



xor edx,edx
xor eax,eax
xor ebx,ebx
mov esi,0

mov ecx,27
mov dl,34
mov dh,4
call gotoXY
L:



.if esi==9 



call crlf
mov dl,34
mov dh,5
call gotoXY
.endif

.if esi==18



call crlf
mov dl,34
mov dh,6
call gotoXY

.endif

mov al,matrix[esi]
mov ah,6
mov dl,al
int 21h





inc esi
loop L




ret
draw endp



AdvanceCursor PROC

	pusha
	L1:
	push cx
	mov ah,3
	mov bh,0
	int 10h
	inc dl
	mov ah,2
	int 10h
	pop cx
	Loop L1
	popa
	ret
AdvanceCursor ENDP