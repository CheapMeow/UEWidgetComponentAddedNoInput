// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "MyWidgetComponent.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = UserInterface)
	void EnableInput(bool bEnable)
	{
		bReceiveHardwareInput = bEnable;
	}
};
