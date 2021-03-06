//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MMCS/MMCSOperationStateTimeRange-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface MMCSOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange>
{
    unsigned long long _operationState;
    NSDate *_startDate;
    double _duration;
}

@property (readonly) double absoluteStart;
@property (readonly) double absoluteStop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration; // @synthesize duration=_duration;
@property (readonly) double executing;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long operationState; // @synthesize operationState=_operationState;
@property (readonly) double queueing;
@property (readonly) double relativeStart;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;

+ (id)describedSortedRanges:(id)arg1;
+ (id)descriptionWithOperationState:(unsigned long long)arg1 absoluteStart:(double)arg2 duration:(double)arg3;
+ (id)stringForOperationState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (long long)compareStartTime:(id)arg1;
- (long long)compareStopTime:(id)arg1;
- (id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;

@end

