//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPTimeMeasurement : NSObject
{
    struct mach_timebase_info _timebase;
    unsigned long long _start;
    BOOL _started;
    double _elapsedTimeSeconds;
}

@property (readonly) double elapsedTimeSeconds; // @synthesize elapsedTimeSeconds=_elapsedTimeSeconds;
@property (readonly) BOOL started; // @synthesize started=_started;

- (id)init;
- (void)reset;
- (int)start;
- (int)stop;

@end

