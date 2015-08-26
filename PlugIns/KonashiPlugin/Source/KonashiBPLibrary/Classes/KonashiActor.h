// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "KonashiActor.generated.h"

/**
 * 
 */

UCLASS()
class  KONASHIBPLIBRARY_API AKonashiActor : public AActor
{
	GENERATED_UCLASS_BODY()

    
    UFUNCTION(BlueprintCallable, Category="KonashiBPLibrary")
    void Find();
    
    
    UFUNCTION(Category="KonashiBPLibrary", BlueprintImplementableEvent, meta=(DisplayName  = "Find Device Event CallBack Event"))
    void OnFindDeviceEvent(const TArray<FString> &deviceNames);
	
};
