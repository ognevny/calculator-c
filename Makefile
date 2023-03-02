default:
	cc calculator.c -o calculator

archlinux:
	makepkg -si --noconfirm
	