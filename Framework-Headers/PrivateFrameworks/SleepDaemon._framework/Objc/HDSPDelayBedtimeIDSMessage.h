//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/HDSPEventRecordMessage.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface HDSPDelayBedtimeIDSMessage : HDSPEventRecordMessage
{
}

@property (readonly, nonatomic) NSDate *bedtimeDelayedUntil;

- (id)dateDescription;
- (id)initWithBedtimeDelayedUntilDate:(id)arg1 timeout:(double)arg2;

@end
