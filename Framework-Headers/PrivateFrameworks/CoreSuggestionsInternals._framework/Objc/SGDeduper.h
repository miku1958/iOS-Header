//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGDeduper : NSObject
{
}

+ (id)_dedupeGenericContactDetails:(id)arg1;
+ (id)_dedupePostalAddresses:(id)arg1;
+ (CDUnknownBlockType)bucketerWithEqualityTest:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)bucketerWithLabeledBuckets:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)bucketerWithMapping:(CDUnknownBlockType)arg1;
+ (id)dedupe:(id)arg1 bucketer:(CDUnknownBlockType)arg2 resolver:(CDUnknownBlockType)arg3;
+ (id)dedupeContactDetails:(id)arg1;
+ (void)enumerateEKEventsForPseudoEventBySimilarStartAndEndTime:(id)arg1 store:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (unsigned char)eventsHaveIdenticalReservationIds:(id)arg1 ekEventFromStore:(id)arg2;
+ (BOOL)eventsHaveSimilarTitles:(id)arg1 ekEventFromStore:(id)arg2;
+ (CDUnknownBlockType)resolveByPairs:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)resolveByScoreBreakTiesArbitrarily:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)resolveSGContactDetailsPreferringPhraseExtractionsAndLabels;
+ (id)splitContactDetailsByType:(id)arg1;

@end

