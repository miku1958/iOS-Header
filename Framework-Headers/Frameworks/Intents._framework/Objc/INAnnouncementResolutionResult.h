//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INAnnouncementResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithAnnouncementToConfirm:(id)arg1;
+ (id)disambiguationWithAnnouncementsToDisambiguate:(id)arg1;
+ (id)successWithResolvedAnnouncement:(id)arg1;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end

