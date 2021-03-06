//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, HKQuantityType, NSArray, NSDate;

@interface FIQuantityTimeSlice : NSObject
{
    NSArray *_uncommittedSamples;
    NSDate *_lastCommitDate;
    BOOL _finalized;
    HKQuantityType *_quantityType;
    NSDate *_startDate;
    NSDate *_endDate;
    HKQuantity *_committedTotal;
}

@property (readonly, nonatomic) HKQuantity *committedAndAddedTotal;
@property (readonly, nonatomic) HKQuantity *committedTotal; // @synthesize committedTotal=_committedTotal;
@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) BOOL finalized; // @synthesize finalized=_finalized;
@property (readonly, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (id)_commitingSamples:(id)arg1 toPreviousCommittedTotal:(id)arg2 untilDate:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)_totalByCommittingSample:(id)arg1 toPreviousTotal:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)addingSample:(id)arg1 error:(id *)arg2;
- (id)addingSamples:(id)arg1 error:(id *)arg2;
- (id)committingUntilDate:(id)arg1;
- (id)description;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 uncommitedSamples:(id)arg4 lastCommitDate:(id)arg5 committedTotal:(id)arg6 finalized:(BOOL)arg7;
- (id)settingEndDate:(id)arg1;

@end

