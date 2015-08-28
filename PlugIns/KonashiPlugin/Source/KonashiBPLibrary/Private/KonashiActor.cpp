// Fill out your copyright notice in the Description page of Project Settings.

#include "KonashiBPLibraryPrivatePCH.h"
#if PLATFORM_IOS
#include  "Konashi.h"
#endif

#if PLATFORM_IOS
KonashiDigitalIOPin EKonashiDigitalIOPinEnumToKonashiDigitalIOPin(EKonashiDigitalIOPinEnum pin){
    switch (pin) {
        case EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO0:
            return KonashiDigitalIO0;
        case EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO1:
            return KonashiDigitalIO1;
        case EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO2:
            return KonashiDigitalIO2;
        case EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO3:
            return KonashiDigitalIO3;
        case EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO4:
            return KonashiDigitalIO4;
        case EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO5:
            return KonashiDigitalIO5;
        case EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO6:
            return KonashiDigitalIO6;
        case EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO7:
            return KonashiDigitalIO7;
        case EKonashiDigitalIOPinEnum::KE_KonashiS1:
            return KonashiS1;
        case EKonashiDigitalIOPinEnum::KE_KonashiLED2:
            return KonashiLED2;
        case EKonashiDigitalIOPinEnum::KE_KonashiLED3:
            return KonashiLED3;
        case EKonashiDigitalIOPinEnum::KE_KonashiLED4:
            return KonashiLED4;
        case EKonashiDigitalIOPinEnum::KE_KonashiLED5:
            return KonashiLED5;
        case EKonashiDigitalIOPinEnum::KE_KonashiI2C_SDA:
            return KonashiI2C_SDA;
        case EKonashiDigitalIOPinEnum::KE_KonashiI2C_SCL:
            return KonashiI2C_SCL;
    }
}

EKonashiDigitalIOPinEnum KonashiDigitalIOPinToEKonashiDigitalIOPinEnum(KonashiDigitalIOPin pin){
    switch (pin) {
        case KonashiDigitalIO0:
            return EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO0;
        case KonashiDigitalIO1:
            return EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO1;
        case KonashiDigitalIO2:
            return EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO2;
        case KonashiDigitalIO3:
            return EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO3;
        case KonashiDigitalIO4:
            return EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO4;
        case KonashiDigitalIO5:
            return EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO5;
        case KonashiDigitalIO6:
            return EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO6;
        case KonashiDigitalIO7:
            return EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO7;
        default:
            if(pin ==  KonashiS1){
                return EKonashiDigitalIOPinEnum::KE_KonashiS1;
            }else if(pin ==  KonashiLED2){
                return EKonashiDigitalIOPinEnum::KE_KonashiLED2;
            }else if(pin ==  KonashiLED3){
                return EKonashiDigitalIOPinEnum::KE_KonashiLED3;
            }else if(pin ==  KonashiLED4){
                return EKonashiDigitalIOPinEnum::KE_KonashiLED4;
            }else if(pin ==  KonashiLED5){
                return EKonashiDigitalIOPinEnum::KE_KonashiLED5;
            }else if(pin ==  KonashiI2C_SDA){
                return EKonashiDigitalIOPinEnum::KE_KonashiI2C_SDA;
            }else if(pin == KonashiI2C_SCL){
                return EKonashiDigitalIOPinEnum::KE_KonashiI2C_SCL;
            }else{
                return EKonashiDigitalIOPinEnum::KE_KonashiS1;
            }
            break;
    }
}

EKonashiLevelEnum KonashiLevelToEKonashiLevelEnum(KonashiLevel level){
    switch (level) {
        case KonashiLevelLow:
            return EKonashiLevelEnum::KE_KonashiLevelLow;
        case KonashiLevelHigh:
            return EKonashiLevelEnum::KE_KonashiLevelHigh;
        case KonashiLevelUnknown:
            return EKonashiLevelEnum::KE_KonashiLevelUnknown;
    }
}

KonashiLevel EKonashiLevelEnumToKonashiLevel(EKonashiLevelEnum level){
    switch (level) {
        case EKonashiLevelEnum::KE_KonashiLevelLow:
            return KonashiLevelLow;
        case EKonashiLevelEnum::KE_KonashiLevelHigh:
            return KonashiLevelHigh;
        case EKonashiLevelEnum::KE_KonashiLevelUnknown:
            return KonashiLevelUnknown;
    }
}


EKonashiAnalogIOPinEnum KonashiAnalogIOPinToEKonashiAnalogIOPinEnum(KonashiAnalogIOPin pin){
    switch (pin) {
        case KonashiAnalogIO0:
            return EKonashiAnalogIOPinEnum::KE_KonashiAnalogIO0;
        case KonashiAnalogIO1:
            return EKonashiAnalogIOPinEnum::KE_KonashiAnalogIO1;
        case KonashiAnalogIO2:
            return EKonashiAnalogIOPinEnum::KE_KonashiAnalogIO2;
    }
}

KonashiAnalogIOPin EKonashiAnalogIOPinEnumToKonashiAnalogIOPin(EKonashiAnalogIOPinEnum pin){
    switch (pin) {
        case EKonashiAnalogIOPinEnum::KE_KonashiAnalogIO0:
            return KonashiAnalogIO0;
        case EKonashiAnalogIOPinEnum::KE_KonashiAnalogIO1:
            return KonashiAnalogIO1;
        case EKonashiAnalogIOPinEnum::KE_KonashiAnalogIO2:
            return KonashiAnalogIO2;
    }
}


KonashiPinMode EKonashiPinModeEnumToKonashiPinMode(EKonashiPinModeEnum mode){
    switch(mode){
        case EKonashiPinModeEnum::KE_KonashiPinModeInput:
            return KonashiPinModeInput;
        case EKonashiPinModeEnum::KE_KonashiPinModeOutput:
            return KonashiPinModeOutput;
        case EKonashiPinModeEnum::KE_KonashiPinModeNoPulls:
            return KonashiPinModeNoPulls;
        case EKonashiPinModeEnum::KE_KonashiPinModePullup:
            return KonashiPinModePullup;
    }
}

KonashiPWMMode EKonashiPWMModeEnumToKonashiPWMMode(EKonashiPWMModeEnum mode){
    switch (mode) {
        case EKonashiPWMModeEnum::KE_KonashiPWMModeDisable:
            return KonashiPWMModeDisable;
        case EKonashiPWMModeEnum::KE_KonashiPWMModeEnable:
            return KonashiPWMModeEnable;
        case EKonashiPWMModeEnum::KE_KonashiPWMModeEnableLED:
            return KonashiPWMModeEnableLED;
    }
}
#endif

void AKonashiActor::Find(){
#if PLATFORM_IOS
    NSLog(@"CONNECTED");
    NSLog(@"%@",[Konashi shared]);
    [Konashi findDevice:^(NSArray *deviceNames){
        TArray<FString> deviceNamesArray;
        for (NSString *device in deviceNames){
            deviceNamesArray.Add([device UTF8String]);
        }
        OnFindDeviceEvent(deviceNamesArray);
     
     }];
    NSLog(@"End Find");
#endif
}

void AKonashiActor::FindWithName(const FString &deviceName){
#if PLATFORM_IOS
    if(deviceName == NULL){
        Find();
    }else{
        [Konashi findWithName:[[NSString alloc ] initWithUTF8String:TCHAR_TO_UTF8(*deviceName)]];
    }
#endif
}

AKonashiActor::AKonashiActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if PLATFORM_IOS
    [[Konashi shared] setConnectedHandler:^{
        NSLog(@"Konashi CONNECTED");
        OnConnected();
     }];
    [[Konashi shared] setReadyHandler:^{
        NSLog(@"Konashi READY");
        OnReady();
     }];
    
    [[Konashi shared] setDigitalInputDidChangeValueHandler:^( KonashiDigitalIOPin pin , int value ){
        NSLog(@"Konashi Input Change");
        OnDigitalInputDidChangeValue(KonashiDigitalIOPinToEKonashiDigitalIOPinEnum(pin),value);
     }];
    
    [[Konashi shared] setAnalogPinDidChangeValueHandler:^( KonashiAnalogIOPin pin , int value ) {
        NSLog(@"Konashi Analog Input");
        OnAnalogPinDidChangeValue(KonashiAnalogIOPinToEKonashiAnalogIOPinEnum(pin),value);
     }];
#endif
}


void AKonashiActor::AnalogReadRequest(EKonashiAnalogIOPinEnum pin){
#if PLATFORM_IOS
    [Konashi analogReadRequest:EKonashiAnalogIOPinEnumToKonashiAnalogIOPin(pin)];
#endif
}

int32 AKonashiActor::AnalogRead(EKonashiAnalogIOPinEnum pin){
#if PLATFORM_IOS
    return [Konashi analogRead:EKonashiAnalogIOPinEnumToKonashiAnalogIOPin(pin)];
#endif
    return 0;
}

void AKonashiActor::AnalogWrite(EKonashiAnalogIOPinEnum pin,int32 milliVolt){
#if PLATFORM_IOS
    [Konashi analogWrite:EKonashiAnalogIOPinEnumToKonashiAnalogIOPin(pin) milliVolt:milliVolt];
#endif
}

EKonashiLevelEnum AKonashiActor::DigitalRead(EKonashiDigitalIOPinEnum pin){
#if PLATFORM_IOS
    return KonashiLevelToEKonashiLevelEnum([Konashi digitalRead:(KonashiDigitalIOPin)EKonashiDigitalIOPinEnumToKonashiDigitalIOPin(pin)]);
#endif
    return EKonashiLevelEnum::KE_KonashiLevelUnknown;
}

void AKonashiActor::DigitalWrite(EKonashiDigitalIOPinEnum pin,EKonashiLevelEnum value){
#if PLATFORM_IOS
    [Konashi digitalWrite:EKonashiDigitalIOPinEnumToKonashiDigitalIOPin(pin) value:EKonashiLevelEnumToKonashiLevel(value)];
#endif
}

void AKonashiActor::PinMode(EKonashiDigitalIOPinEnum pin,EKonashiPinModeEnum mode){
#if PLATFORM_IOS
    [Konashi pinMode:EKonashiDigitalIOPinEnumToKonashiDigitalIOPin(pin) mode:EKonashiPinModeEnumToKonashiPinMode(mode)];
#endif
}

void AKonashiActor::PwmDuty(EKonashiDigitalIOPinEnum pin,int32 duty){
#if PLATFORM_IOS
    [Konashi pwmDuty:EKonashiDigitalIOPinEnumToKonashiDigitalIOPin(pin) duty:duty];
#endif
}

void AKonashiActor::PwmLedDrive(EKonashiDigitalIOPinEnum pin,int32 ratio){
#if PLATFORM_IOS
    [Konashi pwmLedDrive:EKonashiDigitalIOPinEnumToKonashiDigitalIOPin(pin) dutyRatio:ratio];
#endif
}

void AKonashiActor::PwmMode(EKonashiDigitalIOPinEnum pin,EKonashiPWMModeEnum mode){
#if PLATFORM_IOS
    [Konashi pwmMode:EKonashiDigitalIOPinEnumToKonashiDigitalIOPin(pin) mode:EKonashiPWMModeEnumToKonashiPWMMode(mode)];
#endif
}

void AKonashiActor::PwmPeriod(EKonashiDigitalIOPinEnum pin,int32 period){
#if PLATFORM_IOS
    [Konashi pwmPeriod:EKonashiDigitalIOPinEnumToKonashiDigitalIOPin(pin) period:period];
#endif
}

