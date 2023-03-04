default:
	cc src/calculator.c -o calculator

clean:
	rm -rf calculator calculator.exe

install:
	chmod +x calculator
	cp calculator /usr/local/bin/
	which calculator
	
uninstall:
	rm /usr/local/bin/calculator

