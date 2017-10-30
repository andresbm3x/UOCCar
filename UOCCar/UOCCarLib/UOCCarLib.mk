##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=UOCCarLib
ConfigurationName      :=Debug
WorkspacePath          :=E:/UOC/UOCCar/UOCCar
ProjectPath            :=E:/UOC/UOCCar/UOCCar/UOCCarLib
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=andre
Date                   :=30/10/2017
CodeLitePath           :="C:/Program Files (x86)/CodeLite"
LinkerName             :=C:/TDM-GCC-32/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-32/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../lib/$(ProjectName).lib
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="UOCCarLib.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)./include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-32/bin/ar.exe rcu
CXX      := C:/TDM-GCC-32/bin/g++.exe
CC       := C:/TDM-GCC-32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall  -Werror $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall  -Werror $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeLite
Objects0=$(IntermediateDirectory)/src_cars.c$(ObjectSuffix) $(IntermediateDirectory)/src_helpers.c$(ObjectSuffix) $(IntermediateDirectory)/src_offices.c$(ObjectSuffix) $(IntermediateDirectory)/src_operations.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(IntermediateDirectory) $(OutputFile)

$(OutputFile): $(Objects)
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(AR) $(ArchiveOutputSwitch)$(OutputFile) $(Objects) $(ArLibs)
	@$(MakeDirCommand) "E:\UOC\UOCCar\UOCCar/.build-debug"
	@echo rebuilt > "E:\UOC\UOCCar\UOCCar/.build-debug/UOCCarLib"

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


./Debug:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_cars.c$(ObjectSuffix): src/cars.c $(IntermediateDirectory)/src_cars.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/UOC/UOCCar/UOCCar/UOCCarLib/src/cars.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_cars.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_cars.c$(DependSuffix): src/cars.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_cars.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_cars.c$(DependSuffix) -MM src/cars.c

$(IntermediateDirectory)/src_cars.c$(PreprocessSuffix): src/cars.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_cars.c$(PreprocessSuffix) src/cars.c

$(IntermediateDirectory)/src_helpers.c$(ObjectSuffix): src/helpers.c $(IntermediateDirectory)/src_helpers.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/UOC/UOCCar/UOCCar/UOCCarLib/src/helpers.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_helpers.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_helpers.c$(DependSuffix): src/helpers.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_helpers.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_helpers.c$(DependSuffix) -MM src/helpers.c

$(IntermediateDirectory)/src_helpers.c$(PreprocessSuffix): src/helpers.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_helpers.c$(PreprocessSuffix) src/helpers.c

$(IntermediateDirectory)/src_offices.c$(ObjectSuffix): src/offices.c $(IntermediateDirectory)/src_offices.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/UOC/UOCCar/UOCCar/UOCCarLib/src/offices.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_offices.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_offices.c$(DependSuffix): src/offices.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_offices.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_offices.c$(DependSuffix) -MM src/offices.c

$(IntermediateDirectory)/src_offices.c$(PreprocessSuffix): src/offices.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_offices.c$(PreprocessSuffix) src/offices.c

$(IntermediateDirectory)/src_operations.c$(ObjectSuffix): src/operations.c $(IntermediateDirectory)/src_operations.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/UOC/UOCCar/UOCCar/UOCCarLib/src/operations.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_operations.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_operations.c$(DependSuffix): src/operations.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_operations.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_operations.c$(DependSuffix) -MM src/operations.c

$(IntermediateDirectory)/src_operations.c$(PreprocessSuffix): src/operations.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_operations.c$(PreprocessSuffix) src/operations.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


