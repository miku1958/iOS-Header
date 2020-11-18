//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/MMCSOperationStateTimeRange-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface CKOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange>
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
@property (strong) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (long long)compareStartTime:(id)arg1;
- (long long)compareStopTime:(id)arg1;
- (id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;

@end
