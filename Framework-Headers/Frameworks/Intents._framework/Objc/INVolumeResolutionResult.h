//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INVolumeResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithVolumeToConfirm:(id)arg1;
+ (id)disambiguationWithVolumeToDisambiguate:(id)arg1;
+ (id)successWithResolvedVolume:(id)arg1;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end

