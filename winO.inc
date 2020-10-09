winO proc
mov edi,0
xor eax,eax
.if matrix[edi]=='O' && matrix[edi+4]=='O' && matrix[edi+8]=='O'
	mov eax,'O'
	ret
.elseif matrix[edi+9]=='O' && matrix[edi+13]=='O' && matrix[edi+17]=='O'
	mov eax,'O'
	ret
.elseif matrix[edi+18]=='O' && matrix[edi+22]=='O' && matrix[edi+26]=='O'
	mov eax,'O'
	ret
.elseif matrix[edi]=='O' && matrix[edi+9]=='O' && matrix[edi+18]=='O'
	mov eax,'O'
	ret
.elseif matrix[edi+4]=='O' && matrix[edi+13]=='O' && matrix[edi+22]=='O'
	mov eax,'O'
	ret	
.elseif matrix[edi+8]=='O' && matrix[edi+17]=='O' && matrix[edi+26]=='O'
	mov eax,'O'
	ret
.elseif matrix[edi]=='O' && matrix[edi+13]=='O' && matrix[edi+26]=='O'
	mov eax,'O'
	ret
.elseif matrix[edi+8]=='O' && matrix[edi+13]=='O' && matrix[edi+18]=='O'
	mov eax,'O'
	ret
.endif
winO endp