// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "KonashiActor.generated.h"

/**
 * 
 */

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EKonashiDigitalIOPinEnum :uint8
{
    KE_KonashiDigitalIO0 = 0 UMETA(DisplayName="KonashiDigitalIO0"),
    KE_KonashiDigitalIO1 = 1 UMETA(DisplayName="KonashiDigitalIO1"),
    KE_KonashiDigitalIO2 = 2 UMETA(DisplayName="KonashiDigitalIO2"),
    KE_KonashiDigitalIO3 = 3 UMETA(DisplayName="KonashiDigitalIO3"),
    KE_KonashiDigitalIO4 = 4 UMETA(DisplayName="KonashiDigitalIO4"),
    KE_KonashiDigitalIO5 = 5 UMETA(DisplayName="KonashiDigitalIO5"),
    KE_KonashiDigitalIO6 = 6 UMETA(DisplayName="KonashiDigitalIO6"),
    KE_KonashiDigitalIO7 = 7 UMETA(DisplayName="KonashiDigitalIO7"),
    KE_KonashiS1 = 8 UMETA(DisplayName="KonashiS1"),
    KE_KonashiLED2 = 9 UMETA(DisplayName="KonashiLED2"),
    KE_KonashiLED3 = 10 UMETA(DisplayName="KonashiLED3"),
    KE_KonashiLED4 = 11 UMETA(DisplayName="KonashiLED4"),
    KE_KonashiLED5 = 12 UMETA(DisplayName="KonashiLED5"),
    KE_KonashiI2C_SDA = 13 UMETA(DisplayName="KonashiI2C_SDA"),
    KE_KonashiI2C_SCL = 14 UMETA(DisplayName="KonashiI2C_SCL")
};

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EKonashiLevelEnum :uint8
{
    KE_KonashiLevelLow	 = 0 UMETA(DisplayName="KonashiLevelLow"),
    KE_KonashiLevelHigh = 1 UMETA(DisplayName="KonashiLevelHigh"),
    KE_KonashiLevelUnknown = 255 UMETA(DisplayName="KonashiLevelUnknown"),
};

UENUM(BlueprintType)
enum class EKonashiPinModeEnum :uint8
{
    KE_KonashiPinModeInput	= 0 UMETA(DisplayName="KonashiPinModeInput"),
    KE_KonashiPinModeOutput = 1 UMETA(DisplayName="KonashiPinModeOutput"),
    KE_KonashiPinModeNoPulls = 2 UMETA(DisplayName="KonashiPinModeNoPulls"),
    KE_KonashiPinModePullup = 3 UMETA(DisplayName="KonashiPinModePullup")
};

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EKonashiAnalogIOPinEnum :uint8
{
    KE_KonashiAnalogIO0	 = 0 UMETA(DisplayName="KonashiAnalogIO0"),
    KE_KonashiAnalogIO1 = 1 UMETA(DisplayName="KonashiAnalogIO1"),
    KE_KonashiAnalogIO2 = 2 UMETA(DisplayName="KonashiAnalogIO2"),
};

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EKonashiPWMModeEnum :uint8
{
    KE_KonashiPWMModeDisable	 = 0 UMETA(DisplayName="KonashiPWMModeDisable"),
    KE_KonashiPWMModeEnable = 1 UMETA(DisplayName="KonashiPWMModeEnable"),
    KE_KonashiPWMModeEnableLED = 2 UMETA(DisplayName="KonashiPWMModeEnableLED"),
};


UCLASS()
class  KONASHIBPLIBRARY_API AKonashiActor : public AActor
{
	GENERATED_UCLASS_BODY()

    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void Find();
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void FindWithName(const FString &deviceName);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void AnalogReadRequest(EKonashiAnalogIOPinEnum pin);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    int32 AnalogRead(EKonashiAnalogIOPinEnum pin);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void AnalogWrite(EKonashiAnalogIOPinEnum pin,int32 milliVolt);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    EKonashiLevelEnum DigitalRead(EKonashiDigitalIOPinEnum pin);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void DigitalWrite(EKonashiDigitalIOPinEnum pin,EKonashiLevelEnum value);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void PinMode(EKonashiDigitalIOPinEnum pin,EKonashiPinModeEnum mode);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void PwmDuty(EKonashiDigitalIOPinEnum pin, int32 duty);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void PwmLedDrive(EKonashiDigitalIOPinEnum pin,int32 ratio);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void PwmMode(EKonashiDigitalIOPinEnum pin,EKonashiPWMModeEnum mode);
    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void PwmPeriod(EKonashiDigitalIOPinEnum pin,int32 period);
    
    UFUNCTION(Category="KonashiBPLibrary", BlueprintImplementableEvent, meta=(DisplayName  = "Find Device Event CallBack Event"))
    void OnFindDeviceEvent(const TArray<FString> &deviceNames);
    
     UFUNCTION(Category="KonashiBPLibrary", BlueprintImplementableEvent, meta=(DisplayName  = "Konashi Connected Event"))
     void OnConnected();
    
    UFUNCTION(Category="KonashiBPLibrary", BlueprintImplementableEvent, meta=(DisplayName  = "Konashi Redy Event"))
    void OnReady();
    
    UFUNCTION(Category="KonashiBPLibrary", BlueprintImplementableEvent, meta=(DisplayName  = "OnDigitalInputDidChangeValue"))
    void OnDigitalInputDidChangeValue(EKonashiDigitalIOPinEnum pin,int32 value);
    
    UFUNCTION(Category="KonashiBPLibrary", BlueprintImplementableEvent, meta=(DisplayName  = "OnAnalogPinDidChangeValue"))
    void OnAnalogPinDidChangeValue(EKonashiAnalogIOPinEnum pin,int32 value);
};





