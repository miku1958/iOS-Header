//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNVideoProcessorCadence.h>

@interface VNVideoProcessorTimeIntervalCadence : VNVideoProcessorCadence
{
    double _timeInterval;
}

@property (readonly) double timeInterval; // @synthesize timeInterval=_timeInterval;

- (unsigned long long)hash;
- (id)initWithTimeInterval:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)arg1;

@end
