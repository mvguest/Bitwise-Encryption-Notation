test64:
	@gcc test64.c biten64.c -Iheaders -o test64
	@./test64
	@rm -rf test64

test32:
	@gcc test32.c biten32.c -Iheaders -o test32
	@./test32
	@rm -rf test32