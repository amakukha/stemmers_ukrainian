EXE=ukr_stem
OBJ=api.o utilities.o ukr_stem.o

all: $(EXE) $(OBJ)

clean:
	@rm -f $(OBJ) ukr.o

clean_all: clean
	@rm -f $(EXE)

api.o: api.c api.h header.h Makefile
	@$(CC) -c api.c

utilities.o: utilities.c header.h Makefile
	@$(CC) -c utilities.c

ukr_stem.o: ukr_stem.c ukr.c ukr.h header.h Makefile
	@$(CC) -c ukr_stem.c

$(EXE): $(OBJ) Makefile
	@echo Linking $(EXE)
	@$(CC) -o $(EXE) $(OBJ)
