// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaFactory() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaFactory_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANaveEnemigaFactory::execCrearNaveEnemiga)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tipoNave);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ANaveEnemiga**)Z_Param__Result=ANaveEnemigaFactory::CrearNaveEnemiga(Z_Param_tipoNave,Z_Param_World,Z_Param_SpawnLocation,Z_Param_SpawnRotation);
		P_NATIVE_END;
	}
	void ANaveEnemigaFactory::StaticRegisterNativesANaveEnemigaFactory()
	{
		UClass* Class = ANaveEnemigaFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearNaveEnemiga", &ANaveEnemigaFactory::execCrearNaveEnemiga },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics
	{
		struct NaveEnemigaFactory_eventCrearNaveEnemiga_Parms
		{
			FString tipoNave;
			UWorld* World;
			FVector SpawnLocation;
			FRotator SpawnRotation;
			ANaveEnemiga* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tipoNave;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_tipoNave = { "tipoNave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, tipoNave), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms, ReturnValue), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_tipoNave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_SpawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::Function_MetaDataParams[] = {
		{ "Category", "NaveEnemigaFactory" },
		{ "Comment", "// Sets default values for this actor's properties\n//ANaveEnemigaFactory();\n//UFUNCTION(BlueprintCallable, Category = \"NaveEnemigaFactory\")\n//static ANaveEnemiga* CrearNaveEnemiga(FString tipoNave, float MinSpeed, float MaxSpeed, float LimiteInferiorX);\n" },
		{ "ModuleRelativePath", "NaveEnemigaFactory.h" },
		{ "ToolTip", "Sets default values for this actor's properties\nANaveEnemigaFactory();\nUFUNCTION(BlueprintCallable, Category = \"NaveEnemigaFactory\")\nstatic ANaveEnemiga* CrearNaveEnemiga(FString tipoNave, float MinSpeed, float MaxSpeed, float LimiteInferiorX);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaveEnemigaFactory, nullptr, "CrearNaveEnemiga", nullptr, nullptr, sizeof(NaveEnemigaFactory_eventCrearNaveEnemiga_Parms), Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANaveEnemigaFactory_NoRegister()
	{
		return ANaveEnemigaFactory::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANaveEnemigaFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANaveEnemigaFactory_CrearNaveEnemiga, "CrearNaveEnemiga" }, // 2173143605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigaFactory.h" },
		{ "ModuleRelativePath", "NaveEnemigaFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaFactory_Statics::ClassParams = {
		&ANaveEnemigaFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaFactory, 4221119548);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaFactory>()
	{
		return ANaveEnemigaFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaFactory(Z_Construct_UClass_ANaveEnemigaFactory, &ANaveEnemigaFactory::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
