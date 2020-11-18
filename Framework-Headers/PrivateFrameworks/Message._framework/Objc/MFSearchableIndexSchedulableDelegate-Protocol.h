//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol MFSearchableIndexSchedulable;

@protocol MFSearchableIndexSchedulableDelegate <NSObject>
- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id<MFSearchableIndexSchedulable>)arg1;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:(id<MFSearchableIndexSchedulable>)arg1;
- (void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id<MFSearchableIndexSchedulable>)arg1;
- (BOOL)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id<MFSearchableIndexSchedulable>)arg1;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id<MFSearchableIndexSchedulable>)arg1;
- (void)searchableIndexSchedulable:(id<MFSearchableIndexSchedulable>)arg1 didGenerateImportantPowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)searchableIndexSchedulable:(id<MFSearchableIndexSchedulable>)arg1 didGeneratePowerEventWithIdentifier:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)searchableIndexSchedulable:(id<MFSearchableIndexSchedulable>)arg1 didIndexForTime:(double)arg2;
- (void)searchableIndexSchedulable:(id<MFSearchableIndexSchedulable>)arg1 didIndexItemCount:(long long)arg2;
@end

