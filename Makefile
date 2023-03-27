default:
	cc src/calculator.c -o bin/calculator

clean:
	rm -rf bin
	
install:
	
	cp bin/calculator /usr/local/bin/
	
uninstall:
	rm /usr/local/bin/calculator

