// Fill out your copyright notice in the Description page of Project Settings.

#include "KonashiBPLibraryPrivatePCH.h"
#if PLATFORM_IOS
#include  "Konashi.h"
#endif

int EKonashiDigitalIOPinEnumToKonashiDigitalIOPin(EKonashiDigitalIOPinEnum pin){
    if(pin <= EKonashiDigitalIOPinEnum::KE_KonashiDigitalIO7){
        return (int)pin;
    }else if(pin >= EKonashiDigitalIOPinEnum::KE_KonashiS1 && pin < EKonashiDigitalIOPinEnum::KE_KonashiI2C_SDA){
        return (int)pin - (int)EKonashiDigitalIOPinEnum::KE_KonashiS1;
    }else{
        return (int)pin - (int)EKonashiDigitalIOPinEnum::KE_KonashiI2C_SDA + KonashiI2C_SDA;
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
            break;
    }
}
EKonashiAnalogIOPinEnum KonashiDigitalIOPinToEKonashiAnalogIOPinEnum(KonashiAnalogIOPin pin){
    switch (pin) {
        case KonashiAnalogIO0:
            return EKonashiAnalogIOPinEnum::KE_KonashiAnalogIO0;
        case KonashiAnalogIO1:
            return EKonashiAnalogIOPinEnum::KE_KonashiAnalogIO1;
        case KonashiAnalogIO2:
            return EKonashiAnalogIOPinEnum::KE_KonashiAnalogIO2;
    }
}


int EKonashiLevelEnumToKonashiLevel(EKonashiLevelEnum pin){
    if(pin < EKonashiLevelEnum::KE_KonashiLevelUnknown){
        return (int)pin;
    }else{
        return -1;
    }
}

int EKonashiPinModeEnumToKonashiPinMode(EKonashiPinModeEnum pin){
    if(pin >= EKonashiPinModeEnum::KE_KonashiPinModeNoPulls){
        return (int)pin - (int)EKonashiPinModeEnum::KE_KonashiPinModeNoPulls;
    }else{
        return (int)pin;
    }
}


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
        OnAnalogPinDidChangeValue(KonashiDigitalIOPinToEKonashiAnalogIOPinEnum(pin),value);
     }];
#endif
}


void AKonashiActor::AnalogReadRequest(EKonashiAnalogIOPinEnum pin){
#if PLATFORM_IOS
#endif
}

int32 AKonashiActor::AnalogRead(EKonashiAnalogIOPinEnum pin){
#if PLATFORM_IOS
    return 1;
#endif
}

void AKonashiActor::AnalogWrite(EKonashiAnalogIOPinEnum pin,int32 milliVolt){
#if PLATFORM_IOS
#endif
}

EKonashiLevelEnum AKonashiActor::DigitalRead(EKonashiDigitalIOPinEnum pin){
#if PLATFORM_IOS
    return EKonashiLevelEnum::KE_KonashiLevelLow;
#endif
}

void AKonashiActor::DigitalWrite(EKonashiDigitalIOPinEnum pin,EKonashiLevelEnum value){
#if PLATFORM_IOS
#endif
}

void AKonashiActor::PinMode(EKonashiDigitalIOPinEnum pin,EKonashiPinModeEnum mode){
#if PLATFORM_IOS
#endif
}

void AKonashiActor::PwmDuty(EKonashiDigitalIOPinEnum pin,int32 duty){
#if PLATFORM_IOS
#endif
}

void AKonashiActor::PwmLedDrive(EKonashiDigitalIOPinEnum pin,int32 ratio){
#if PLATFORM_IOS
#endif
}

void AKonashiActor::PwmMode(EKonashiDigitalIOPinEnum pin,EKonashiPWMModeEnum mode){
#if PLATFORM_IOS
#endif
}

void AKonashiActor::PwmPeriod(EKonashiDigitalIOPinEnum pin,int32 period){
#if PLATFORM_IOS
#endif
}

