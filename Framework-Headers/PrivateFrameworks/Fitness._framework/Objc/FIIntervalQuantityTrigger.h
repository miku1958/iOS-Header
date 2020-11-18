//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FIQuantityTimeSlice, HKQuantity, HKQuantityType, NSDate;

@interface FIIntervalQuantityTrigger : NSObject
{
    FIQuantityTimeSlice *_slice;
    HKQuantity *_threshold;
    BOOL _finalized;
    CDUnknownBlockType _completion;
    NSDate *_triggeredDate;
}

@property (readonly, nonatomic) HKQuantityType *quantityType; // @dynamic quantityType;
@property (readonly, nonatomic) BOOL triggered; // @dynamic triggered;
@property (readonly, nonatomic) NSDate *triggeredDate; // @synthesize triggeredDate=_triggeredDate;

- (void).cxx_destruct;
- (id)_finalizedTriggerByAddingSample:(id)arg1 toSlice:(id)arg2 withPreviousTotal:(id)arg3 threshold:(id)arg4;
- (id)addingSample:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)initWithQuantityTimeslice:(id)arg1 threshold:(id)arg2 triggeredDate:(id)arg3;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 threshold:(id)arg3;
- (id)settingTimeSlice:(id)arg1;

@end
