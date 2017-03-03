#pragma once

#include "EyeXActorBase.h"
#include "MyActor.generated.h"

/**
 * Simple example of a class deriving from the EyeXActorBase class to receive notifications when 
 * the actor receives and loses the player's attention.
 */
UCLASS()
class EYEXSAMPLES_API AMyActor : public AEyeXActorBase
{
	GENERATED_BODY()

public:
	AMyActor(const FObjectInitializer& ObjectInitializer);

	virtual void GotGazeFocus() override;
	virtual void LostGazeFocus() override;

};
