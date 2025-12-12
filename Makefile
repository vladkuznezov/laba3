# Цель по умолчанию: собрать программу
build:
	g++ hello.cpp -o hello_program

# Очистка: удалить собранную программу
clean:
	rm -f hello_program
