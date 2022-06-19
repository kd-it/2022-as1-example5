CC=gcc
DEST=/usr/local/bin

all: hello

hello: hello.c

install: $(DEST)/hello

$(DEST)/hello: hello
	install -m 0755 -o root -g root hello $@
