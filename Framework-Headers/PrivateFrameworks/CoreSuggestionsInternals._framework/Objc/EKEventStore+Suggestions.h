//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKEventStore.h>

@interface EKEventStore (Suggestions)
+ (id)sg_newStore;
+ (void)sg_usingSharedStoreForReadingOnly:(CDUnknownBlockType)arg1;
- (id)_sg_fetchEKEventsForPseudoNLEvent:(id)arg1 title:(id)arg2 participants:(id)arg3;
- (id)eventWithExternalID:(id)arg1;
- (double)eventsPerWeekAroundDate:(id)arg1;
- (id)eventsWithSameAlternativeOpaqueKeyAsDuplicateKey:(id)arg1 harvestStore:(id)arg2;
- (id)eventsWithSameAlternativeOpaqueKeyAsPseudoEvent:(id)arg1 harvestStore:(id)arg2;
- (id)eventsWithSameAlternativeOpaqueKeyAsStorageEvent:(id)arg1 harvestStore:(id)arg2;
- (id)eventsWithSameOpaqueKeyAsDuplicateKey:(id)arg1 extraKey:(id)arg2 harvestStore:(id)arg3;
- (id)eventsWithSameOpaqueKeyAsPseudoEvent:(id)arg1 harvestStore:(id)arg2;
- (id)eventsWithSameOpaqueKeyAsStorageEvent:(id)arg1 harvestStore:(id)arg2;
- (void)sg_bumpTimeToLiveForZeroKeywordNLEventOnInteraction:(id)arg1;
- (id)sg_confirmedEKEventForSGEvent:(id)arg1;
- (id)sg_fetchEKEventsForPseudoEventBySimilarTitleAndStartTime:(id)arg1;
- (id)sg_fetchEKEventsForPseudoNLEvent:(id)arg1 entity:(id)arg2;
- (id)sg_fetchEKEventsForPseudoNLEvent:(id)arg1 message:(id)arg2;
@end
