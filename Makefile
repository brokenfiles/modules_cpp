NAME		=	module00
EXERCICES	=	./ex00\
				./ex01

${NAME}:
	@for exercice in ${EXERCICES} ; do \
        make all -C $$exercice ; \
    done

all: ${NAME}

ex00:
	make all -C ./ex00

ex01:
	make all -C ./ex01

fclean:
	@for exercice in ${EXERCICES} ; do \
        make fclean -C $$exercice ; \
    done

re:
	@for exercice in ${EXERCICES} ; do \
        make re -C $$exercice ; \
    done

clean:
	@for exercice in ${EXERCICES} ; do \
        make clean -C $$exercice ; \
    done