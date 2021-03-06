//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKEventMetric, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BRCEventMetric : NSObject
{
    BOOL _isCKMetric;
    NSString *_eventName;
    NSDate *_startTime;
    NSDate *_endTime;
    CKEventMetric *_associatedCKEventMetricIfAvailable;
}

@property (readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable; // @synthesize associatedCKEventMetricIfAvailable=_associatedCKEventMetricIfAvailable;
@property (strong, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property (readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property (nonatomic) BOOL isCKMetric; // @synthesize isCKMetric=_isCKMetric;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;

- (void).cxx_destruct;
- (id)additionalPayload;
- (void)associateWithCompletedOperation:(id)arg1;
- (id)description;
- (id)initWithEventName:(id)arg1;
- (id)subDescription;

@end

