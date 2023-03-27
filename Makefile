default:
	mkdir bin &
	cc src/calculator.c -o bin/calculator

clean:
	rm -rf bin
	mkdir bin &

install:
	chmod +x bin/calculator
	cp bin/calculator /usr/local/bin/
	which calculator
	
uninstall:
	rm /usr/local/bin/calculator

