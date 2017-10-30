##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=UOCCarServer
ConfigurationName      :=Debug
WorkspacePath          :=E:/UOC/UOCCar/UOCCar
ProjectPath            :=E:/UOC/UOCCar/UOCCar/UOCCarServer
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
OutputFile             :=../bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="UOCCarServer.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)./include $(IncludeSwitch)../UOCCarLib/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)UOCCarLib 
ArLibs                 :=  "UOCCarLib" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)../lib 

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
Objects0=$(IntermediateDirectory)/src_main.c$(ObjectSuffix) $(IntermediateDirectory)/src_svrMain.c$(ObjectSuffix) $(IntermediateDirectory)/src_svrMenu.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) $(Objects) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_main.c$(ObjectSuffix): src/main.c $(IntermediateDirectory)/src_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/UOC/UOCCar/UOCCar/UOCCarServer/src/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_main.c$(DependSuffix): src/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_main.c$(DependSuffix) -MM src/main.c

$(IntermediateDirectory)/src_main.c$(PreprocessSuffix): src/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_main.c$(PreprocessSuffix) src/main.c

$(IntermediateDirectory)/src_svrMain.c$(ObjectSuffix): src/svrMain.c $(IntermediateDirectory)/src_svrMain.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/UOC/UOCCar/UOCCar/UOCCarServer/src/svrMain.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_svrMain.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_svrMain.c$(DependSuffix): src/svrMain.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_svrMain.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_svrMain.c$(DependSuffix) -MM src/svrMain.c

$(IntermediateDirectory)/src_svrMain.c$(PreprocessSuffix): src/svrMain.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_svrMain.c$(PreprocessSuffix) src/svrMain.c

$(IntermediateDirectory)/src_svrMenu.c$(ObjectSuffix): src/svrMenu.c $(IntermediateDirectory)/src_svrMenu.c$(DependSuffix)
	$(CC) $(SourceSwitch) "E:/UOC/UOCCar/UOCCar/UOCCarServer/src/svrMenu.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_svrMenu.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_svrMenu.c$(DependSuffix): src/svrMenu.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_svrMenu.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_svrMenu.c$(DependSuffix) -MM src/svrMenu.c

$(IntermediateDirectory)/src_svrMenu.c$(PreprocessSuffix): src/svrMenu.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_svrMenu.c$(PreprocessSuffix) src/svrMenu.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


