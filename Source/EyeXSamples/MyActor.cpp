#include "EyeXSamples.h"
#include "MyActor.h"

AMyActor::AMyActor(const class FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void AMyActor::GotGazeFocus()
{
	UE_LOG(LogTemp, Warning, TEXT("Someone is looking at me!"));
}

void AMyActor::LostGazeFocus()
{
}
