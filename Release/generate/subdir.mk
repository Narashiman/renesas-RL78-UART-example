################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables
ASM_SRCS += \
../generate/cstart.asm \
../generate/stkinit.asm 

ASSEMBLER_OBJS += \
generate/cstart.obj \
generate/stkinit.obj 

ASM_DEPS += \
generate/cstart.d \
generate/stkinit.d 

# Each subdirectory must supply rules for building sources it contributes
generate/%.obj: ../generate/%.asm generate/Assembler.sub
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Assembler'
	ccrl -asmopt=-MM -asmopt=-MP -asmopt=-MF="$(@:%.obj=%.d)" -asmopt=-MT="$(@:%.obj=%.obj)" -asmopt=-MT="$(@:%.obj=%.d)" -cpu=S2 -c -asmopt=-mirror_source=common -dev="C:\Renesas\e2_studio\eclipse\\..\\DebugComp\\RL78\RL78\Common\DR5F10268.DVF" -msg_lang=english  "$<"
	ccrl -cpu=S2 -c -asmopt=-mirror_source=common -dev="C:\Renesas\e2_studio\eclipse\\..\\DebugComp\\RL78\RL78\Common\DR5F10268.DVF" -msg_lang=english -o "$(@:%.d=%.obj)" "$<"
	@echo 'Finished Scanning and building: $<'
	@echo.

