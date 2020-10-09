input proc



xor ecx,ecx
mov count1,0


.while count1<9



xor eax,eax
c1:
    xor edx,edx
    mov dl,27
    mov dh,8
    call gotoXY
    
	xor edx,edx
    mov ah,40h
	mov bx,1
	mov cx,SIZEOF start
	mov dx,OFFSET start
	int 21h

    mov ah,1
    int 21h

cmp al,'1' 
je next1
cmp al,'2' 
je next1
cmp al,'3' 
je next1
cmp al,'4' 
je next1
cmp al,'5' 
je next1
cmp al,'6' 
je next1
cmp al,'7' 
je next1
cmp al,'8' 
je next1
cmp al,'9' 
je next1
    mov dl,24
    mov dh,12
    call gotoXY
    mov ah,40h
	mov bx,1
	mov cx,SIZEOF check
	mov dx,OFFSET check
	int 21h

jmp c1

next1:
 
mov bl, player

.if al=="1"
	mov esi,0
	.if matrix[esi]=='X' || matrix[esi]=='O'
		mov dl,14
		mov dh,10
		call gotoXY
		mov ah,40h
		mov bx,1
		mov cx,SIZEOF check1
		mov dx,OFFSET check1
		int 21h
		jmp c1
    .else

	    mov matrix[esi],bl
	.endif
.elseif al=="2"
        mov esi,4
       .if matrix[esi]=='X' || matrix[esi]=='O'
		mov dl,14
		mov dh,10
		call gotoXY
		mov ah,40h
		mov bx,1
		mov cx,SIZEOF check1
		mov dx,OFFSET check1
		int 21h
		jmp c1
    .else

	    mov matrix[esi],bl
	.endif
.elseif al=="3"
    mov esi,8
    .if matrix[esi]=='X' || matrix[esi]=='O'
		mov dl,14
		mov dh,10
		call gotoXY
		mov ah,40h
		mov bx,1
		mov cx,SIZEOF check1
		mov dx,OFFSET check1
		int 21h
		jmp c1
    .else

	    mov matrix[esi],bl
	.endif
.elseif al=="4"
    mov esi,9
	.if matrix[esi]=='X' || matrix[esi]=='O'
		mov dl,14
		mov dh,10
		call gotoXY
		mov ah,40h
		mov bx,1
		mov cx,SIZEOF check1
		mov dx,OFFSET check1
		int 21h
		jmp c1
    .else

	    mov matrix[esi],bl
	.endif
.elseif al=="5"
    mov esi,13
	.if matrix[esi]=='X' || matrix[esi]=='O'
		mov dl,14
		mov dh,10
		call gotoXY
		mov ah,40h
		mov bx,1
		mov cx,SIZEOF check1
		mov dx,OFFSET check1
		int 21h
		jmp c1
    .else

	    mov matrix[esi],bl
	.endif
.elseif al=="6"
    mov esi,17
	.if matrix[esi]=='X' || matrix[esi]=='O'
		mov dl,14
		mov dh,10
		call gotoXY
		mov ah,40h
		mov bx,1
		mov cx,SIZEOF check1
		mov dx,OFFSET check1
		int 21h
		jmp c1
    .else

	    mov matrix[esi],bl
	.endif
.elseif al=="7"
    mov esi,18
	.if matrix[esi]=='X' || matrix[esi]=='O'
		mov dl,14
		mov dh,10
		call gotoXY
		mov ah,40h
		mov bx,1
		mov cx,SIZEOF check1
		mov dx,OFFSET check1
		int 21h
		jmp c1
    .else

	    mov matrix[esi],bl
	.endif
.elseif al=="8"
    mov esi,22
	.if matrix[esi]=='X' || matrix[esi]=='O'
		mov dl,14
		mov dh,10
		call gotoXY
		mov ah,40h
		mov bx,1
		mov cx,SIZEOF check1
		mov dx,OFFSET check1
		int 21h
		jmp c1
    .else

	    mov matrix[esi],bl
	.endif
.elseif al=="9"
    mov esi,26
	.if matrix[esi]=='X' || matrix[esi]=='O'
		mov dl,14
		mov dh,10
		call gotoXY
		mov ah,40h
		mov bx,1
		mov cx,SIZEOF check1
		mov dx,OFFSET check1
		int 21h
		jmp c1
    .else

	    mov matrix[esi],bl
	.endif
.endif

xor eax,eax
call draw
call toggle



xor eax,eax
call winX
cmp eax,'X'
je L5
xor eax,eax
call winO
cmp eax,'O'
je L6


jmp L71



jmp L7

L5:

xor edx,edx
mov dl,25
mov dh,12
call gotoXY

xor edx,edx
xor eax,eax

   
    mov ah,40h
	mov bx,1
	mov cx,SIZEOF X1
	mov dx,OFFSET X1
	int 21h


ret

    



L6:

xor edx,edx
mov dl,25
mov dh,12
call gotoXY



    xor edx,edx
    xor eax,eax
    mov ah,40h
	mov bx,1
	mov cx,SIZEOF O1
	mov dx,OFFSET O1
	int 21h


ret

L71:

xor eax,eax
xor edx,edx

mov esi,0
mov al,matrix[esi]
cmp al,'-'
je L7
      
xor eax,eax
xor edx,edx
mov esi,0
mov esi,4
mov al,matrix[esi]
cmp al,'-'
je L7

xor eax,eax
xor edx,edx
mov esi,0
mov esi,8
mov al,matrix[esi]
cmp al,'-'
je L7


xor eax,eax
xor edx,edx
mov esi,0
mov esi,9
mov al,matrix[esi]
cmp al,'-'
je L7

xor eax,eax
xor edx,edx
mov esi,0
mov esi,13
mov al,matrix[esi]
cmp al,'-'
je L7

xor eax,eax
xor edx,edx
mov esi,0
mov esi,17
mov al,matrix[esi]
cmp al,'-'
je L7

xor eax,eax
xor edx,edx
mov esi,0
mov esi,18
mov al,matrix[esi]
cmp al,'-'
je L7


xor eax,eax
xor edx,edx
mov esi,0
mov esi,22
mov al,matrix[esi]
cmp al,'-'
je L7

xor eax,eax
xor edx,edx
mov esi,0
mov esi,26
mov al,matrix[esi]
cmp al,'-'
je L7




xor edx,edx
mov dl,25
mov dh,12
call gotoXY



    xor edx,edx
    xor eax,eax
    mov ah,40h
	mov bx,1
	mov cx,SIZEOF D1
	mov dx,OFFSET D1
	int 21h
ret

L7:



inc count1



.endw

next:

ret
input endp





