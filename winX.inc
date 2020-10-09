winX proc
mov edi,0
xor eax,eax
.if matrix[edi]=='X' && matrix[edi+4]=='X' && matrix[edi+8]=='X'
	mov eax,'X'
	ret
.elseif matrix[edi+9]=='X' && matrix[edi+13]=='X' && matrix[edi+17]=='X'
	mov eax,'X'
	ret
.elseif matrix[edi+18]=='X' && matrix[edi+22]=='X' && matrix[edi+26]=='X'
	mov eax,'X'
	ret
.elseif matrix[edi]=='X' && matrix[edi+9]=='X' && matrix[edi+18]=='X'
	mov eax,'X'
	ret
.elseif matrix[edi+4]=='X' && matrix[edi+13]=='X' && matrix[edi+22]=='X'
	mov eax,'X'
	ret	
.elseif matrix[edi+8]=='X' && matrix[edi+17]=='X' && matrix[edi+26]=='X'
	mov eax,'X'
	ret
.elseif matrix[edi]=='X' && matrix[edi+13]=='X' && matrix[edi+26]=='X'
	mov eax,'X'
	ret
.elseif matrix[edi+8]=='X' && matrix[edi+13]=='X' && matrix[edi+18]=='X'
	mov eax,'X'
	ret
.endif
winX endp