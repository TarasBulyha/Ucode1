CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

SRC_DIR = src
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
SRC_FILES_OB = $(notdir $(SRC_FILES))

INC_DIR = inc
INC_FILES = $(wildcard $(INC_DIR)/*.h)
INC_FILES_OB = $(notdir $(INC_FILES))

NAME = mx_cp

all: install clean

install: MX_CP

MX_CP:
	@cp $(SRC_FILES) .
	@cp $(INC_FILES) .
	@$(CC) $(CFLAGS) $(SRC_FILES_OB) -I$(INC_FILES_OB) -o $(NAME)

uninstall: clean
	@rm -f $(NAME)

clean:
	@rm -f $(SRC_FILES_OB)
	@rm -f $(INC_FILES_OB)

reinstall: uninstall all
