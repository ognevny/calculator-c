default:
	cc calculator.c -o bin/calculator
run:
	cc calculator.c -o bin/calculator
	bin/calculator

oldcalc:
	cc calculator.old.c -o bin/oldcalc
