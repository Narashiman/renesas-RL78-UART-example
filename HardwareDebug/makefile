################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include makefile.init

RM := rm -rf *.sni *.dbg *.lst *.lis *.lpp *.map *.x *.lbp *.h *.bls *.libelf *.rel *.lbk *.abs *.prn  *.obj *.jmp *.d *.asm 1st/*.obj 1st/*.d 1st/*.asm 1st/*.abs

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include generate/subdir.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif 
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif 
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif 
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif 
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif 
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif 
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif 
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif 
endif

ifneq ($(strip $(SRC_UPPER_SRCS)),)
ALL_ASMS += $(SRC_UPPER_SRCS) 
endif
ifneq ($(strip $(SRC_SRCS)),)
ALL_ASMS += $(SRC_SRCS) 
endif
ifneq ($(strip $(S_UPPER_SRCS)),)
ALL_ASMS += $(S_UPPER_SRCS) 
endif
ifneq ($(strip $(S_SRCS)),)
ALL_ASMS += $(S_SRCS) 
endif


-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables
LINKER_OUTPUT_OUTPUTS += \
Test_SSB.abs

CONVERTOR_OUTPUT_OUTPUTS += \
Test_SSB.mot \
Test_SSB.x

OBJS := \
$(COMPILER_OBJS) \
$(INDIVIDUAL_COMPILER_OBJS) \
$(ASSEMBLER_OBJS) \
$(CUSTOM_OBJS)

# All Target
all: $(CONVERTOR_OUTPUT_OUTPUTS) 
	@echo 'Build complete.'

Test_SSB.mot: $(LINKER_OUTPUT_OUTPUTS) 
	@echo 'Invoking: Converter'
	@echo 'Building target:'
	rlink   "Test_SSB.abs" -form=stype -output="Test_SSB.mot" -byte_count=10 -message
	@echo 'Finished building target:'
	@echo.


Test_SSB.abs: $(OBJS)  $(ALL_ASMS)
	@echo 'Invoking: Linker'
	rlink   -device="C:\Renesas\e2_studio\eclipse\\..\\DebugComp\\RL78\RL78\Common\DR5F10268.DVF" -list="Test_SSB.map" -nooptimize -entry=_start -auto_section_layout -security_id=00000000000000000000 -user_opt_byte=EF3FE0 -ocdbg=04 -check_device -subcommand="LinkerSubCommand.tmp" -output="Test_SSB.abs" -debug -nocompress -memory=high -rom=.data=.dataR,.sdata=.sdataR -message -nologo
	@echo 'Finished building:'
	@echo.


Test_SSB.x: Test_SSB.abs
		-C:\Renesas\e2_studio\eclipse\/../\Utilities\\ccrl\renesas_cc_converter.exe Test_SSB.abs Test_SSB.x

# Other Targets
clean:
	-$(RM) $(LINKER_OUTPUT_OUTPUTS) $(CONVERTOR_OUTPUT_OUTPUTS)
	-rm -rf src/*.obj src/*.d src/*.asm src/*.p src/*.src src/*.jmp src/*.lst src/*.prn 
	-rm -rf generate/*.obj generate/*.d generate/*.asm generate/*.p generate/*.src generate/*.jmp generate/*.lst generate/*.prn 
	@echo
	@echo 'Clean complete.'

.PHONY: all clean 
-include ../makefile.targets