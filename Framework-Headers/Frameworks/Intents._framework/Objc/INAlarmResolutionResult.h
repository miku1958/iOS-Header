//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INAlarmResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithAlarmToConfirm:(id)arg1;
+ (id)disambiguationWithAlarmsToDisambiguate:(id)arg1;
+ (id)successWithResolvedAlarm:(id)arg1;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
