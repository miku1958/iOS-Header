//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLAWDSessionTracker.h>

@class NSArray, NSMutableArray;

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker
{
    NSMutableArray *_internalTrackedSessions;
    NSArray *_trackedSessions;
}

@property (readonly) NSArray *trackedSessions; // @synthesize trackedSessions=_trackedSessions;

- (void).cxx_destruct;
- (void)clearTrackedSessions;
- (id)initWithModel:(id)arg1;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;

@end

