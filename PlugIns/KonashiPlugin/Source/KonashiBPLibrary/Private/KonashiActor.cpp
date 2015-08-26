// Fill out your copyright notice in the Description page of Project Settings.

#include "KonashiBPLibraryPrivatePCH.h"
#if PLATFORM_IOS
#include  "Konashi.h"
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


AKonashiActor::AKonashiActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if PLATFORM_IOS
    [[Konashi shared] setConnectedHandler:^{
     NSLog(@"CONNECTED");
     }];
    [[Konashi shared] setReadyHandler:^{
     NSLog(@"READY");
     
     }];
#endif
}





