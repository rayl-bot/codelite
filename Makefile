.PHONY: clean All

All:
	@echo "----------Building project:[ PEC04 - Debug ]----------"
	@cd "PEC04" && "$(MAKE)" -f  "PEC04.mk"
clean:
	@echo "----------Cleaning project:[ PEC04 - Debug ]----------"
	@cd "PEC04" && "$(MAKE)" -f  "PEC04.mk" clean
